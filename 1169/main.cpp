#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    while (n--){
        unsigned long long int resultado = 1;
        cin >> x;

        while (x--){
            resultado *= 2;
        }

        cout << resultado/12000 << " kg" << endl;
    }

    return 0;
}
