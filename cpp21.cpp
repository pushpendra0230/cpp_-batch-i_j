#include <bits/stdc++.h>
using namespace std;
int missingnumber(vector<int>& arr)
{
    int n = arr.size() + 1;
    int sumofnumbers = (n * (n + 1)) / 2;
    int sum = 0;
    for (auto it : arr)
    {
        sum += it;
    }
    return sumofnumbers - sum;
}
int main()
{
    vector<int> num1 = {1, 2, 4, 5};
    int missing = missingnumber(num1);
    cout << "The Missing number is: "<<missing;
    return 0;
}