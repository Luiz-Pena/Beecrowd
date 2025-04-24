#include <bits/stdc++.h>

using namespace std;

int main()
{
    char temp;
    string silabaA, silabaB, resultado;
    bool inicio = true;

    while ((temp = getchar()) != '\n') {
        if (temp == ' ') {
            inicio = true;

            silabaA = "";
            silabaB = "";
        }

        else if (inicio == true) {
            if (silabaA.length() < 2)
                silabaA += temp;

            else if (silabaB.length() < 2)
                silabaB += temp;

            else {
                inicio = false;

                if (silabaA == silabaB) {
                    resultado.pop_back();
                    resultado.pop_back();
                }

                silabaA = "";
                silabaB = "";
            }
        }

        resultado += temp;
    }

    cout << resultado << endl;

    return 0;
}
