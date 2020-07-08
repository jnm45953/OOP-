#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while( cin >> n )
    {
        int i=0,num=0;
        for(i=1;i<=n;i++)
            if(i%5 == 0 && i%7 == 0)
                cout << i << " ";
        cout << endl;
    }

    return 0;
}
