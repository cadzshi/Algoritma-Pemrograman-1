#include "head.h"

void print(char kode[], char pesan[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("%[^\n]s", kode[i]);
    }
    printf("%s", pesan);

}