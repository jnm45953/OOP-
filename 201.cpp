#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,a100,a10,a1;
    while( cin >> a )
    {
        b=a;
        a100=a/100;
        a=a%100;
        a10=a/10;
        a1=a%10;
        a100=a100*a100*a100;
        a10=a10*a10*a10;
        a1=a1*a1*a1;
        if((a100+a10+a1)==b)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
}
