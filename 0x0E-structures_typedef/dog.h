#ifndef _DOG_H_
#define _DOG_H_
/**
  * struct dog - stores record of a dog
  * @name: name of a dog
  * @age: age of a dog
  * @owner: owner of the dog
  * Description: structure or record of a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
