#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={1,3,5,9,11,13};
    int commondiff=arr[1] - arr[0];  
    int count = arr[0]; 
    int flag = 0;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (count != arr[i])                 
        {
            flag = 1;                        
            break;
        }
        count += commondiff;                 
    }
    if (flag != 0)
    {
        cout<<"The missing number in the series is: "<<count;
    }
    else
    {
        cout<<"-1 (The series is proper)";
    }
    return 0;
}