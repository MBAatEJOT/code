#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Benutzer nach x fragen

    float x = get_float("x: ");

    // Benutzer nach y fragen
    float y = get_float("y: ");

    // Berechnungen durchführen
    printf("x / y = %f\n", x / y);
}