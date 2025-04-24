#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int x, y;

    while (cin >> x >> y){
        bitset <32> xb(x), yb(y), resultado;

        for (int i=0; i<32; i++){
            if (xb[i] == 1 && yb[i] == 1)
                resultado[i] = 0;
            else
                resultado[i] = xb[i] + yb[i];
        }

        cout << resultado.to_ulong() << endl;

    }

    return 0;
}
