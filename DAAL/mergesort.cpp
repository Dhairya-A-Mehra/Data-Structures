#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int l, int r, int mid)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    vector<int> a(n1); // creation of temporary dynamic array
    vector<int> b(n2); // creattion of temporary dynamic array

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i]; // temporary dynamic array is getting filled
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i]; // temporary dynamic array is getting filled
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else if (a[i] > b[j])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergesort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, r, mid);
    }
}

int main()
{
    int n;
    cout << "Enter the number of array elements: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    mergesort(arr, 0, n - 1);

    cout << "Sorted Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}