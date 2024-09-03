#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(vector<int> &arr, int l, int r)
{
    int pivot = arr[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}

void quicksort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quicksort(arr, l, pi - 1);
        quicksort(arr, pi + 1, r);
    }
}

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

    quicksort(arr, 0, n - 1);
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}