#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while (cin >> n) {
        string sequencia = "3";
        char numero;
        int quantidade;

        n--;

        while (n--) {
            string aux;

            for (int i=0; i<sequencia.length(); i++){
                if (i==0){
                    numero = sequencia[i];
                    quantidade = 1;
                }

                else {
                    if (sequencia[i] == numero)
                        quantidade++;

                    else {
                        aux += to_string(quantidade);
                        aux += numero;

                        numero = sequencia[i];
                        quantidade = 1;
                    }
                }
            }
            aux += to_string(quantidade);
            aux += numero;
            sequencia = aux;
        }

        cout << sequencia << endl;


    }

    return 0;
}
