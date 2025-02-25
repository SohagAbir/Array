#include<iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int target)
{
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid]<target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        return -1;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array(Sorted): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
        
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    
    int result = binarySearch(arr, 0, n - 1, target);
    
    if (result != -1)
    {
         cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
