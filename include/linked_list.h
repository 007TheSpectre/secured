/*
** EPITECH PROJECT, 2024
** linked_list.h
** File description:
** linked_list.h
*/

/**
 * @file linked_list.h
 * @brief Déclarations des structures et fonctions pour la gestion de listes chaînées génériques.
 */

#ifndef LINKED_LIST_H_
    #define LINKED_LIST_H_

    #include <stdlib.h>
    #include <stddef.h>
    #include <stdio.h>

/**
 * @struct linked_list
 * @brief Structure d'un noeud de liste chaînée générique.
 */

typedef struct linked_list {
    void *data;
    struct linked_list *next;
} linked_list_t;

/**
 * @brief Ajoute un élément à la fin de la liste.
 *
 * @param node Tête de la liste.
 * @param data Donnée à ajouter.
 * @return Nouvelle tête de la liste.
 */
linked_list_t *adding_end(linked_list_t *node, void *data);

/**
 * @brief Ajoute un élément au début de la liste.
 *
 * @param node Tête de la liste.
 * @param data Donnée à ajouter.
 * @return Nouvelle tête de la liste.
 */
linked_list_t *adding_begin(linked_list_t *node, void *data);

/**
 * @brief Libère la mémoire de la liste chaînée.
 *
 * @param node Tête de la liste.
 * @param free_data Fonction pour libérer la donnée.
 */
void free_linked_list(linked_list_t *node, void (*free_data)(void *));

/**
 * @brief Affiche la liste chaînée.
 *
 * @param node Tête de la liste.
 * @param disp_data Fonction pour afficher la donnée.
 */
void disp_linked_list(linked_list_t *node, void (*disp_data)(void *));

/**
 * @brief Transforme les paramètres d'un programme en liste chaînée.
 *
 * @param ac Nombre d'arguments.
 * @param av Tableau d'arguments.
 * @return Tête de la liste chaînée.
 */
linked_list_t *my_params_to_list(int ac, char *const *av);

/**
 * @brief Inverse la liste chaînée.
 *
 * @param begin Pointeur vers la tête de la liste.
 */
void my_rev_list(linked_list_t **begin);

/**
 * @brief Retourne la taille de la liste chaînée.
 *
 * @param begin Tête de la liste.
 * @return Taille de la liste.
 */
int my_list_size(linked_list_t const *begin);

/**
 * @brief Supprime les noeuds correspondant à une donnée de référence.
 *
 * @param begin Pointeur vers la tête de la liste.
 * @param data_ref Donnée de référence.
 * @param cmp Fonction de comparaison.
 * @return Nombre de noeuds supprimés.
 */
int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)());

/**
 * @brief Concatène deux listes chaînées.
 *
 * @param begin1 Pointeur vers la première liste.
 * @param begin2 Tête de la deuxième liste.
 */
void my_concat_list(linked_list_t **begin1, linked_list_t *begin2);

/**
 * @brief Trie la liste chaînée selon une fonction de comparaison.
 *
 * @param begin Pointeur vers la tête de la liste.
 * @param cmp Fonction de comparaison.
 */
void my_sort_list(linked_list_t **begin, int (*cmp)());

#endif
