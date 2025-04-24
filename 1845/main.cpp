#include <bits/stdc++.h>

using namespace std;

int main()
{
    string raiva;
    char temp;

    while ((temp = getchar()) != EOF) {
        if (temp == 'j' || temp == 'p' || temp == 's' || temp == 'v' || temp == 'b' || temp =='x' || temp == 'z') {
            temp = 'f';
        }
        else if (temp == 'J' || temp == 'P' || temp == 'S' || temp == 'V' || temp == 'B' || temp =='X' || temp == 'Z') {
            temp = 'F';
        }

        if ((temp != 'f' && temp != 'F') || (raiva.back() != 'f' && raiva.back() != 'F'))
            raiva += temp;
    }

    raiva.pop_back();

    cout << raiva << endl;

    return 0;
}
