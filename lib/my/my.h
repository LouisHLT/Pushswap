/*
** EPITECH PROJECT, 2022
** TEK1_22-23
** File description:
** my.h
*/


#ifndef _MY_H_
    #define _MY_H_
    #define BUFF_SIZE 1024

    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <dirent.h>
    #include <stdarg.h>
    #include <pwd.h>
    #include <grp.h>
    #include <errno.h>
    #include <time.h>
    #include <stdbool.h>


    typedef struct l_a {
        int data;
        struct l_a *next;
    } l_a_t;

    typedef struct array {
        int *l_a;
        int size;
        char *res;
    } array_t;



/* LIB */
void my_putchar(char c);
int my_putstr(char const *str);
char *my_strcat(char *dest, char const *str);
int my_strlen(char const *str);
int my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
int rows_string(char *str);
char **malloc_array(char *str);
int switch_check(const char *format, int i, va_list list);
int my_printf(const char *format, ...);
char *my_strcpy(char *dest, char const *src);
char **my_str_to_word_array(char *str, char separator);
char *fill_array(char *str, char *array, int start, int end);
int count_separators(char *buf, char separator);
int my_atoi(char *str);
int	my_str_isalpha(char *str);

/* Error handling */
int error_handling(int ac, char **av);

/* P-op */
void execute_pb(l_a_t **head, l_a_t **head_b);
void execute_pa(l_a_t **head, l_a_t **head_b);

/* R-op */
void execute_ra(l_a_t **head);

/* RadX */
void radx(l_a_t **head, l_a_t **head_b, array_t *arr_a, array_t *arr_b);
void check_for_read_bit(l_a_t **head, l_a_t **head_b, int i, int j);
int is_sorted(l_a_t **head, array_t *arr_a);

/* Fill linked list */
void fill_linked_list(l_a_t **head, int ac, char **av);
void add_elem(l_a_t **head, int date);
void get_size_lla(l_a_t *head, array_t *arr_a);
void get_size_llb(l_a_t **head_b, array_t *arr_b);

/* Display op */
void check_display_pa(int i, int j);

#endif
