#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;

    pokemon arr[3]; 

    arr[0].attack = 60;
    arr[0].hp = 50;
    arr[0].speed = 100;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "Pikachu");

    arr[1].attack = 60;
    arr[1].hp = 50;
    arr[1].speed = 100;
    arr[1].tier = 'A';
    strcpy(arr[1].name, "charizard");

    arr[2].attack = 60;
    arr[2].hp = 50;
    arr[2].speed = 100;
    arr[2].tier = 'A';
    strcpy(arr[2].name, "mewtwo");

    for (int i = 0; i <= 3; i++)
    {
        printf("Name :%s\n", arr[i].name);
        printf("Attack :%d\n", arr[i].attack);
        printf("HP :%d\n", arr[i].hp);
        printf("Tier :%c\n", arr[i].tier);
        printf("Speed :%d\n", arr[i].speed);
    }

    return 0;
}