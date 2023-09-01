/*
** EPITECH PROJECT, 2022
** Pushswap
** File description:
** algo.c
*/

#include "../include/my.h"

void check_display_pa(int i, int j)
{
    if (j == 0 && i == 0) {
        write(1, "pa", 2);
    } else {
        write(1, " pa", 3);
    }
}

void check_for_read_bit(l_a_t **head, l_a_t **head_b, int i, int j)
{
    if ((*head)->data & (1 << j)) {
        execute_ra(head);
        if (i == 0 && j == 0)
            write(1, "ra", 2);
        else
            write(1, " ra", 3);
    } else {
        execute_pb(head, head_b);
        if (j == 0 && i == 0) {
            write(1, "pb", 2);
        } else {
            write(1, " pb", 3);
        }
    }
}

void radx(l_a_t **head, l_a_t **head_b, array_t *arr_a, array_t *arr_b)
{
    int size = arr_a->size;
    int i = 0;
    for (int j = 0; j != 32; j++) {
        for (i = 0; i != size; i++) {
            check_for_read_bit(head, head_b, i, j);
        }
        while ((*head_b) != NULL) {
            execute_pa(head, head_b);
            check_display_pa(i, j);
        }
    }
}
