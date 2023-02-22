// Finding the minimun element in unsorted array and swap it with element at the begining.
// i to n-1 and j = 1+1 to n
// if (arr[j] < arr[i]

/*
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest)
    element from the unsorted portion of the list and moving it to the sorted portion of the list.
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list
    and swaps it with the first element of the unsorted portion.

Time Complexity: The time complexity of Selection Sort is O(N^2) as there are two nested loops:
    One loop to select an element of Array one by one = O(N)
    Another loop to compare that element with every other Array element = O(N)
Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N^2)
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}