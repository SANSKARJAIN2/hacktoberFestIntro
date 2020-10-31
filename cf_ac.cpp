#include <iostream>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t-- > 0)
    {
        unsigned long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a - b) <= 0)
        {
            cout << b << endl;
            continue;
        }
        if ((c - d) < 0)
        {
            cout << "-1" << endl;
            continue;
        }
        unsigned long long int sleepc = c * ((a - b) / (c - d));
        if ((a - b) % (c - d) != 0)
        {
            sleepc = sleepc + c;
        }
        cout << (sleepc + b) << endl;
    }
    return 0;
}