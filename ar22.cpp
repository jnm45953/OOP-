#include <iostream>
#include<string.h>

using namespace std;

int main()
{
    int len,i;
    char string[100];
    {
        cin >> string;
        len=strlen(string);
        for(i=0; i<len; i++)
            string[i]=string[i]-3;
        cout << string << endl;
    }
}

