/*
** EPITECH PROJECT, 2020
** my_print
** File description:
** main
*/

#include "../includes/bsprintf.h"

void target_flags(char flag, va_list *args)
{
    target_flags_2(flag, args);
    switch (flag) {
    case 'c':
        my_putchar(va_arg(*args, int));
        break;
    case 's':
        my_putstr(va_arg(*args, char *));
        break;
    case '%':
        my_putchar('%');
        break;
    case 'x':
        convert_to_hexa(va_arg(*args, int));
        break;
    default:
        return ;
        break;
    }
}

void target_flags_2(char flag, va_list *args)
{
    switch (flag) {
    case 'i':
        print_int(va_arg(*args, int));
        break;
    case 'd':
        print_int(va_arg(*args, int));
        break;
    case 'u':
        print_unsigned_int(va_arg(*args, int));
        break;
    case 'o':
        convert_to_octal(va_arg(*args, int));
        break;
    case 'b':
        convert_to_binary(va_arg(*args, int));
    default:
        return ;
        break;
    }
}

void my_printf(char *src, ...)
{
    va_list args;
    int i = 0;

    va_start(args,src);
    while (src[i]) {
        if (i != 0 && src[i - 1] == '%')
            target_flags(src[i], &args);
        else if (src[i] != '%')
            my_putchar(src[i]);
        i++;
    }
}