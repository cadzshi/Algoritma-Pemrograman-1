/*
=========================================================================
||   Saya Sabila Rosad dengan NIM 2106000 mengerjakan soal             ||
||   TP 9 dalam mata kuliah algoritma dan pemrograman 1                || 
||   untuk keberkahanNya maka saya tidak melakukan kecurangan          || 
||   seperti yang telah dispesifikasikan. Aamiin.                      ||
=========================================================================
*/
//library yang digunakan
#include <stdio.h>
#include <string.h>
//deklarasi bungkusan
typedef struct {
    char pokeAsh1[100];
    char pokeAsh2[100];
    char pokeAsh1Ele[100];
    char pokeAsh2Ele[100];
    int pokeAsh1att, pokeAsh2att;
    int pokeAsh1deff, pokeAsh2deff;
    int pokeAsh1heal, pokeAsh2heal;
    char enemy[100];
    char pokeEne1[100];
    char pokeEne2[100];
    char pokeEne1Ele[100];
    char pokeEne2Ele[100];
    int pokeEne1att, pokeEne2att;
    int pokeEne1deff, pokeEne2deff;
    int pokeEne1heal, pokeEne2heal;
    char attacker[100];
    char target[100];
    char defend[100];
    char heal[100];
    char action[10];
    int damage[10];
} pokemon;
//deklarasi prosedur
void scanPokemon (pokemon *data);
void scanAction(pokemon *data);
void battlePokemon (pokemon *data, int n);
void printPokemon (pokemon *data);