#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;


//算出n個盤子的河內塔要動幾步:2^n-1
int main()
{
    int i,n,move=2;
    cin >> n;
    for(i=0; i<n-1; i++)
        move=move*2;
    move=move-1;
    cout << move << endl;
    return 0;
}

