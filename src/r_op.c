/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** r_op.c
*/

#include "../include/my.h"

void execute_ra(l_a_t **head)
{
    if ((*head)->next == NULL)
        return;
    l_a_t *last = (*head);
    (*head) = last->next;
    l_a_t *tmp = (*head);
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = last;
    last->next = NULL;
}
