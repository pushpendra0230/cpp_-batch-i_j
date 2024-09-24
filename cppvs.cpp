#include <bits/stdc++.h>
using namespace std;
int getmissingnumber(vector<char> squ_char)
{
    
    int valueofascii = int(squ_char[0]);
    
    for (int i=0;i<=squ_char.size();i++) 
    {
    if (int(squ_char[i]) == valueofascii) 
    {
        valueofascii++;
    }
    else
    {
        return valueofascii;
    }
    }
    return -1;
}
int main()
{
    vector<char> sequence_char = {'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i'}; // Input sequence
    int missingasciivalue = getmissingnumber(sequence_char);
    
    if (missingasciivalue != -1) 
    {
        cout << "The Missing character is : " <<char(missingasciivalue);
    } 
    else 
    {
        cout << "All characters are in sequence.";
    }
    return 0;
}