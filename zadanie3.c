#include <stdio.h>

int calculate_score(const char *str){
        int suma=0;
        int mnoznik=1;

    while (*str != '\0' )
{
    if (*str >= 'a' && *str<='z')
    {
        suma = suma + (*str * mnoznik);
    }
    else if (*str >= '0' && *str<='9')
    {
        mnoznik = - mnoznik;
    }
    else if (*str >='A' && *str<='Z')
    {
        suma=0;
    }
    str++;
}
return suma;
}

int main(){
    const char *tekst="aaaaaaa";

    int wynik = calculate_score(tekst);

printf("Wynik:%d\n", wynik);

    return 0;
}