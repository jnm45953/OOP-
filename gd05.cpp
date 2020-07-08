#include <iostream>
#include <stdlib.h>
#include <memory.h>
#define MAX_N 3000
#define MAX_M 10

using namespace std;

int min(unsigned long long M[],int num)
{
    int min=0,i;
    for(i=1; i<num; i++)
        min=(M[i]<M[min])? i:min;
    return min;
}

int max(unsigned long long M[],int num)
{
    int max=0,i;
    for(i=1; i<num; i++)
        max=(M[i]>M[max])? i:max;
    return max;
}

int main()
{
    int T,N,M,i;
    unsigned long long M_time[MAX_M];
    unsigned t;

    cin >> N >> M;//scanf("%d%d",&N,&M);//n�u�@�q m�����ƶq
    memset(M_time,0,sizeof(M_time));
    for(i=0; i<N; i++)
    {
        cin >> t;
        M_time[min(M_time,M)]+=t; //��u�@�����u�@�ɶ����p������ �ɥi��������һݮɶ��۪�
    }
    cout << M_time[max(M_time,M)]; //�n���u�@�ɶ����h�����x�B�@��

    return 0;
}
