#include <iostream>
#include <vector>
using namespace std;

// code written by Dhairya A Mehra
int binarysearch(const vector<int> &arr, int start, int end, int key)
{
    if (start > end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return binarysearch(arr, start, mid - 1, key);
    }
    else
    {
        return binarysearch(arr, mid + 1, end, key);
    }
}

// code written by Dhairya A Mehra

int main()
{
    int n;
    cout << "Enter number of array elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array elements: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key element which you want to search in array: ";
    cin >> key;

    int result = binarysearch(arr, 0, n - 1, key);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
