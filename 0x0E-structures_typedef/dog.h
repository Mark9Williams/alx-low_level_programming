#ifndef DOG_H
#define DOG_H
/**
  * struct dog - stores record of a dog
  * @name: name of a dog
  * @age: age of a dog
  * @owner: owner of the dog
  * Description: It stores the records of a dog in a single variable
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
