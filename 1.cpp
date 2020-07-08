#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b,c;
    while( cin >> a >> b >> c )
        cout << "Trapezoid area:" << fixed << setprecision(1) << (a+b)*c/2 << endl;

    return 0;
}

