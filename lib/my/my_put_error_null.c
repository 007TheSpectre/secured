/*
** EPITECH PROJECT, 2025
** my_put_error_null.c
** File description:
** my_put_error_null.c
*/

#include <unistd.h>
#include "my.h"

void *my_put_error_null(const char *err_msg)
{
    write(2, err_msg, my_strlen(err_msg));
    return NULL;
}
