#include <stdio.h>
#include <string.h>

typedef struct
{
    char poke[100];
    char poke2[100];
    char element[100];
    char element2[100];
    char enemy[100];
    int att, deff, heal;
    int att2, deff2, heal2;

} pokemon;

int main()
{
    pokemon ash, enemy;
    char action;
    scanf("%s %d %d %d %s", &ash.poke, &ash.att, &ash.deff, &ash.heal, &ash.element);
    scanf("%s %d %d %d %s", &ash.poke2, &ash.att2, &ash.deff2, &ash.heal2, &ash.element2);
    scanf("%s", &enemy.enemy);
    scanf("%s %d %d %d %s", &enemy.poke, &enemy.att, &enemy.deff, &enemy.heal, &enemy.element);
    scanf("%s %d %d %d %s", &enemy.poke2, &enemy.att2, &enemy.deff2, &enemy.heal2, &enemy.element2);

    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &action);
        if (action == 'A')
        {
            scanf("%s %s", &);
        }
        
    }
    
    return 0;
}