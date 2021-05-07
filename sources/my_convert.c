/*
** EPITECH PROJECT, 2020
** my_convert
** File description:
** my_convert
*/

#include "../includes/bsprintf.h"

unsigned int convert_to_binary(unsigned int nbr)
{
    if (nbr >= 2) {
        convert_to_binary(nbr / 2);
        convert_to_binary(nbr % 2);
    } else
        my_putchar(nbr + '0');
    return (0);
}

unsigned int convert_to_hexa(unsigned int nbr)
{
    if (nbr >= 16) {
        convert_to_hexa(nbr / 16);
        convert_to_hexa(nbr % 16);
    } else
        my_putchar(nbr + '0');
    return (0);
}

unsigned int convert_to_octal(unsigned int nbr)
{
    if (nbr >= 8) {
        convert_to_octal(nbr / 8);
        convert_to_octal(nbr % 8);
    } else {
        my_putchar(nbr + '0');
    }
    return (0);
}

