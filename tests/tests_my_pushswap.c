/*
** EPITECH PROJECT, 2022
** Pushswap
** File description:
** tests_my_pushswap.c
*/

#include <criterion/redirect.h>
#include <criterion/criterion.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}


/* Pushswap */

Test(radx, test_algo_one, .init = redirect_all_std)
{
    int ac = 2;
    char *av[] = {"./pushswap","1"};
    error_handling(ac, av);
    array_t *arr_a = malloc(sizeof(array_t));
    array_t *arr_b = malloc(sizeof(array_t));
    arr_a->res = malloc(sizeof(char) * (ac - 1));

    l_a_t *head = NULL;
    l_a_t *head_b = NULL;
    radx(&head, &head_b, arr_a, arr_b);
    write(1, "\n", 1);
    cr_assert_stdout_eq_str("\n");
}

Test(error_handling, call_with_one_arg, .init = redirect_all_std)
{
    int ac = 1;
    char *av[] = {"./pushswap"};
    my_printf("%i", error_handling(ac, av));
    cr_assert_stdout_eq_str("84");
}

Test(rad, test_algo_two, .init = redirect_all_std)
{
    int ac = 3;
    char *av[] = {"./pushswap","1", "2"};
    error_handling(ac, av);
    array_t *arr_a = malloc(sizeof(array_t));
    array_t *arr_b = malloc(sizeof(array_t));
    arr_a->res = malloc(sizeof(char) * (ac - 1));

    l_a_t *head = NULL;
    l_a_t *head_b = NULL;
    radx(&head, &head_b, arr_a, arr_b);
    write(1, "\n", 1);
    cr_assert_stdout_eq_str("ra pb pa ra pb pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa pb pb pa pa\n");
}
/* LIB */
/* Test MINI_PRINTF*/

Test(mini_printf, test_s_printf, .init = redirect_all_std)
{
    char *var = "the long string";
    my_printf("%s", var);
    cr_assert_stdout_eq_str("the long string");
}

Test(mini_printf, test_i_printf, .init = redirect_all_std)
{
    int var = 667;
    my_printf("%i", var);
    cr_assert_stdout_eq_str("667");
}

Test(mini_printf, test_d_printf, .init = redirect_all_std)
{
    int var = 669;
    my_printf("%d", var);
    cr_assert_stdout_eq_str("669");
}

Test(mini_printf, test_c_printf, .init = redirect_all_std)
{
    char var = 'a';
    my_printf("print %c", var);
    cr_assert_stdout_eq_str("print a");
}

Test(mini_printf, test_prct_printf, .init = redirect_all_std)
{
    my_printf("here %%");
    cr_assert_stdout_eq_str("here %%");
}

Test(mini_printf, test_sentence_printf, .init = redirect_all_std)
{
    my_printf("the long sentence");
    cr_assert_stdout_eq_str("the long sentence");
}

Test(mini_printf, negative_i_printf, .init = redirect_all_std)
{
    int var = -667;
    my_printf("%i", var);
    cr_assert_stdout_eq_str("-667");
}

/* Test My_Atoi*/

Test(my_atoi, test_atoi, .init = redirect_all_std)
{
    char *str = "123";
    my_printf("%i", my_atoi(str));
    cr_assert_stdout_eq_str("123");
}

Test(my_atoi, test_negative_value, .init = redirect_all_std)
{
    char *str = "-123";
    my_printf("%i", my_atoi(str));
    cr_assert_stdout_eq_str("-123");
}

/* Test My_Strlen*/

Test(my_strlen, test_len, .init = redirect_all_std)
{
    char *var = "long length";
    my_printf("%i", my_strlen(var));
    cr_assert_stdout_eq_str("11");
}

/* Test My_strcpy*/

Test(my_strcpy, test_strcpy, .init = redirect_all_std)
{
    char *var = "long length";
    char *dest = malloc(sizeof(char) * 11);
    my_strcpy(dest, var);
    my_printf("%s", dest);
    cr_assert_stdout_eq_str("long length");
}

/* Test My_strcmp*/

Test(my_strcmp, test_strcmp, .init = redirect_all_std)
{
    char *var = "long length";
    char *var2 = "long length";
    my_printf("%i", my_strcmp(var, var2));
    cr_assert_stdout_eq_str("0");
}

Test(my_strcmp, test_strcmp_baad_length, .init = redirect_all_std)
{
    char *var = "long length";
    char *var2 = "long length 2";
    my_printf("%i", my_strcmp(var, var2));
    cr_assert_stdout_eq_str("1");
}

/* Test My_strcat */

Test(my_strcat, test_strcat, .init = redirect_all_std)
{
    char test[5] = "a";
    char *res = "test";
    my_printf("%s", my_strcat(test, res));
    cr_assert_stdout_eq_str("atest");
}

/* Test My_str_is_alpha */

Test(my_str_isalpha, test_str_is_alpha, .init = redirect_all_std)
{
    char *var = "longlength";
    my_printf("%i", my_str_isalpha(var));
    cr_assert_stdout_eq_str("1");
}

Test(my_str_isalpha, test_str_is_alpha_bad, .init = redirect_all_std)
{
    char *var = "longlength2";
    my_printf("%i", my_str_isalpha(var));
    cr_assert_stdout_eq_str("0");
}