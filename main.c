/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** main.c
*/

#include "include/my.h"

int main(int ac, char **av)
{
    int temp = error_handling(ac, av);
    if (temp == 84)
        return 84;
    array_t *arr_a = malloc(sizeof(array_t));
    array_t *arr_b = malloc(sizeof(array_t));
    arr_a->res = malloc(sizeof(char) * (ac - 1));

    l_a_t *head = NULL;
    l_a_t *head_b = NULL;

    fill_linked_list(&head, ac, av);
    get_size_lla(head, arr_a);
    if (arr_a->size == 1) {
        write(1, "\n", 1);
        return 0;
    }
    radx(&head, &head_b, arr_a, arr_b);
    write(1, "\n", 1);
    return 0;
}
