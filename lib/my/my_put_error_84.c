/*
** EPITECH PROJECT, 2024
** my_put_error_84.c
** File description:
** my_put_error_84.c
*/

#include <unistd.h>
#include "my.h"

int my_put_error_84(const char *err_msg)
{
    write(2, err_msg, my_strlen(err_msg));
    return 84;
}
