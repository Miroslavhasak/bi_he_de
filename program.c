#include <stdio.h>
/*Vypise cislo v binarnej sustave, 
vypise ascii hodnotu znaku v binarnej sustave, 
vypise cislo v desiatkovej sustave a hodnotu znaku v ascii tabulke a 
vypise cislo v hexadecimalnej sustave a hodnotu znaku v ascii tabulke */

int main()
{
    long long int c, cislo, bin = 0, zvysok = 0, x = 1;
    char znak, z;
    printf("Zadaj cislo a znak: ", cislo, znak);
    scanf("%lli %c", &cislo, &znak);
    c = cislo;
    z = znak;
    while (cislo != 0) // pokial cislo neni 0 tak sa spusti
    {
        zvysok = cislo % 2;
        cislo = cislo / 2;
        bin = bin + zvysok * x;
        x = x * 10;
    }
    printf("\nCislo v binarnej sustave je %lli.", bin);

    x = 1;
    bin = 0;
    while (znak != 0)
    {
        zvysok = znak % 2;
        znak = znak / 2;
        bin = bin + zvysok * x;
        x = x * 10;
    }

    printf("\nASCII hodnota znaku v binarnej sustave je %lli.", bin);
    printf("\nCislo v desiatkovej sustave je %lli a hodnota znaku v ASCII tabulke je %d.", c, z);
    printf("\nCislo v hexadecimalnej sustave je %X a hodnota znaku v ASCII tabulke je %X.", c, z);
    //treba zadat cislo a znak s medzerou

    return 0;
}