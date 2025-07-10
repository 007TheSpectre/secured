# Secured

Secured est un projet C ayant pour objectif d'implémenter une **table de hachage** simple.
Cette bibliothèque permet de stocker des paires clé/valeur, d'insérer, de rechercher
et de supprimer des éléments efficacement.

## Compilation

La compilation produit la bibliothèque statique `libhashtable.a`.
Il suffit d'exécuter :

```sh
make
```

Les dépendances `libmy` et `liblinked_list` sont compilées automatiquement via le Makefile du
répertoire `lib/`.

## Utilisation

Une fois la bibliothèque compilée, il est possible de l'inclure dans vos projets :

```c
#include "secured.h"
```

Les fonctions principales disponibles sont :

- `new_hashtable()` : créer une table de hachage
- `ht_insert()` : insérer ou mettre à jour une clé
- `ht_search()` : rechercher une clé
- `ht_delete()` : supprimer une clé
- `ht_dump()` : afficher le contenu de la table
- `delete_hashtable()` : libérer la table

## Documentation Doxygen

La documentation du code est générée avec **Doxygen** grâce au fichier `Doxyfile` situé
à la racine du dépôt. Pour générer la documentation HTML :

```sh
doxygen Doxyfile
```

Les fichiers seront produits dans le dossier `doc/`. Ouvrez `doc/html/index.html`
dans votre navigateur pour consulter l'API détaillée de la bibliothèque.

## Fonctionnement général

La table de hachage repose sur un tableau de listes chaînées pour gérer les collisions.
Chaque entrée de la table contient un `linked_list_t` (défini dans `linked_list.h`).
Les valeurs sont stockées dans une structure `data_t` :

```c
typedef struct data_s {
    int hash;
    char *value;
} data_t;
```

La fonction de hachage utilisée se trouve dans `src/hash.c` et applique un calcul
simple à partir d'une clé et de la taille de la table. Les fonctions d'insertion,
de recherche et de suppression exploitent ce hash pour accéder rapidement au bon
bucket.

## Licence

Ce projet est fourni dans le cadre de l'enseignement à Epitech. Vous pouvez
l'utiliser à des fins pédagogiques.
