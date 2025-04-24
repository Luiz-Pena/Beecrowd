#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomes[10][31];

    for (int i=0; i<10; i++){
        gets (nomes[i]);
    }

    printf ("%s\n%s\n%s\n", nomes[2], nomes[6], nomes[8]);


    return 0;
}
