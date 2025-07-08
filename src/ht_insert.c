/*
** EPITECH PROJECT, 2025
** secured
** File description:
** ht_insert.c
*/

/**
 * @file ht_insert.c
 * @brief Fonctions pour insérer ou mettre à jour une clé dans la table de hachage.
 */

#include "secured.h"

/**
 * @brief Met à jour la valeur si la clé existe déjà dans la table.
 *
 * @param ht Table de hachage.
 * @param hash_v Valeur de hachage de la clé.
 * @param value Nouvelle valeur à associer à la clé.
 * @return 1 si la clé existait et a été mise à jour, 0 sinon, 2 en cas d'erreur d'allocation.
 */
int if_key_arleady_exist(hashtable_t *ht, int hash_v, char *value)
{
    linked_list_t *tmp = NULL;
    char *value_data = NULL;

    for (linked_list_t *current = ht->array[hash_v % ht->len].list;
    current; current = current->next) {
        if (((data_t *)current->data)->hash == hash_v) {
            tmp = current;
        }
    }
    if (!tmp)
        return 0;
    value_data = my_strdup(value);
    if (!value_data)
        return 2;
    free(((data_t *)tmp->data)->value);
    ((data_t *)tmp->data)->value = value_data;
    return 1;
}

/**
 * @brief Ajoute une nouvelle clé si elle n'existe pas dans la table.
 *
 * @param ht Table de hachage.
 * @param hash_v Valeur de hachage de la clé.
 * @param value Valeur à associer à la clé.
 * @return 0 en cas de succès, 84 en cas d'erreur.
 */
int if_key_dont_exist(hashtable_t *ht, int hash_v, char *value)
{
    data_t *data = (data_t *)malloc(sizeof(data_t));

    if (!data)
        return my_put_error_84("ht_insert : data_t *data : malloc failed\n");
    data->hash = hash_v;
    data->value = my_strdup(value);
    if (!data->value) {
        free(data);
        return my_put_error_84("ht_insert : my_strdup : malloc failed\n");
    }
    ht->array[hash_v % ht->len].list =
    adding_begin(ht->array[hash_v % ht->len].list, data);
    return 0;
}

/**
 * @brief Insère ou met à jour une clé/valeur dans la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à insérer ou mettre à jour.
 * @param value Valeur à associer à la clé.
 * @return 0 en cas de succès, 84 en cas d'erreur.
 */
int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int hash_v;
    int return_value;

    if (!ht || !key || !value)
        return my_put_error_84("ht_insert : invalid params\n");
    hash_v = ht->hash(key, ht->len);
    return_value = if_key_arleady_exist(ht, hash_v, value);
    if (return_value == 1)
        return 0;
    if (return_value == 2)
        return my_put_error_84("ht_insert : my_strdup : malloc failed\n");
    if (if_key_dont_exist(ht, hash_v, value))
        return 84;
    return 0;
}
