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
/**
 * struct dog_t - dog :)
 * @name: string
 * @age: float
 * @owner: string
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;
int main(void);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
