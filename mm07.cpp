#include <iostream>

using namespace std;

int main(void)
{
    int n,m,time;
    while( cin >> n >> m )
    {

        //�p��n�bm�̭��X�{�X��
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
