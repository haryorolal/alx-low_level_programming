#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked - function that allocates memory
 * @b: first operand
 * Return: Always return
 */
void *malloc_checked(unsigned int b)
{
        int *memoSaver;
        
        memoSaver = (int *)malloc(sizeof(int) * b);
        
        if (memoSaver != NULL)
        {
                return (memoSaver);
        }
        else
        {
                exit(98);
        }
}
