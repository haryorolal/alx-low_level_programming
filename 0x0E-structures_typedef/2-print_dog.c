#include "dog.h"
#include<stdio.h>
/**
 * print_dog - function that prpints struct dog
 * @d: only argument
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if ((*d).name == NULL || (*d).age == 0 || (*d).owner == NULL)
		{
			printf("(nill)");
		}
		if ((*d).name)
			printf("Name: %s\n", (*d).name);
		if ((*d).age)
			printf("Age: %lf\n", (*d).age);
		if ((*d).owner)
			printf("Owner: %s\n", (*d).owner);
	}
}
