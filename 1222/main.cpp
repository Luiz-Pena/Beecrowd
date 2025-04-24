#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c, l;
    string palavra;

    while (cin >> n >> l >> c) {
        int caracteres = 0, linhas = 0, espacos = -1;

        while (n--){
            cin >> palavra;

            espacos++;

            if (caracteres + palavra.length() + espacos > c){
                caracteres = palavra.length();
                linhas++;
                espacos = 0;
            }
            else if (caracteres + palavra.length() + espacos == c) {
                caracteres = 0;
                linhas++;
                espacos = -1;
            }
            else
                caracteres += palavra.length();

        }

        if (caracteres > 0)
            linhas ++;

        if (linhas%l!=0)
            cout << linhas/l +1 << endl;

        else
            cout << linhas/l << endl;



    }

    return 0;
}
