#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while( cin >> n )
    {
        int n1,n_100,n_10,n_1;
        n1=n;
        n_100=n/100;
        n=n%100;
        n_10=n/10;
        n_1=n%10;
        if((n_100*n_100*n_100+n_10*n_10*n_10+n_1*n_1*n_1) == n1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
