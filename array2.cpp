#include <iostream>
using namespace std;

int main()
{
    int n, key;
    bool flag = true;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter tge value of key you want to search:";
    cin >> key;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements of array:";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            // cout<<"Key Found";
            flag = false;
        }
        else
        {
            flag = true;
            //cout << "Not Present";
        }
    }
    if (flag == false)
    {
        cout << "Key Found";
    }
    else if (flag == true){
        cout<<"Not found";
    }

    return 0;
}