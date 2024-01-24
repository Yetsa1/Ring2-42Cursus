#include <stdio.h>

int linea1(char **Yetsa)
{
    int entero;

    entero = 1;
    if (*Yetsa)
        *Yetsa = "Mendez";
    return (entero);
}

int main(void)
{
    char *Yetsa;

    Yetsa = "Parra";
    linea1(&Yetsa);
    printf("%s", Yetsa);
    return (0);
}