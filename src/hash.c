/*
** EPITECH PROJECT, 2025
** secured
** File description:
** hash.c
*/

/**
 * @file hash.c
 * @brief Hash function implementation for hashtable.
 *
 * This file contains the implementation of the hash function used in the
 * hashtable.
 */

#include "secured.h"

/**
 * @brief Computes a hash value for a given key.
 *
 * @param key The key to hash.
 * @param len The length of the hashtable (number of buckets).
 * @return The computed hash value (always positive).
 */
int hash(char *key, int len) {
  const int prime = 31;
  int hash_value = 0;

  for (int i = 0; i < len; i++)
    hash_value = (hash_value * prime) ^ (key[i]);
  if (hash_value < 0)
    hash_value = -hash_value;
  return hash_value;
}
