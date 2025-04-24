#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

   char S[11];

   while (gets (S)) {
        int contador = 0, flag = 0;

        for (int i=0, j=strlen(S)-1; i<strlen(S); i++, j--){
            int fatorial = 1;

            for (int k=0; k<i; k++){
                fatorial *= 26;
            }

            contador += (toascii(S[j]) - 64) * fatorial;

            if (contador > 16384) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            printf ("Essa coluna nao existe Tobias!\n");
        else
            printf ("%d\n", contador);

   }


    return 0;
}
