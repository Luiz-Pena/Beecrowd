#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string m;
    char temp;

    m.reserve(10001);

    cin >> n;
    cin.clear();
    cin.ignore (1, '\n');

    while (n--){
        getline (cin, m);


        for (int j=0; j< m.length() ; j++){
            if (((int)m[j] > 64 && (int)m[j] < 91) || ((int)m[j] > 96 && (int)m[j] < 123))
                m[j] = (char)((int)m[j] + 3);
        }

        for (int j=0; j< m.length()/2; j++){
            temp = m[j];
            m[j] = m[m.length() - 1 - j];
            m[m.length() - 1 - j] = temp;
        }

        for (int j= m.length()/2; j< m.length() ; j++){
           m[j] = (char)((int)m[j] - 1);
        }

        cout << m << endl;
    }

    return 0;
}
