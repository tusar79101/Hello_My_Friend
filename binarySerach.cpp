#include <iostream>
using namespace std;


int binarySearch(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;


        if (arr[mid] == target)
            return mid;


        if (arr[mid] > target)
            return binarySearch(arr, left, mid - 1, target);


        return binarySearch(arr, mid + 1, right, target);
    }


    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;


    int result = binarySearch(arr, 0, n - 1, target);


    if (result != -1)
        cout << "Element is present at index " << result << endl;
    else
        cout << "Element is not present in the array" << endl;

    return 0;
}

