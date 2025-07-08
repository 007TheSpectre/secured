/*
** EPITECH PROJECT, 2025
** secured
** File description:
** new_hashtable.c
*/

/**
 * @file new_hashtable.c
 * @brief Fonctions pour créer une nouvelle table de hachage.
 */

#include "secured.h"

/**
 * @brief Crée une nouvelle table de hachage.
 *
 * @param hash Fonction de hachage à utiliser.
 * @param len Taille de la table (nombre de buckets).
 * @return Pointeur vers la nouvelle table, NULL en cas d'erreur.
 */
hashtable_t *new_hashtable(int (*hash)(char *, int), int len) {
  hashtable_t *hashtable = (hashtable_t *)malloc(sizeof(hashtable_t));

  if (!hashtable)
    return my_put_error_null("hashtable : malloc failed\n");
  if (len < 1) {
    free(hashtable);
    return my_put_error_null("new_hashtable : invalid params\n");
  }
  hashtable->array = (list_t *)malloc(sizeof(list_t) * len);
  if (!hashtable->array) {
    free(hashtable);
    return my_put_error_null("hashtable->array : malloc failed\n");
  }
  hashtable->len = len;
  hashtable->hash = hash;
  for (int i = 0; i < len; i++) {
    hashtable->array[i].list = NULL;
  }
  return hashtable;
}
