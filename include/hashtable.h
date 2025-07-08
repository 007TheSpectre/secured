/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

/**
 * @file hashtable.h
 * @brief Déclarations des structures et fonctions pour la table de hachage.
 */

#ifndef HASHTABLE_H
    #define HASHTABLE_H

    #include "linked_list.h"

/**
 * @struct data_s
 * @brief Structure contenant la valeur et le hash associé à une clé.
 */
typedef struct data_s {
    int hash;
    char *value;
} data_t;

/**
 * @struct list_s
 * @brief Structure contenant une liste chaînée de data_t.
 */
typedef struct list_s {
    linked_list_t *list;
} list_t;

/**
 * @struct hashtable_s
 * @brief Structure représentant la table de hachage.
 */
typedef struct hashtable_s {
    list_t *array;
    int len;
    int (*hash)(char *, int);
} hashtable_t;

/**
 * @brief Fonction de hachage pour une clé.
 *
 * @param key Clé à hacher.
 * @param len Taille de la table.
 * @return Valeur de hachage.
 */
int hash(char *key, int len);

/**
 * @brief Crée une nouvelle table de hachage.
 *
 * @param hash Fonction de hachage à utiliser.
 * @param len Taille de la table.
 * @return Pointeur vers la nouvelle table, NULL en cas d'erreur.
 */
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);

/**
 * @brief Supprime et libère la mémoire d'une table de hachage.
 *
 * @param ht Table de hachage à supprimer.
 */
void delete_hashtable(hashtable_t *ht);

/**
 * @brief Insère ou met à jour une clé/valeur dans la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à insérer ou mettre à jour.
 * @param value Valeur à associer à la clé.
 * @return 0 en cas de succès, 84 en cas d'erreur.
 */
int ht_insert(hashtable_t *ht, char *key, char *value);

/**
 * @brief Supprime une clé de la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à supprimer.
 * @return 0 en cas de succès, 84 en cas d'erreur.
 */
int ht_delete(hashtable_t *ht, char *key);

/**
 * @brief Recherche la valeur associée à une clé dans la table de hachage.
 *
 * @param ht Table de hachage.
 * @param key Clé à rechercher.
 * @return Pointeur vers la valeur trouvée, NULL sinon.
 */
char *ht_search(hashtable_t *ht, char *key);

/**
 * @brief Affiche le contenu de la table de hachage.
 *
 * @param ht Table de hachage à afficher.
 */
void ht_dump(hashtable_t *ht);

#endif /* HASHTABLE_H */
