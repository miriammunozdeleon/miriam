#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[12],lastname[12],sexe[12];
    int age,num;

    printf("please enter your name:\n");
    scanf("%s", &name);

    printf("please enter your lastname:\n");
    scanf("%s", &lastname);

    printf("please enter your  age :\n");
    scanf("%d", &age);

    printf("please enter your  sexe :\n");
    scanf("%s", &sexe);

    printf("please enter your phonenumber:\n");
    scanf("%d", &num);

    printf("name: %s lastname : %s age : %d sexe : %s phonenumber : %d", name, lastname, age, sexe, num);

