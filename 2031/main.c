#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Pedra vs. Pedra: Para este caso n�o h� ganhador, porque depende do que os jogadores decidem fazer com a Pedra e normalmente n�o fazem nada.
    //Ataque A�reo vs. Ataque A�reo: Quando isto acontece, todos os jogadores perdem, devido a Aniquila��o M�tua.
    //Papel vs. Papel: Nesta varia��o, ambos os jogadores ganham, porque o Papel � in�til e ningu�m que enfrenta o Papel pode perder.

    //Ataque A�reo vs. Pedra: Neste caso, o jogador com o Ataque A�reo derrota o jogador com a Pedra, por raz�es �bvias.
    //Pedra vs. Papel: Neste caso, o jogador com a Pedra derrota o com Papel, porque a Pedra machuca muito mais.
    //Papel vs. Ataque A�reo: Aqui o Ataque A�reo ganha, porque Ataque A�reo sempre ganha e o Papel � pat�tico.



    int n;
    char jogador1[10], jogador2[10];

    scanf ("%d", &n);

    while (n--){

        fflush(stdin);
        gets (jogador1);
        gets (jogador2);

        if ((strcmp(jogador1, jogador2) == 0 && strcmp(jogador1, "pedra") == 0))
            printf ("Sem ganhador\n");

        else if (strcmp(jogador1, jogador2) == 0 && strcmp(jogador1, "ataque") == 0)
            printf ("Aniquilacao mutua\n");

        else if (strcmp(jogador1, jogador2) == 0 && strcmp(jogador1, "papel") == 0)
            printf ("Ambos venceram\n");

        else if (strcmp(jogador1, "ataque") == 0 || strcmp(jogador2, "papel") == 0)
            printf ("Jogador 1 venceu\n");

        else
            printf ("Jogador 2 venceu\n");

        fflush(stdin);
        //�Jogador 1 venceu�: se o Jogador Um tiver vencido a partida
        //�Jogador 2 venceu�: se o Jogador Dois tiver vencido a partida
        //�Ambos venceram�: se os dois jogadores tiverem vencido a partida
        //�Sem ganhador�: se n�o houver ganhador
        //�Aniquilacao mutua�: se ocorrer Aniquila��o M�tua
    }

    return 0;
}
