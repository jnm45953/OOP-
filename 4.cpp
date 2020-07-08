#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int h1,h2,m1,m2;

    while( cin >> h1 >> m1 >> h2 >> m2 )
    {
        int h=0,m=0,total=0;

        if(h1 > h2)
            h = (h2 + 24) - h1;
        else
            h = h2 - h1;

        m = m2 - m1;

        if(m < 0)
        {
            h = h - 1;
            m = 1;
        }
        else if(m == 0)
            m = 0;
        else
            m = 1;

        if(h >= 4)
        {
            total = 120 + 160 + (h-4)*120 + m*60;
        }
        else if(h < 4 && h >= 2)
        {
            total = 120 + (h-2)*80 + m*40;
        }
        else
        {
            total = (h*60) + (m*30);
        }

        cout << total << endl;
    }

    return 0;
}
