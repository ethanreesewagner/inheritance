#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char * name;
    int age;
} vector;

typedef struct{
    vector old;
    int skill;
} new_vector;

int main()
{
    vector person;
    person.name="Ethan";
    person.age=13;
    new_vector human;
    human.old=person;
    human.skill=69;
    printf("%s\n",human.old.name);
    printf("%i\n",human.old.age);
    printf("%i\n",human.skill);
    return 0;
}
