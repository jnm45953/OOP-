#include <iostream>

using namespace std;

int main(void)
{
    int n,m,time;
    while( cin >> n >> m )
    {

        //計算n在m裡面出現幾次
        time=0;
        while(m/10)
        {
            if(m%100==n)
                time++;
            m/=10;
        }
        cout << time << endl;
    }
    return 0;
}
