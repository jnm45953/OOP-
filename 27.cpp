#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //2數中間的總和
    int a,b;
    while( cin >> a >> b )
    {
        int i,small,big,num=0;
        if(a>=b)
        {
            big=a;
            small=b;
        }
        else
        {
            big=b;
            small=a;
        }
        for(i=small; i<=big; i++)
        {
            num=num+i;
        }
        cout << num << endl;
    }

    return 0;
}

