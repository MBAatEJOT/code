#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Benutzer nach x fragen
    int x = get_int("x: ");

    // Benutzer nach y fragen
    int y = get_int("y: ");

    // Berechnungen durchführen
    printf("x + y = %i\n", x + y);
    printf("x - y = %i\n", x - y);
    printf("x * y = %i\n", x * y);
    printf("x / y = %i\n", x / y);
    printf("x mod y = %i\n", x % y);
}