#include<iostream>
using namespace std;

// to run program 
// g++ -o sort_array_containing_zero_and_one sort_array_containing_zero_and_one.cpp
// ./sort_array_containing_zero_and_one 

int main()
{

    int A[100], n, i, tmp, nb_zero;

	cout<<"Enter number of elements you want to insert ";
	cin>>n;

    nb_zero = 0;
    i = 0;

    while (i < n)
    {
		cout<<"Enter element "<<i+1<<":";
		cin>>tmp;
        if ((tmp == 0) || (tmp == 1))
        {
            if (tmp == 0)
            {
                nb_zero += 1;
            }
            A[i] = tmp;
            i+=1;
        } else 
        {
            cout<<"Please enter 0 or 1\n";
        }
    }


    // print array
    cout << "\nYour array :";
	for(i=0;i<n;i++) 
    {
        cout << A[i] << " ";
    }

    // print sorted array
    cout << "\nsorted array :";
    for(i=0; i<n;i++)
    {
        tmp = i<nb_zero?0:1 ;
        cout << tmp << " ";
    }
}
