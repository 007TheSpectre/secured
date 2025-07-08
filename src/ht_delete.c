/*
** EPITECH PROJECT, 2025
** secured
** File description:
** ht_delete.c
*/

/**
 * @file ht_delete.c
 * @brief Functions to delete an element from a hashtable.
 */

#include "secured.h"

/**
 * @brief Compare deux structures data_t selon leur hash.
 *
 * @param data1 Premier élément à comparer.
 * @param data2 Deuxième élément à comparer.
 * @return -1 si data1 < data2, 1 si data1 > data2, 0 sinon.
 */
int hash_cmp(data_t *data1, data_t *data2) {
  if (data1->hash < data2->hash)
    return -1;
  if (data1->hash > data2->hash)
    return 1;
  return 0;
}

/**
 * @brief Supprime une clé de la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à supprimer.
 * @return 0 en cas de succès, 84 en cas d'erreur.
 */
int ht_delete(hashtable_t *ht, char *key) {
  int hash_v;
  data_t data_ref = {0};

  if (!ht || !key)
    return my_put_error_84("ht_delete : invalid params\n");
  hash_v = ht->hash(key, ht->len);
  data_ref.hash = hash_v;
  if (my_delete_nodes(&ht->array[hash_v % ht->len].list, &data_ref, hash_cmp))
    return my_put_error_84("ht_delete : element to delete not found\n");
  return 0;
}
