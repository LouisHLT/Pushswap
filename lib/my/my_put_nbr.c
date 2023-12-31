/*
** EPITECH PROJECT, 2022
** louis
** File description:
** my_put_nbr.c
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int mod = 0;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        mod = (nb % 10);
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(48 + mod);
    } else {
        mod = nb;
        my_putchar(48 + mod);
    }
}
