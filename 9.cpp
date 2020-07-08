#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b;
    while(cin >> a)
    {
        b=1;
        for(int i=0;i<a;i++)
            b=b*2;
        if(a>30)
            cout << "Value of more than 31" << endl ;
        else
            cout << b << endl ;
    }

    return 0;
}
