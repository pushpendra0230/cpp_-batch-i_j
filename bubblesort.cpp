#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={22,76,90,87,34,21,88,56,32,11};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i - 1; j++) 
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted series is: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout <<"\n";
    return 0;
}