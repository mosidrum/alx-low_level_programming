#ifndef DOG_H
#define DOG_H

/**
* struct dog - a dog's basic info
* @name: first member
* @age: second member
* @owner: third member
*
* Description: Longer description
*/

struct dog
{
char *name;
char *owner;
float age;
}

/**
* dog_t - typedef for struct dog
*/

typedef struct dog dog_t;
#endif
