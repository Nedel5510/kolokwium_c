#include <stdio.h>

int number_simulation(int start) {
    int kroki = 0;
    int n = start;

    while (n >= 10) {
        int ostatnia_cyfra = n % 10;

        if (ostatnia_cyfra >= 0 && ostatnia_cyfra <= 3) {
            n = n + (ostatnia_cyfra * 2);
        } else if (ostatnia_cyfra >= 4 && ostatnia_cyfra <= 6) {
            n = n - 3;
        } else { // cyfry 7-9
            n = n / 2;
        }

        kroki++;
    }

    return kroki;
}

int main() {
    int start;

    printf("Podaj liczbe startowa: ");
    scanf("%d", &start);

    int wynik = number_simulation(start);

    printf("Liczba krokow: %d\n", wynik);

    return 0;
}
