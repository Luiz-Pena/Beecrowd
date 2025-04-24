#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, maior;

    while (getline (cin, s) && s != "0") {
        string temp;

        for (int i=0; i<s.length(); i++) {
            if (s[i] != ' ')
                temp += s[i];

            else {
                if (temp.length() >= maior.length())
                    maior = temp;

                cout << temp.length() << "-";

                temp = "";
            }
        }

        cout << temp.length() << endl;

        if (temp.length() >= maior.length())
            maior = temp;

    }

    cout << "\nThe biggest word: " << maior << endl;

    return 0;
}
