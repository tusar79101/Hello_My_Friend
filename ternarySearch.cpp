#include <iostream>
using namespace std;


int ternarySearch(int arr[], int left, int right, int target)
{
    if (right >= left)
        {
            int mid1 = left + (right - left) / 3;
            int mid2 = right - (right - left) / 3;


            if (arr[mid1] == target) return mid1;
            if (arr[mid2] == target) return mid2;


            if (target < arr[mid1])
                return ternarySearch(arr, left, mid1 - 1, target);

            else if (target > arr[mid2])
                return ternarySearch(arr, mid2 + 1, right, target);

            else
                return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
        }


    return -1;
}

int main()
{
    int n, target;


    cout << "Enter the size of the array: ";
    cin >> n;


    int arr[n];
    cout << "Enter " << n << " sorted array elements: ";
    for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }


    cout << "Enter the target element to search: ";
    cin >> target;


    int result = ternarySearch(arr, 0, n - 1, target);


    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

