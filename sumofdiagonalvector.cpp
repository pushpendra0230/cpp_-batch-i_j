#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>arr={
        {1,2,3},
        {4,5,6},
        {9,8,9}
    };
    int sum1=0,sum2=0;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[0].size();j++)
        {
            if(j==arr.size()-1-i)
            {
                sum1 = sum1+arr[i][j];
            }
            if(i==j)
            {
                sum2 += arr[i][j];
            }
        }
    }
    cout<<"sum of the givin diagonal 1 vector is :- \n"<<sum1<<"\n"<<"sum of the givin diagonal 2 vector is :- \n"<<sum2;
}