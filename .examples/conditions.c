#include <cs50.h>
#include <stdio.h>

int main(void)
{    
    // Benutzer nach x fragen
    int x = get_int("x: ");

    // Benutzer nach y fragen
    int y = get_int("y: ");

    if (x < y)
    {
        printf("x ist kleiner als y\n");
    }
    else if (x > y)
    {
        printf("x ist größer als y\n");
    }
    else
    {
        printf("x ist gleich y\n");
    }
}