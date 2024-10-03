#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s) {
    string period = s.substr(s.length() - 2); 
    string hour = s.substr(0, 2);       
    if (period == "PM" && hour != "12") {
        hour = to_string(stoi(hour) + 12);
    }
    if (period == "AM" && hour == "12") {
        hour = "00";
    }
    return hour + s.substr(2, 6);
}
int main() 
{
    string s;
    cin >> s;
    cout << timeConversion(s);
    return 0;
}