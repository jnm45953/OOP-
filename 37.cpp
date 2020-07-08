#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x,y;
    while( cin >> x >> y )
        if(x!=0&&y==0)
            cout << "x-axis" << endl;
        else if(x==0&&y!=0)
            cout << "y-axis" << endl;
        else if(x==0&&y==0)
            cout << "Origin" << endl;
        else if(x>0&&y>0)
            cout << "1st Quadrant" << endl;
        else if(x>0&&y<0)
            cout << "4st Quadrant" << endl;
        else if(x<0&&y>0)
            cout << "2st Quadrant" << endl;
        else if(x<0&&y<0)
            cout << "3st Quadrant" << endl;

    return 0;
}
