//Write a C++ program to swap first and last element of an integer 1-d array

#include <iostream>
#define SIZE 5 

using namespace std;

void swap_first_last(int arr[], int size)
{
    //xor swap
    arr[0] ^= arr[SIZE-1];
    arr[SIZE-1] ^= arr[0];
    arr[0] ^= arr[SIZE-1];
}

int main()
{
    int arr[SIZE];

    //input
    for (int i = 0 ; i < SIZE ; i++)
        cin >> arr[i];

    //swap
    swap_first_last(arr, SIZE);

    //output
    for (int i = 0 ; i < SIZE ; i++)
        cout << arr[i] << " ";

    return 0;
}
