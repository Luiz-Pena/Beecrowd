#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n--){
        string a, b, c;

        cin >> a >> b;

        if (a.length() >= b.length()) {
            c = a.substr (a.length() - b.length());

            if (c==b)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
        else
           cout << "nao encaixa" << endl;
    }


    return 0;
}
