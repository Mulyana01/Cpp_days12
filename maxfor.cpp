#include <iostream>

using namespace std;

int main()
{
    int number[5];
    cout << " Please Input five number : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }

    int max_value = number[0];
    for (int i = 0; i < 5; i++)
    {
        if (number[i] > max_value)
        {
            max_value = number[i];
        }
    }
    cout << " The Maximum value is : " << max_value << endl;
    return 0;
}
