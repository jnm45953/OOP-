#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //2�s���M���w�j���3��
    int a,b,c;
    while( cin >> a >> b >> c )
    {
        int judge=1;
        if(a+b<=c)
            judge=0;
        if(a+c<=b)
            judge=0;
        if(b+c<=a)
            judge=0;
        if(judge==1)
            cout << "fit" << endl;
        else
            cout << "unfit" << endl;
    }

    return 0;
}
