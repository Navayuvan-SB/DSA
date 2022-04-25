#include<iostream>

using namespace std;

void linearSearch(int a[], int n)
{
    int position = -1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            position = i;
            break;
        }
    }

    if (position == -1)
    {
        cout << "Search element not found" << endl;
        return;
    }

    cout << "Search element found at position " << position + 1 << endl;
}

int main()
{
    int arr[5];
    cout << "Please enter 5 elements of the array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Please enter the element to search" << endl;
    int num;
    cin >> num;

    linearSearch(arr, num);
}