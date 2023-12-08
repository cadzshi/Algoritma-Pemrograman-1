/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   TP 9 dalam mata kuliah algoritma dan pemrograman 1                || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
#include "header.h"

//prosedur untuk scan nama pokemon
void scanPokemon (pokemon *data)
{
    scanf("%s %d %d %d %s", &(*data).pokeAsh1, &(*data).pokeAsh1heal, &(*data).pokeAsh1att, &(*data).pokeAsh1deff, &(*data).pokeAsh1Ele);
    scanf("%s %d %d %d %s", &(*data).pokeAsh2, &(*data).pokeAsh2heal, &(*data).pokeAsh2att, &(*data).pokeAsh2deff, &(*data).pokeAsh2Ele);
    scanf("%s", &(*data).enemy);
    scanf("%s %d %d %d %s", &(*data).pokeEne1, &(*data).pokeEne1heal, &(*data).pokeEne1att, &(*data).pokeEne1deff, &(*data).pokeEne1Ele);
    scanf("%s %d %d %d %s", &(*data).pokeEne2, &(*data).pokeEne2heal, &(*data).pokeEne2att, &(*data).pokeEne2deff, &(*data).pokeEne2Ele);
}
//prosedur untuk scan action
void scanAction(pokemon *data)
{
    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &(*data).action[i]);
        if ((*data).action[i] == 'A')
        {
            scanf("%s %s", &(*data).attacker[i], &(*data).target[i]);
        }
        else if ((*data).action[i] == 'D')
        {
            scanf("%s", &(*data).defend[i]);
        }
        else if ((*data).action[i] == 'H')
        {
            scanf("%s", &(*data).heal[i]);
        }
    }
}

void battlePokemon (pokemon *data, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if ((*data).action[i] == 'A')
        {
            if (strcmp((*data).attacker[i], (*data).pokeAsh1 == 0) && strcmp((*data).target[i], (*data).pokeEne1 == 0))
            {
                (*data).damage[i] = (*data).pokeAsh1att - (*data).pokeEne1deff;
                (*data).pokeEne1heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeAsh1 == 0) && strcmp((*data).target[i], (*data).pokeEne2 == 0))
            {
                (*data).damage[i] = (*data).pokeAsh1att - (*data).pokeEne2deff;
                (*data).pokeEne2heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeAsh2 == 0) && strcmp((*data).target[i], (*data).pokeEne1 == 0))
            {
                (*data).damage[i] = (*data).pokeAsh2att - (*data).pokeEne1deff;
                (*data).pokeEne1heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeAsh2 == 0) && strcmp((*data).target[i], (*data).pokeEne2 == 0))
            {
                (*data).damage[i] = (*data).pokeAsh2att - (*data).pokeEne2deff;
                (*data).pokeEne2heal -= (*data).damage[i];
            }
            //pokemon musuh
            if (strcmp((*data).attacker[i], (*data).pokeEne1 == 0) && strcmp((*data).target[i], (*data).pokeAsh1 == 0))
            {
                (*data).damage[i] = (*data).pokeEne1att - (*data).pokeAsh1deff;
                (*data).pokeAsh1heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeEne1 == 0) && strcmp((*data).target[i], (*data).pokeAsh2 == 0))
            {
                (*data).damage[i] = (*data).pokeEne1att - (*data).pokeAsh2deff;
                (*data).pokeAsh2heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeEne2 == 0) && strcmp((*data).target[i], (*data).pokeAsh1 == 0))
            {
                (*data).damage[i] = (*data).pokeEne2att - (*data).pokeAsh1deff;
                (*data).pokeAsh1heal -= (*data).damage[i];
            }
            if (strcmp((*data).attacker[i], (*data).pokeEne2 == 0) && strcmp((*data).target[i], (*data).pokeAsh2 == 0))
            {
                (*data).damage[i] = (*data).pokeEne2att - (*data).pokeAsh2deff;
                (*data).pokeAsh2heal -= (*data).damage[i];
            }
        }
        
    }
}
    

//prosedur untuk print hasil pertandingan
void printPokemon(pokemon *data)
{
    printf("Battle Result:\n");
    printf("- Team Ash\n");
    printf("%s %d %d %d %s\n", (*data).pokeAsh1, (*data).pokeAsh1heal, (*data).pokeAsh1att, (*data).pokeAsh1deff, (*data).pokeAsh1Ele);
    printf("%s %d %d %d %s\n", (*data).pokeAsh2, (*data).pokeAsh2heal, (*data).pokeAsh2att, (*data).pokeAsh2deff, (*data).pokeAsh2Ele);
    printf("- Team %s\n", (*data).enemy);
    printf("%s %d %d %d %s\n", (*data).pokeEne1, (*data).pokeEne1heal, (*data).pokeEne1att, (*data).pokeEne1deff, (*data).pokeEne1Ele);
    printf("%s %d %d %d %s\n", (*data).pokeEne2, (*data).pokeEne2heal, (*data).pokeEne2att, (*data).pokeEne2deff, (*data).pokeEne2Ele);

    if ((*data).pokeAsh1heal + (*data).pokeAsh2heal > (*data).pokeEne1heal + (*data).pokeEne2heal)
    {
        printf("\n !!! Team Ash Won!!!\n");
    }
    else
    {
         printf("\n !!! Team %s Won!!!\n", (*data).enemy);
    }
}
