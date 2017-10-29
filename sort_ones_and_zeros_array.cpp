#include <iostream>
using namespace std;

void sort_one_zero_array(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
    {
        sum += arr[i];
    }
    for (int i = 0; i < n; i++) 
    {
        if (i < n - sum)
            arr[i] = 0;
        else
            arr[i] = 1;
    }
}
int main()
{
    int n;
    cout << "How many zeros and ones do you want to enter?" << endl;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    sort_one_zero_array(arr, n);
    cout << "Sorted! :" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}