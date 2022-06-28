#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct dog - Dog type
 * @name: Firts member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
