#include <iostream>

using namespace std;

int main()
{
    int m, n;

    while (cin >> m >> n) {
        long long int fatorialm = 1, fatorialn = 1;

        for (int i=1; i<=m; i++){
            fatorialm *= i;
        }

        for (int i=1; i<=n; i++){
            fatorialn *= i;
        }

        cout << fatorialm + fatorialn << endl;
    }

    return 0;
}
