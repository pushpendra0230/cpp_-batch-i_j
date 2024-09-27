#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={1,2,4,8,16,64};
    int commondiff=arr[1]/arr[0];  
    int count = arr[0]; 
    int flag = 0;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (count != arr[i])                 
        {
            flag = 1;                        
            break;
        }
        count=count*commondiff;                 
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