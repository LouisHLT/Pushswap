/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** fill_linked_list.c
*/

#include "../include/my.h"

void add_elem(l_a_t **head, int data)
{
    l_a_t *new = malloc(sizeof(l_a_t));
    l_a_t *last = *head;

    new->data = data;
    new->next = NULL;
    if (*head == NULL) {
        *head = new;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new;
}

void fill_linked_list(l_a_t **head, int ac, char **av)
{
    for (int i = 1; i < ac; i++) {
        add_elem(head, my_atoi(av[i]));
    }
}

void get_size_lla(l_a_t *head, array_t *arr_a)
{
    int size = 0;
    while (head != NULL) {
        size++;
        head = head->next;
    }
    arr_a->size = size;
}

void get_size_llb(l_a_t **head_b, array_t *arr_b)
{
    int size = 0;
    l_a_t *current = *head_b;
    while (current != NULL) {
        size++;
        current = current->next;
    }
    arr_b->size = size;
}
