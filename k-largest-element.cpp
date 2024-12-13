#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int size = 5;
    int k;

    cout << "Enter the number (k): ";
    cin >> k;


    int largPos = 0;

    for (int i = 0; i < k; ++i)
    {
        if (arr1[i] > arr1[largPos])
        {
            largPos = i;
        }
    }

    cout << "The largest value is: " << arr1[largPos] << endl;

    return 0;
}
