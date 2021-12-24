#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i=9, j, k=9, l;
    j=++i; //Preincrement (+1)
    l=--k; //Predecrement (-1)
    printf("i=%d, j=%d, k=%d, l=%d", i, j, k, l);
    getch();
    return 0;
}
