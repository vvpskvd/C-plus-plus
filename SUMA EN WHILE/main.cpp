#include <iostream>
using namespace std;

int main()
{
    int ini;
    int sys;

    cout << "que numero desea concatenar: " << endl;
    cin >> sys;

    for (ini = 0; ini >= 0; ini=ini+sys)
    {
        cout << ini << endl;
    }
    return 0;
}
