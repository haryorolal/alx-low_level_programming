#include "main.h"
#include <stdio.h>

/**
 * print_fizz - Program that prints 1-100
 * Description: 'Print fizz buzz'
 * Return: Always 0 (Success)
 */
int main(void)
{
        int end_num = 100;

        for (int i = 1; i <= end_num; i++)
        {
                if (i % 3 == 0 && i % 5 != 0)
                        printf(" Fizz");
                else if (i % 5 == 0 && i % 3 != 0)
                        printf(" Buzz");
                else if (i % 3 == 0 && i % 5 == 0)
                        printf(" FizzBuzz");
                else if (i == 1)
                        printf("%d", i);
                else
                        printf(" %d", i);
        }
        printf("\n");

        return (0);
}
