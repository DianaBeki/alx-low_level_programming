#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exit_x_error - print error message and exit of program
 *
 * Return: nothing.
 * On error, -1 is returned, and errno is set appropriately.
 */
void exit_x_error(void)
{
        printf("Error\n");
        exit(98);
}

/**
 * number_str_len - returns the length of string numbers or exit
 *
 * @string: pointer to string.
 * Return: length of string.
 */
int number_str_len(char *string)
{
        int len = 0;

        while (string[len])
        {
                if (string[len] < '0' || '9' < string[len])
                        exit_x_error();
                len++;
        }
        return (len);
}

/**
 * print_number_string - print number of string
 *
 * @array_respuesta: pointer to string.
 * @len: Length of the string
 *
 * Return: nothing.
 */void print_number_string(char *array_respuesta, int len)
{
        char printed = 0;
        int i;

        for (i = 0; i < len; i++)
                if (printed || ('0' < array_respuesta[i] && array_respuesta[i] <= '9'))
                {
                        _putchar(array_respuesta[i]);
                        printed = 1;
                }

        if (!printed)
                _putchar('0');
        _putchar('\n');
}

