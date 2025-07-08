/*
** EPITECH PROJECT, 2025
** secured
** File description:
** ht_dump.c
*/

/**
 * @file ht_dump.c
 * @brief Fonctions pour afficher le contenu d'une table de hachage.
 */

#include "secured.h"

/**
 * @brief Affiche un élément de type data_t.
 *
 * @param data Pointeur vers la donnée à afficher.
 */
void disp_data_t(void *data)
{
    my_putstr("> ");
    my_put_nbr(((data_t *)data)->hash);
    my_putstr(" - ");
    my_putstr(((data_t *)data)->value);
    my_putchar('\n');
}

/**
 * @brief Affiche le contenu de la table de hachage.
 *
 * @param ht Pointeur vers la table de hachage à afficher.
 */
void ht_dump(hashtable_t *ht)
{
    if (!ht)
        return;
    for (int i = 0; i < ht->len; i++) {
        my_putchar('[');
        my_put_nbr(i);
        my_putstr("]:\n");
        disp_linked_list(ht->array[i].list, disp_data_t);
    }
}
