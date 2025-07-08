/*
** EPITECH PROJECT, 2025
** secured
** File description:
** ht_search.c
*/

/**
 * @file ht_search.c
 * @brief Fonctions pour rechercher une clé dans la table de hachage.
 */

#include "secured.h"

/**
 * @brief Recherche la valeur associée à une clé dans la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à rechercher.
 * @return Pointeur vers la valeur trouvée, NULL sinon.
 */
char *ht_search(hashtable_t *ht, char *key) {
  int hash_v;

  if (!ht || !key)
    return my_put_error_null("ht_search, invalid params\n");
  hash_v = ht->hash(key, ht->len);
  for (linked_list_t *current = ht->array[hash_v % ht->len].list; current;
       current = current->next) {
    if (((data_t *)current->data)->hash == hash_v) {
      return ((data_t *)current->data)->value;
    }
  }
  return NULL;
}
