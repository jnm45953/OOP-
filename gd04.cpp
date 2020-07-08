#include <iostream>
#include <stdlib.h>
#define MAX_N 100

using namespace std;


typedef struct
{
    unsigned t,d;
} JOB;

int cmp_mtoM(const void *a,const void *b)
{
    return ((JOB *)a)->d - ((JOB *)b)->d;
}

int main()
{
    int T,N,i,fail;
    unsigned long long cur_time;
    JOB jobs[MAX_N];
    cin >> T;
    while(T--)
    {
        cin >> N;
        cur_time=0;
        for(i=0; i<N; i++)  //所需時間
            cin >> jobs[i].t;
        for(i=0; i<N; i++)  //截止時間
            cin >> jobs[i].d;
        qsort(jobs,N,sizeof(JOB),cmp_mtoM); //先做截止時間最快到的
        for(i=0,fail=0; i<N; i++)
        {
            if((cur_time+=jobs[i].t)>jobs[i].d) //檢查是否來得及完成
            {
                fail=1;
                break;
            }
        }
        cout << (fail==0? "Yes":"No") << endl;
    }
    return 0;
}
