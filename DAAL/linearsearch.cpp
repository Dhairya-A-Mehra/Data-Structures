#include <iostream>
#include <vector>
using namespace std;

int linearsearch(const vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of elements you want in array: " << endl;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter array element: ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter key element which you want to search in array: ";
    cin >> key;

    int result = linearsearch(arr, key);

    if (result != -1)
    {
        cout << "Key found at index: " << result << endl;
    }
    else
    {
        cout << "Key not found in the array." << endl;
    }

    return 0;
}
