#include <iostream>
using namespace std;
int main()
{
    int max = 0, min = 1000, n;
    cout << "enter the array size " << endl;
    cin >> n;
    int  arr[n];
    cout << "enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    cout << "the maximum element in the array is " << max << endl;
    cout << "the minimum element in the array is " << min << endl;

    return 0;
}