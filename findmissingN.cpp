#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={1,2,3,4,5,6};
    int count=arr[0];
    int flag=0;
    for (int i=0;i<arr.size();i++)
    {
        if(count!=arr[i])
        {
            flag=1;
            break;
        }
        count++;
    }
    (flag!=0)?cout<<"The missing number in the series is : "<<count<<" ":cout<<"-1(The series is proper)";
    return 0;
}