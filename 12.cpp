#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a,b;
    int d;
    while( cin >> a)
    {

        a=a*100;
        b=100-30*2.54;
        d=a/b+1;
        cout << d << endl ;
    }

    return 0;
}

