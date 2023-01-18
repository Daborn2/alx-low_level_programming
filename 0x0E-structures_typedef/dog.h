#ifndef DOG_H
#define DOG_H

/**
 * struct dog - s structure for dog description
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: a credentials of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - Typedef for dog structure
 */
typedef struct dog dog_h;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
