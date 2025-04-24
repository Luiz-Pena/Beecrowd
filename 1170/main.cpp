#include <iostream>

using namespace std;

int main()
{
    int n;
    double c;

    cin >> n;

    while (n--){
        int dias = 0;
        cin >> c;

        while (c > 1.0){
            dias ++;
            c /= 2.0;
        }

        cout << dias << " dias" << endl;
    }

    return 0;
}
