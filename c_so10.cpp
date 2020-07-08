#include <iostream>
#include <stdlib.h>

using namespace std;

int values[100];

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main ()
{
    int i,n;
    while( cin >> n )
    {
        for(i=0; i<n; i++)
            cin >> values[i];

        qsort(values, n, sizeof(int), compare);
        for (i=0; i<n; i++)
        {
            cout << values[i];
            if(i!=n-1)
                cout << " ";
            if(i==n-1)
                cout << endl;
        }
    }
    return 0;
}
