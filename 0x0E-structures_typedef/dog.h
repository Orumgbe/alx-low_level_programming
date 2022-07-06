#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structer of dog data
 * @name: first member
 * @age: second mmember
 * @owner: third member
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
