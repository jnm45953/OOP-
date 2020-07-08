#include <iostream>
#include <iomanip>

using namespace std;


int main()
{
    float a;
    while( cin >> a)
    {
        cout << fixed << setprecision(2) << a*20000/198 << endl;
    }
}
