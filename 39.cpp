#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,c;
    while( cin >> a >> b >> c )
    {
        while(1)
        {
            int big,s1,s2,judge=1;
            if(a >= b && a >= c)
            {
                big=a;
                s1=b;
                s2=c;
            }
            else if( b >= a && b >= c)
            {
                big=b;
                s1=a;
                s2=c;
            }
            else
            {
                big=c;
                s1=a;
                s2=b;
            }

            if(s1+s2 <= big)
            {
                cout << "Not Triangle" << endl;
                break;
            }
            else if(s1*s1+s2*s2 == big*big)
            {
                cout << "Right Triangle" << endl;
                break;
            }
            else if(s1*s1+s2*s2 >= big*big)
            {
                cout << "Acute Triangle" << endl;
                break;
            }
            else if(s1*s1+s2*s2 <= big*big)
            {
                cout << "Obtuse Triangle" << endl;
                break;
            }
        }
    }

    return 0;
}

