#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    while( cin >> a)
    {
        int nt10=0,nt5=0,nt1=0;
        nt10=a/10;
        a=a-(nt10*10);
        nt5=a/5;
        a=a-(nt5*5);
        nt1=a/1;
        cout << "NT10=" << nt10 << endl ;
        cout << "NT5=" << nt5 << endl ;
        cout << "NT1=" << nt1 << endl ;
    }

    return 0;
}
