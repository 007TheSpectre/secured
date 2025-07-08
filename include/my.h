/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** my.h
*/

/**
 * @file my.h
 * @brief Prototypes des fonctions utilitaires (librairie personnelle).
 */

#ifndef MY_H_
    #define MY_H_

/**
 * @brief Calcule nb à la puissance p (récursif).
 * @param nb Nombre de base.
 * @param p Puissance.
 * @return Résultat de nb^p.
 */
int my_compute_power_rec(int nb, int p);

/**
 * @brief Calcule la racine carrée d'un nombre.
 * @param nb Nombre dont on veut la racine carrée.
 * @return La racine carrée de nb.
 */
int my_compute_square_root(int nb);

/**
 * @brief Trouve le plus petit nombre premier supérieur ou égal à nb.
 * @param nb Nombre de départ.
 * @return Le plus petit nombre premier supérieur ou égal à nb.
 */
int my_find_prime_sup(int nb);

/**
 * @brief Convertit une chaîne de caractères en nombre entier.
 * @param str Chaîne de caractères à convertir.
 * @return Le nombre entier correspondant à la chaîne.
 */
int my_getnbr(char const *str);

/**
 * @brief Vérifie si un nombre est négatif.
 * @param n Nombre à vérifier.
 * @return 1 si n est négatif, 0 sinon.
 */
int my_isneg(int n);

/**
 * @brief Vérifie si un nombre est premier.
 * @param nb Nombre à vérifier.
 * @return 1 si nb est premier, 0 sinon.
 */
int my_is_prime(int nb);

/**
 * @brief Affiche un caractère.
 * @param c Caractère à afficher.
 * @return Toujours 0.
 */
int my_putchar(char c);

/**
 * @brief Affiche un nombre entier.
 * @param nb Nombre à afficher.
 * @return Toujours 0.
 */
int my_put_nbr(int nb);

/**
 * @brief Affiche une chaîne de caractères.
 * @param str Chaîne de caractères à afficher.
 * @return Toujours 0.
 */
int my_putstr(char const *str);

/**
 * @brief Inverse une chaîne de caractères.
 * @param str Chaîne de caractères à inverser.
 * @return La chaîne inversée.
 */
char *my_revstr(char *str);

/**
 * @brief Trie un tableau d'entiers par ordre croissant.
 * @param array Tableau à trier.
 * @param size Taille du tableau.
 */
void my_sort_int_array(int *array, int size);

/**
 * @brief Met en majuscule la première lettre de chaque mot d'une chaîne.
 * @param str Chaîne de caractères à modifier.
 * @return La chaîne avec les premières lettres en majuscule.
 */
char *my_strcapitalize(char *str);

/**
 * @brief Concatène deux chaînes de caractères.
 * @param dest Chaîne de destination.
 * @param src Chaîne source à concaténer.
 * @return La chaîne résultante de la concaténation.
 */
char *my_strcat(char *dest, char const *src);

/**
 * @brief Compare deux chaînes de caractères.
 * @param s1 Première chaîne à comparer.
 * @param s2 Deuxième chaîne à comparer.
 * @return Un entier négatif, zéro ou un entier positif si s1 est respectivement
 *         inférieur, égal ou supérieur à s2.
 */
int my_strcmp(char const *s1, char const *s2);

/**
 * @brief Copie une chaîne de caractères dans une autre.
 * @param dest Chaîne de destination.
 * @param src Chaîne source à copier.
 * @return La chaîne de destination.
 */
char *my_strcpy(char *dest, char const *src);

/**
 * @brief Vérifie si une chaîne ne contient que des caractères alphabétiques.
 * @param str Chaîne à vérifier.
 * @return 1 si la chaîne est alphabétique, 0 sinon.
 */
int my_str_isalpha(char const *str);

/**
 * @brief Vérifie si une chaîne est en minuscules.
 * @param str Chaîne à vérifier.
 * @return 1 si la chaîne est en minuscules, 0 sinon.
 */
int my_str_islower(char const *str);

/**
 * @brief Vérifie si une chaîne ne contient que des chiffres.
 * @param str Chaîne à vérifier.
 * @return 1 si la chaîne est numérique, 0 sinon.
 */
int my_str_isnum(char const *str);

/**
 * @brief Vérifie si une chaîne ne contient que des caractères imprimables.
 * @param str Chaîne à vérifier.
 * @return 1 si la chaîne est imprimable, 0 sinon.
 */
int my_str_isprintable(char const *str);

/**
 * @brief Vérifie si une chaîne est en majuscules.
 * @param str Chaîne à vérifier.
 * @return 1 si la chaîne est en majuscules, 0 sinon.
 */
int my_str_isupper(char const *str);

/**
 * @brief Calcule la longueur d'une chaîne de caractères.
 * @param str Chaîne dont on veut connaître la longueur.
 * @return La longueur de la chaîne.
 */
int my_strlen(char const *str);

/**
 * @brief Met en minuscules une chaîne de caractères.
 * @param str Chaîne à modifier.
 * @return La chaîne avec tous les caractères en minuscules.
 */
char *my_strlowcase(char *str);

/**
 * @brief Concatène un nombre limité de caractères d'une chaîne source à une
 *        chaîne de destination.
 * @param dest Chaîne de destination.
 * @param src Chaîne source à concaténer.
 * @param nb Nombre de caractères à concaténer.
 * @return La chaîne résultante de la concaténation.
 */
char *my_strncat(char *dest, char const *src, int nb);

/**
 * @brief Compare deux chaînes de caractères sur un nombre limité de caractères.
 * @param s1 Première chaîne à comparer.
 * @param s2 Deuxième chaîne à comparer.
 * @param n Nombre de caractères à comparer.
 * @return Un entier négatif, zéro ou un entier positif si s1 est respectivement
 *         inférieur, égal ou supérieur à s2.
 */
int my_strncmp(char const *s1, char const *s2, int n);

/**
 * @brief Copie un nombre limité de caractères d'une chaîne source à une chaîne
 *        de destination.
 * @param dest Chaîne de destination.
 * @param src Chaîne source à copier.
 * @param n Nombre de caractères à copier.
 * @return La chaîne de destination.
 */
char *my_strncpy(char *dest, char const *src, int n);

/**
 * @brief Recherche une sous-chaîne dans une chaîne.
 * @param str Chaîne dans laquelle rechercher.
 * @param to_find Sous-chaîne à rechercher.
 * @return Un pointeur vers le début de la sous-chaîne trouvée, ou NULL si non
 *         trouvée.
 */
char *my_strstr(char *str, char const *to_find);

/**
 * @brief Met en majuscules tous les caractères d'une chaîne.
 * @param str Chaîne à modifier.
 * @return La chaîne avec tous les caractères en majuscules.
 */
char *my_strupcase(char *str);

/**
 * @brief Échange les valeurs de deux entiers.
 * @param a Pointeur vers le premier entier.
 * @param b Pointeur vers le deuxième entier.
 */
void my_swap(int *a, int *b);

/**
 * @brief Duplique une chaîne de caractères.
 * @param src Chaîne à dupliquer.
 * @return Un pointeur vers la chaîne dupliquée.
 */
char *my_strdup(char const *src);

/**
 * @brief Transforme une chaîne de caractères en tableau de mots.
 * @param str Chaîne à transformer.
 * @return Un tableau de pointeurs sur les mots dupliqués.
 */
char **my_str_to_word_array(char const *str);

/**
 * @brief Affiche un message d'erreur sur la sortie d'erreur et retourne 84.
 * @param err_msg Message d'erreur.
 * @return Toujours 84.
 */
int my_put_error_84(const char *err_msg);

/**
 * @brief Affiche un message d'erreur sur la sortie d'erreur et retourne NULL.
 * @param err_msg Message d'erreur.
 * @return Toujours NULL.
 */
void *my_put_error_null(const char *err_msg);

#endif /* MY_H_ */
