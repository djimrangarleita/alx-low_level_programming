#ifndef DOG_HEADER
#define DOG_HEADER

/**
 * struct dog - dog struct
 * @name: char pointer, name of the dog
 * @age: float, age of the dog
 * @owner: char pointer, owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new alias for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
