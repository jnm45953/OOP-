#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while( cin >> n )
    {
        int i=0,num=0;
        if(n==1)
            cout << "1 = 1" << endl;
        else
        {
            cout << "1";
            for(i=1; i<=n; i++)
            {
                num=num+i;
                if(i!=1)
                    cout << " + " << i;
            }
            cout << " = " << num << endl;
        }
    }

    return 0;
}
