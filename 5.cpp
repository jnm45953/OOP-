#include <iostream>
#define MAX 32

using namespace std;


int main()
{

	int num,i= 0;

	while(cin >> num)
    {
        int bin[MAX],length = 0;
        do
        {
            bin[i] = num % 2;
            num = num / 2;
            i++;
            length++;
        } while (num != 1);
        bin[length] = num;
        length++;
        for (i = length - 1; i >= 0; i--)
            cout << bin[i];
        cout << endl;


    }

	return 0;
}
