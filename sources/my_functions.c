/*
** EPITECH PROJECT, 2020
** my_functions
** File description:
** my_functions
*/

#include "../includes/bsprintf.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i]) {
        write(1, &str[i], 1);
        i++;
    }
    return (0) ;
}

int print_int(int nbr)
{
    if (nbr == -2147483648) {
        write(1, "-2147483648", 11);
        return (0);
    }
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr > 9) {
        print_int(nbr / 10);
        print_int(nbr % 10);
    } else {
        my_putchar(nbr + '0');
    }
    return (0);
}

unsigned int print_unsigned_int(unsigned int nbr)
{
    if (nbr > 9) {
        print_unsigned_int(nbr / 10);
        print_unsigned_int(nbr % 10);
    } else {
        my_putchar(nbr + '0');
    }
    return (0);
}