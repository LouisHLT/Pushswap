/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** p_op.c
*/

#include "../include/my.h"

void execute_pa(l_a_t **head, l_a_t **head_b)
{
    l_a_t *new_node = NULL;
    new_node = (*head_b);
    (*head_b) = (*head_b)->next;
    new_node->next = (*head);
    (*head) = new_node;
}

void execute_pb(l_a_t **head, l_a_t **head_b)
{
    int temp = (*head)->data;
    *head = (*head)->next;
    l_a_t *new_node = malloc(sizeof(l_a_t));
    new_node->data = temp;
    new_node->next = (*head_b);
    (*head_b) = new_node;
}
