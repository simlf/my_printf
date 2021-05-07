/*
** EPITECH PROJECT, 2020
** bsprintf
** File description:
** bsprintf
*/

#ifndef BSPRINTF_H_
#define BSPRINTF_H_
#include <stdarg.h>
#include <unistd.h>
int my_putstr(char const *str);
int my_strlen(char *str);
int print_int(int nb);
unsigned int print_unsigned_int(unsigned int nb);
void my_putchar(char c);
unsigned int convert_to_binary(unsigned int nbr);
unsigned int convert_to_octal(unsigned int nbr);
unsigned int convert_to_hexa(unsigned int nbr);
void target_flags(char flag, va_list *args);
void target_flags_2(char flag, va_list *args);
#endif
