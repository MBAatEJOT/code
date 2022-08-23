#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Verdoppel i in einer Schleife
    for (int i = 1; ; i *= 2)
    {
        printf("%i\n", i);
        sleep(1);
    }
}