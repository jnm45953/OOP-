#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //�P�_�y�ЬO�_�b�餺
    int a,b,c=100*100;
    while( cin >> a >> b )
    {
        int judge=1;

        if((a*a+b*b)<=10000)
            cout << "inside" << endl ;
        else
            cout << "outside" << endl ;
    }

    return 0;
}
