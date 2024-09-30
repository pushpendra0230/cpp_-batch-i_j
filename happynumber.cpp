#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int num) 
    {
        while(num>4)
        {
            num=sumOfSquares(num);
        }
        return num==1;
    }
int sumOfSquares(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        cout<<"happy number";
        return sum;
    }
};