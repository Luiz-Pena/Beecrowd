#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    cin.clear();
    cin.ignore (1, '\n');

    while (n--){
        string s, temp;

        getline (cin, s);

        for (int i=s.length()/2 - 1; i>=0; i--){
            temp += s[i];
        }

        for (int i=s.length()-1; i >= s.length()/2; i--){
            temp += s[i];
        }

        cout << temp << endl;
    }


    return 0;
}
