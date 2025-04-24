#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, pos;
    string palavra;

    cin >> n;

    while (n--) {
        cin >> palavra >> pos;

        for (int i=0; i<palavra.length(); i++){
            if ((int)palavra[i] > 64 && (int)palavra[i] < 91) {
                if ((int)palavra[i] - pos < 65)
                    palavra[i] = (char)((int)palavra[i] - pos + 26);
                else
                    palavra[i] = (char)((int)palavra[i] - pos);
            }
            else {
                if ((int)palavra[i] + pos < 97)
                    palavra[i] = (char)((int)palavra[i] - pos + 26);
                else
                    palavra[i] = (char)((int)palavra[i] - pos);
            }
        }

        cout << palavra << endl;
    }

    return 0;
}
