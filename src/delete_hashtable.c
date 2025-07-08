/**
 * @file delete_hashtable.c
 * @brief Functions to delete and free a hashtable.
 */

#include "secured.h"

/**
 * @brief Frees the memory allocated for a data_t structure.
 *
 * @param data Pointer to the data_t structure to free.
 */
void free_data_t(void *data) {
  free(((data_t *)data)->value);
  free(data);
}

/**
 * @brief Deletes a hashtable and frees all associated memory.
 *
 * @param ht Pointer to the hashtable to delete.
 */
void delete_hashtable(hashtable_t *ht) {
  if (!ht) {
    my_put_error_84("delete_hashtable : invalid params\n");
    return;
  }
  for (int i = 0; i < ht->len; i++) {
    free_linked_list(ht->array[i].list, free_data_t);
  }
  free(ht->array);
  free(ht);
}
