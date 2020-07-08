#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    while( cin >> a )
    {
        int i;
        for(i=1;i<=a;i++)
            cout << i << "*" << i << "=" << i*i << endl;
    }

    return 0;
}

