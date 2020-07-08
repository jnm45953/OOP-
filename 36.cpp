#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    while( cin >> n )
    {
        if(n==3||n==4||n==5)
            cout << "Spring" << endl;
        if(n==6||n==7||n==8)
            cout << "Summer" << endl;
        if(n==9||n==10||n==11)
            cout << "Autumn" << endl;
        if(n==12||n==1||n==2)
            cout << "Winter" << endl;
    }

    return 0;
}
