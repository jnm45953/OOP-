#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //�O�_�b�����
    int a,b;
    while( cin >> a >> b )
    {
        int judge=1;
        if(a<0||b<0||a>100||b>100)
            judge=0;
        if(judge==0)
            cout << "outside" << endl ;
        else
            cout << "inside" << endl ;
    }

    return 0;
}
