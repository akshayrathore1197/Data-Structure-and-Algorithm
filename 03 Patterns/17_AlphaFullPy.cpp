#include <iostream>
using namespace std;

int main()
{
    cout << "Enter the Number: ";
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
       
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

      
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << ch;
            if (k < breakPoint)
                ch++;
            else
                ch--;
        }

       
        cout << endl;
    }

    return 0;
}