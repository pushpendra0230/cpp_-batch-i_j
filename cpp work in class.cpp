// cpp work in class
// ================================================================================================
// q.1.bubble sort algorithm Q.....


// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={22,76,90,87,34,21,88,56,32,11};
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr.size() - i - 1; j++) 
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
//     cout << "Sorted series is: ";
//     for (auto it : arr)
//     {
//         cout << it << " ";
//     }
//     cout <<"\n";
//     return 0;
// }
// ==================================================================================
// q.2.find missing number............


// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={1,2,3,5,6};
//     int count=arr[0];
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(count!=arr[i])
//         {
//             break;
//         }
//         count++;
//     }
//     cout << "missing numebr is: "<<count<<" ";
//     return 0;
// }
// output:-
// missing numebr is: 4 
// =======================================================================================
// q.3.find missing number using flag to recover the bugs of code..........

// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={1,2,3,4,5,6};
//     int count=arr[0];
//     int flag=0;
//     for (int i=0;i<arr.size();i++)
//     {
//         if(count!=arr[i])
//         {
//             flag=1;
//             break;
//         }
//         count++;
//     }
//     (flag!=0)?cout<<"The missing number in the series is : "<<count<<" ":cout<<"-1(The series is proper)";
//     return 0;
// }
// output:-
// -1(The series is proper)
// ================================================================================================
// q.4.find missing number in the series of sequence numbers and use common diifrence.............

// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={1,3,5,9,11,13};
//     int commondiff=arr[1] - arr[0];  
//     int count = arr[0]; 
//     int flag = 0;
//     for (int i = 0; i < arr.size(); i++) 
//     {
//         if (count != arr[i])                 
//         {
//             flag = 1;                        
//             break;
//         }
//         count += commondiff;                 
//     }
//     if (flag != 0)
//     {
//         cout<<"The missing number in the series is: "<<count;
//     }
//     else
//     {
//         cout<<"-1 (The series is proper)";
//     }
//     return 0;
// }
// output:-
// The missing number in the series is: 7
// ==============================================================================================================
// q.5.find missing number in the series of sequence numbers of multiply by 2 and use common diifrence.............


// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={1,2,4,8,16,64};
//     int commondiff=arr[1]/arr[0];  
//     int count = arr[0]; 
//     int flag = 0;
//     for (int i = 0; i < arr.size(); i++) 
//     {
//         if (count != arr[i])                 
//         {
//             flag = 1;                        
//             break;
//         }
//         count=count*commondiff;                 
//     }
//     if (flag != 0)
//     {
//         cout<<"The missing number in the series is: "<<count;
//     }
//     else
//     {
//         cout<<"-1 (The series is proper)";
//     }
//     return 0;
// }
// output:-
// The missing number in the series is: 32
// =========================================================================================================================

// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     set<int>arr={1, 2, 3, 4, 5};
//     auto it=arr.find(6);
//     cout<<*it << "\n";
//     cout<<*arr.end() << "\n";
//     if(it!=arr.end()) 
//     {
//         cout<<"Found the element in the array";
//     }
//     else 
//     {
//         cout<<"Not Found the element in the array";
//     }
//     return 0;
// }
// ===========================================================================================================


// #include <bits/stdc++.h>
// using namespace std;
// int find(vector<int>& arr, int key) 
// {
//     int index = 0;
//     for (auto it : arr) 
//     {
//         if (it == key) 
//         {
//             return index;
//         }
//         index++;
//     }
//     return -1;
// int main() 
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 6};
//     int key = 7;
//     cout << find(arr, key);
//     return 0;
// }
// ============================================================================================================
// make two array and remove dublicate number and compair this 


// #include<bits/stdc++.h>
// using namespace std;
// bool linearsearch(vector<int>&arr,int ele)
// {
//     for(auto it:arr)
//     {
//         if(it == ele)
//         {
//             return true;
//         }
//     }
//     return false;
// }
// vector<int> removeduplicate2(vector<int>&arr1,vector<int>&arr2)
// {
//     vector<int>res;
//     for(auto it:arr1)
//     {
//             if(!linearsearch(arr2,it))
//             {
//                 res.push_back(it);
//             }
//     }
//     for(auto it:arr2)
//     {
//             if(!linearsearch(arr1,it))
//             {
//                 res.push_back(it);
//             }
//     }
   
//     return res;

// }
// void removeduplicate(vector<int>&arr,int ele)
// {
//     for(auto it:arr)
//     {
//         if(it==ele)
//         {
//             return;
//         }
//     }
//     arr.push_back(ele);
// }
// void insertintonew(vector<int>&arr1,vector<int>&arr2)
// {
//     vector<int>resarr1;
//     vector<int>resarr2;
//     for(auto it:arr1)
//     {
//         removeduplicate(resarr1,it);
//     }
//     for(auto it:arr2)
//     {
//         removeduplicate(resarr2,it);
//     }
//     for(auto it:resarr1)
//     {
//         cout<<it<<" ";
//     }
//     cout<<"\n";
//     for(auto it:resarr2)
//     {
//         cout<<it<<" ";
//     }
//     cout<<"\n";
//     vector<int>res = removeduplicate2(resarr1,resarr2);
//     for(auto it:res)
//     {
//         cout<<it<<" ";
//     }
// }
// int main()
// {
//     vector<int>arr1= {1,2,2,2,2,23,3,13,4,4,4,4};
//     vector<int>arr2= {5,5,5,5,6,6,6,6,7,7,7,2,2,2,3,3,3,1};
//     //23 13 4 5 6 7
//     insertintonew(arr1,arr2);

// }
// ============================================================================================================
// #include<bits/stdc++.h>
// using namespace std;

// int removeele(vector<int>& arr, int ele) 
// {
//     for(int i = 0; i < arr.size(); i++) 
//     {
//         if(arr[i] == ele) 
//         {
//             arr.erase(arr.begin() + i);
//             i--;
//         }
//     }
//     for(auto it : arr)
//     {
//         cout << it << " ";
//     }
//     cout << "\n";
//     return arr.size();
// }
// int main() 
// {
//     vector<int> arr = {1, 2, 3, 4, 5, 5, 6, 6, 5};
//     int val = 5;
//     cout << removeele(arr, val);
//     return 0;
// }
// ===============================================================================================================
// #include<bits/stdc++.h>
// using namespace std;

// void movezeros(vector<int>& arr) 
// {
//     int count = 0;
//     for(int i = 0; i < arr.size(); i++) 
//     {
//         if(arr[i] == 0)
//         {
//             count++;
//             arr.erase(arr.begin() + i);
//             i--;
//         }
//     }
//     for(int i = 0; i < count; i++) 
//     {
//         arr.push_back(0);
//     }
//     for(auto it : arr) 
//     {
//         cout << it << " ";
//     }
//     cout << "\n";
// }
// int main() 
// {
//     vector<int> arr = {4, 5, 0, 1, 9, 0, 5, 0};
//     movezeros(arr);
//     return 0;
// }
// =======================================================================================================================
// Question:
// Write a function countbig that takes an array arr of integers and returns the count of elements that are greater than their previous element. The first element is always counted.

// Example: For arr = {7, 4, 8, 2, 9}, countbig(arr) should return 3, as 8 and 9 are greater than their previous elements.


// #include<bits/stdc++.h>
// using namespace std;
// int countbig(vector<int>&arr) 
// {
//     int count = 1;
//     for (int i = 1; i < arr.size(); i++) 
//     {
//         if (arr[i]>arr[i - 1]) 
//         {
//             count++;
//         }
//     }
//     return count;
// }
// int main() 
// {
//     vector<int>arr = {7, 4, 8, 2, 9};
//     cout << countbig(arr);
// }
// =========================================================================================================================
cpp work in class
================================================================================================
q.1.bubble sort algorithm Q.....


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
==================================================================================
q.2.find missing number............


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={1,2,3,5,6};
    int count=arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        if(count!=arr[i])
        {
            break;
        }
        count++;
    }
    cout << "missing numebr is: "<<count<<" ";
    return 0;
}
output:-
missing numebr is: 4 
=======================================================================================
q.3.find missing number using flag to recover the bugs of code..........

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
output:-
-1(The series is proper)
================================================================================================
q.4.find missing number in the series of sequence numbers and use common diifrence.............

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
output:-
The missing number in the series is: 7
==============================================================================================================
q.5.find missing number in the series of sequence numbers of multiply by 2 and use common diifrence.............


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
output:-
The missing number in the series is: 32
=========================================================================================================================

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    set<int>arr={1, 2, 3, 4, 5};
    auto it=arr.find(6);
    cout<<*it << "\n";
    cout<<*arr.end() << "\n";
    if(it!=arr.end()) 
    {
        cout<<"Found the element in the array";
    }
    else 
    {
        cout<<"Not Found the element in the array";
    }
    return 0;
}
===========================================================================================================


#include <bits/stdc++.h>
using namespace std;
int find(vector<int>& arr, int key) 
{
    int index = 0;
    for (auto it : arr) 
    {
        if (it == key) 
        {
            return index;
        }
        index++;
    }
    return -1;
int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int key = 7;
    cout << find(arr, key);
    return 0;
}
============================================================================================================
make two array and remove dublicate number and compair this 


#include<bits/stdc++.h>
using namespace std;
bool linearsearch(vector<int>&arr,int ele)
{
    for(auto it:arr)
    {
        if(it == ele)
        {
            return true;
        }
    }
    return false;
}
vector<int> removeduplicate2(vector<int>&arr1,vector<int>&arr2)
{
    vector<int>res;
    for(auto it:arr1)
    {
            if(!linearsearch(arr2,it))
            {
                res.push_back(it);
            }
    }
    for(auto it:arr2)
    {
            if(!linearsearch(arr1,it))
            {
                res.push_back(it);
            }
    }
   
    return res;

}
void removeduplicate(vector<int>&arr,int ele)
{
    for(auto it:arr)
    {
        if(it==ele)
        {
            return;
        }
    }
    arr.push_back(ele);
}
void insertintonew(vector<int>&arr1,vector<int>&arr2)
{
    vector<int>resarr1;
    vector<int>resarr2;
    for(auto it:arr1)
    {
        removeduplicate(resarr1,it);
    }
    for(auto it:arr2)
    {
        removeduplicate(resarr2,it);
    }
    for(auto it:resarr1)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    for(auto it:resarr2)
    {
        cout<<it<<" ";
    }
    cout<<"\n";
    vector<int>res = removeduplicate2(resarr1,resarr2);
    for(auto it:res)
    {
        cout<<it<<" ";
    }
}
int main()
{
    vector<int>arr1= {1,2,2,2,2,23,3,13,4,4,4,4};
    vector<int>arr2= {5,5,5,5,6,6,6,6,7,7,7,2,2,2,3,3,3,1};
    //23 13 4 5 6 7
    insertintonew(arr1,arr2);

}
============================================================================================================
#include<bits/stdc++.h>
using namespace std;

int removeele(vector<int>& arr, int ele) 
{
    for(int i = 0; i < arr.size(); i++) 
    {
        if(arr[i] == ele) 
        {
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    for(auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";
    return arr.size();
}
int main() 
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 6, 6, 5};
    int val = 5;
    cout << removeele(arr, val);
    return 0;
}
===============================================================================================================
#include<bits/stdc++.h>
using namespace std;

void movezeros(vector<int>& arr) 
{
    int count = 0;
    for(int i = 0; i < arr.size(); i++) 
    {
        if(arr[i] == 0)
        {
            count++;
            arr.erase(arr.begin() + i);
            i--;
        }
    }
    for(int i = 0; i < count; i++) 
    {
        arr.push_back(0);
    }
    for(auto it : arr) 
    {
        cout << it << " ";
    }
    cout << "\n";
}
int main() 
{
    vector<int> arr = {4, 5, 0, 1, 9, 0, 5, 0};
    movezeros(arr);
    return 0;
}
=======================================================================================================================
Question:
Write a function countbig that takes an array arr of integers and returns the count of elements that are greater than their previous element. The first element is always counted.

Example: For arr = {7, 4, 8, 2, 9}, countbig(arr) should return 3, as 8 and 9 are greater than their previous elements.


#include<bits/stdc++.h>
using namespace std;
int countbig(vector<int>&arr) 
{
    int count = 1;
    for (int i = 1; i < arr.size(); i++) 
    {
        if (arr[i]>arr[i - 1]) 
        {
            count++;
        }
    }
    return count;
}
int main() 
{
    vector<int>arr = {7, 4, 8, 2, 9};
    cout << countbig(arr);
}
=========================================================================================================================


#include<bits/stdc++.h>
using namespace std;

struct Data {
    vector<string> items;
    int value;
    int qty;
};

int main() {
    // Initializing the map with data
    map<string, Data> medical = {
        {"Pun", {{"Tourism"}, 500, 5}},
        {"Hyd", {{"Genz"}, 200, 3}},
        {"CHD", {{"Heritage"}, 800, 3}},
        {"JK", {{"Agriculture"}, 1000, 2}}
    };

    // Printing table headers
    cout << "States\t\tItems\t\tValue\t\tQty\n";

    // Iterating through the map and printing each entry
    for (auto it : medical) {
        cout << it.first << "\t\t";

        // Printing vector contents
        for (const auto& item : it.second.items) {
            cout << item << " ";
        }
        
        cout << "\t\t" << it.second.value << "\t\t" << it.second.qty << "\n";
    }

    return 0;
}
==================================================================================================================
#include <bits/stdc++.h>
using namespace std;

struct data1 
{
    float weight;
    string item;
};
struct data2
{
    string desc;
    float price;
};
int main() 
{
    vector<pair<data1, data2>> arr; // uninitialized stage

    arr.push_back({{45.56, "mango"}, {"it is yellow, it is juicy", 6000}});
    arr.push_back({{89.69, "orange"}, {"it is pulpy, it is exotic", 9600}});
    arr.push_back({{7800, "pears"}, {"it has fragrance, it is magnetic", 78000}});
    for (auto it : arr)
    {
        cout << it.first.weight << " " << it.first.item << " "9k
             << it.second.desc << "\t\t" << it.second.price << "\n";
    }
    return 0;
}
==================================================================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> genders = {"male", "male", "female", "others", "female", "female", 
                              "male", "female", "others", "others", "nonbinary", 
                              "nonbinary", "female"};

    map<string, int> gendercode = {
        {"male", 0},
        {"female", 1},
        {"others", 2},
        {"nonbinary", 3}
    };

    cout << "gender (categorical) -------> gender (numerical)" << "\n";
    for (auto it : genders) {
        cout << it << " <----------------> " << gendercode[it] << "\n";
    }98

    return 0;
}
================================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,string>>genders= 
    {
        {"Alex","male"},
        {"Emma","female"},
        {"John","male"},
        {"Lily","female"},
        {"Chris","nonbinary"},
        {"Alex","male"},
    };
    map<string,int>gendercode= 
    {
        {"male",0},
        {"female",1},
        {"others",2},
        {"nonbinary",3}
    };
    map<string,int>namecode= 
    {
        {"Alex",0},
        {"Emma",1},
        {"John",2},
        {"Lily",3},
        {"Chris",4}
    };
    cout<<"Name\t\tGender(NumericalData)\n";
    for(auto it:genders)
    {
        cout<<namecode[it.first]<<"\t\t";
        cout<<gendercode[it.second]<<"\n";
    }
}
==========================================================================================================================]r

#include <iostream>
using namespace std;

int main() {
    int arr[] = {16, 2, 8, 6, 33, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 10; // Target sum

    cout << "Pairs with sum " << target << " are:" << endl;

    // Iterate through the array to find pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}
==========================================================================================
#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[] = {10, 20, 30, 40, 50};

    // Get the length of the array (size divided by size of one element)
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Traverse and print all elements using a for loop
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";  // Access each element using the index i
    }

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array
    int numbers[] = {10, 20, 30, 40, 50};

    // Get the length of the array (size divided by size of one element)
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Traverse and print all elements using a for loop
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";  // Access each element using the index i
    }

    return 0;
}

===============================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {16, 2, 8, 6, 33, 1};
    int target = 10;

    cout << "Pairs with sum " << target << " are:" << endl;

    // Iterate through the vector to find pairs
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}
=====================================================================================
H W ....


data data type 

vector all methods
==================================================================================
// Create a vector of strings to store the names of three cities. Insert one more city at the second position, and then erase the last city. Display the updated vector.:

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<string>numbers={"jaipur","mumbai","goa"};
    numbers.insert(numbers.begin()+2,"Kota");
    numbers.pop_back();
    for (auto it:numbers) 
    {
        cout<<it<<" ";
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int arr[]={10,20,30,40,50};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for (int i=0;i<n/2;i++) 
//     {
//         swap(arr[i],arr[n-1-i]);
//     }
//     for(auto it:arr) 
//     {
//         cout<<it;
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     int arr[] = {77,88,98,99,76};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int temp=arr[0];
//     for (int i=0;i<n-1;i++) 
//     {
//         arr[i]=arr[i+1];
//     }
//     arr[n-1]=temp;
//     for (auto it : arr) 
//     {
//         cout << it << " ";
//     }
//     return 0;
// }
===================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5}; // Example array
    int sum = 0;

    for (int num : arr) {
        sum += num; // Add each element to the sum
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}
====================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int smallest = *min_element(arr, arr + n); // Use min_element for arrays

    cout << "Smallest element: " << smallest << endl;
    return 0;
}
=========================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest element
        }
    }

    cout << "Largest element: " << largest << endl;
    return 0;
}
===============================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    if (n == 0) {
        cout << "The array is empty." << endl;
        return 0;
    }

    // Print the first and last elements
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[n - 1] << endl;

    return 0;
}

+3
===============================================
9.

#include <bits/stdc++.h>
using namespace std;

// Function to calculate the sum of all even elements
int sumOfEvenElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the element is even
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = {12, 5, 7, 3, 19, 10, 8}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int sum = sumOfEvenElements(arr, n);

    cout << "Sum of all even elements: " << sum << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int sum = 0;
    int i = 0;

    // Use while loop to calculate the sum
    while (i < n) {
        sum += arr[i];
        i++;
    }

    cout << "Sum of all elements: " << sum << endl;
    return 0;
}


Count the Number of Even and Odd Digits whith while loop

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; // Array of digits
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array
    int even_count = 0, odd_count = 0;

    int i = 0; // Index for the while loop

    // Loop through the array using while loop
    while (i < n) {
        if (arr[i] % 2 == 0) {
            even_count++; // Increment even count
        } else {
            odd_count++; // Increment odd count
        }
        i++; // Move to the next element
    }

    // Output the counts
    cout << "Number of even digits: " << even_count << endl;
    cout << "Number of odd digits: " << odd_count << endl;

    return 0;
}

=======================================================
#include <bits/stdc++.h>
using namespace std;

// Function to check if the array is a palindrome
bool isPalindrome(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false; // Not a palindrome if elements don't match
        }
    }
    return true; // It's a palindrome
}

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    if (isPalindrome(arr, n)) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
===============================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int sum = 0; // Initialize sum to 0
    for (int i = 0; i < n; i++) {
        sum += arr[i]; // Add each element to sum
    }

    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
=======================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int doubled[n]; // New array to store doubled elements

    for (int i = 0; i < n; i++) {
        doubled[i] = 2 * arr[i]; // Double each element
    }

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Doubled array: ";
    for (int i = 0; i < n; i++) {
        cout << doubled[i] << " ";
    }
    cout << endl;

    return 0;
}

==================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int copy[n]; // New array to store the copy

    // Copy elements from the original array to the new array
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Display the copied array
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}


=========
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19, 8, 4}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int sum = 0; // Variable to store the sum of even elements

    // Loop through the array and add even elements to sum
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Check if the element is even
            sum += arr[i]; // Add the even element to sum
        }
    }

    // Output the sum of all even elements
    cout << "Sum of even elements: " << sum << endl;

    return 0;
}

===============================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {12, 5, 7, 3, 19}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int copyArr[n]; // Array to store the copy of the original array

    // Copy the elements from the original array to the new array
    for (int i = 0; i < n; i++) {
        copyArr[i] = arr[i];
    }

    // Display the copied array
    cout << "Copied array: ";
    for (int i = 0; i < n; i++) {
        cout << copyArr[i] << " ";
    }
    cout << endl;

    return 0;
}
==================
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1, 4, 6, 8}; // First sorted vector
    vector<int> arr2 = {2, 3, 5, 7}; // Second sorted vector

    vector<int> merged; // Vector to store the merged result

    int i = 0, j = 0;

    // Merge the two vectors
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }

    // If there are remaining elements in arr1
    while (i < arr1.size()) {
        merged.push_back(arr1[i++]);
    }

    // If there are remaining elements in arr2
    while (j < arr2.size()) {
        merged.push_back(arr2[j++]);
    }

    // Output the merged vector
    cout << "Merged vector: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
====================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 4, 6, 8}; // First sorted array
    int arr2[] = {2, 3, 5, 7}; // Second sorted array
    int n1 = sizeof(arr1) / sizeof(arr1[0]); // Size of the first array
    int n2 = sizeof(arr2) / sizeof(arr2[0]); // Size of the second array

    int merged[n1 + n2]; // Array to store the merged result

    int i = 0, j = 0, k = 0;

    // Merge the two arrays
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    // If there are remaining elements in arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    // If there are remaining elements in arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }

    // Output the merged array
    cout << "Merged array: ";
    for (int i = 0; i < n1 + n2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
========================================================= 

#include <bits/stdc++.h>
using namespace std;

void mergeSortedArrays(int a[], int n, int b[], int m, int arr[]) {
    int i = 0, j = 0, k = 0;

    // Merge elements from both arrays
    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }

    // Add remaining elements from array a
    while (i < n) {
        arr[k++] = a[i++];
    }

    // Add remaining elements from array b
    while (j < m) {
        arr[k++] = b[j++];
    }
}

int main() {
    int a[] = {1, 3, 5};
    int b[] = {2, 4, 6};

    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int arr[n + m]; // Resultant array to hold merged elements

    mergeSortedArrays(a, n, b, m, arr);

    // Print the merged array
    for (int i = 0; i < n + m; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
=====================================================================================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    vector<int> res;

    for (auto it : arr1)
    {
        res.push_back(it);
    }
    for (auto it : arr2)
    {
        res.push_back(it);
    }
    sort(res.begin(), res.end());
    for (auto it : res)
    {
        cout << it << " ";
    }
    return 0;
}

=======================================================================================

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};
    vector<int> res;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            res.push_back(arr1[i]);
            i++;
        }
        else
        {
            res.push_back(arr2[j]);
            j++;
        }
    }

    // Exhaust for i
    while (i < arr1.size())
    {
        res.push_back(arr1[i]);
        i++;
    }

    // Exhaust for j
    while (j < arr2.size())
    {
        res.push_back(arr2[j]);
        j++;
    }

    for (auto it : res)
    {
        cout << it << " ";
    }

    return 0;
}

=====================================================================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int pos = 3;
    int pos=4;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n=n-1;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
========================================================================================
#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int notodelete;

    cout << "Please enter how many numbers you want to delete: ";
    cin >> notodelete;

    while (notodelete) {
        int pos;
        cout << "Enter the position you want to delete: ";
        cin >> pos;

        if (pos >= 0 && pos < n) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            cout << "Array after deletion: ";
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        } else {
            cout << "Invalid position. Please enter a valid position.\n";
        }

        notodelete--;
    }

    return 0;
}
======================================================================================
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newarr[n+1];
    int pos, num;
    cout << "Please enter the position and element: ";
    cin >> pos >> num;
    for (int i = 0; i < pos; i++) 
    {
        newarr[i] = arr[i];
    }
    newarr[pos] = num;
    for (int i = pos; i < n; i++) 
    {
        newarr[i+1] = arr[i];
    }
    for (auto it : newarr) 
    {
        cout << it << " ";
    }
    return 0;
}
=====================================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Use reverse from the STL
    reverse(arr, arr + n);

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isPalindrome = true;

    // Check if the array is a palindrome
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Print the result
    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;

    // Check for palindrome
    while (left < right) {
        if (arr[left] != arr[right]) {
            cout << "The array is not a palindrome." << endl;
            return 0;
        }
        left++;
        right--;
    }

    cout << "The array is a palindrome." << endl;
    return 0;
}
2.
10132


=================================================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 1}; // Input array
    int n = sizeof(arr) / sizeof(arr[0]);
    int left = 0, right = n - 1;
    bool isPalindrome = true;

    // Check if the array is a palindrome using a while loop
    while (left < right) {
        if (arr[left] != arr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    // Print the result
    if (isPalindrome) {
        cout << "The array is a palindrome." << endl;
    } else {
        cout << "The array is not a palindrome." << endl;
    }

    return 0;
}
=========================================================================================
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 2, 1};
    int i = 0, j = arr.size() - 1;
    int flag = 0;
    while (i < j) 
    {
        if (arr[i] != arr[j])
        {
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    (flag==0)?cout<<"Palindrome hai\n":cout<<"Palindrome nahi hai";
}
====================================================================================

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1={1,7,8,3,5};
    vector<int>arr2={2,4,6,9,11};
    vector<int>arr3;
    for (auto it : arr1)
    {
        arr3.push_back(it);
    }
    for (auto it : arr2)
    {
        arr3.push_back(it);
    }
    sort(arr3.begin(), arr3.end());
    for (auto it : arr3)
    {
        cout << it << " ";
    }
    return 0;
}
==========================================================================

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr1={1,7,8,3,5};
    vector<int>arr2={2,4,6,9,11};
    vector<int>arr3;
    int i=0,j=0;
    
    while(i<arr1.size()&&j<arr2.size())
    {
        if(arr1[i]<=arr2[j])
        {
            arr3.push_back(arr1[i]);
            i++;
        }
        else
        {
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while (i<arr1.size())
    {
        arr3.push_back(arr1[i]);
        i++;
    }
    while (j<arr2.size())
    {
        arr3.push_back(arr2[j]);
        j++;
    }
    for(auto it:arr3)
    {
        cout<<it;
    }
}


Merge two sorted arrays, but only up to the first n/2 elements of each.  
Array A: [1, 3, 5, 7]
Array B: [2, 4, 6, 8]
First n/2 elements: A = [1, 3], B = [2, 4]
Merged: [1, 2, 3, 4]


#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2 = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    vector<int> res;
    int n1 = arr1.size()/2;
    int n2 = arr2.size()/2;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            res.push_back(arr1[i]);
            i++;
        } else {
            res.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n1) {
        res.push_back(arr1[i]);
        i++;
    }
    while (j < n2) {
        res.push_back(arr2[j]);
        j++;
    }
    for (auto it : res) {
        cout << it << " ";
    }
}


Check if each number is a palindrome.  

Array: [121, 232, 345, 454,1221,345]
Result: [Yes, Yes, No, Yes, No,Yes]


#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n) 
{
    int r=0;
    int temp=n;
    while(n) 
    {
        r=r*10+n%10;
        n/=10;
    }
    return(temp==r);
}
int main() 
{
    vector<int>arr={1221,521,12321,456,321,569,789};
    vector<string>res;
    for (auto it:arr) 
    {
        if (palindrome(it)) 
        {
            res.push_back("Yes this is palindrome\n");
        }
        else 
        {
            res.push_back("No this is not palindrome\n");
        }
    }
    for (auto it : res) 
    {
        cout << it << " ";
    }
    return 0;
}


Move all zeros in an array to the end without changing the order of non-zero elements.  
Array: [0, 5, 0, 3, 4, 0, 1]
Output: [5, 3, 4, 1, 0, 0, 0]



#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={0,5,0,3,4,0,1};
    int num=arr.size();
    int it=0; 
    for (int i=0;i<num;i++)
    {
        if(arr[i]!=0)
        {
            arr[it++]=arr[i];
        }
    }
    while (it<num)
    {
        arr[it++]=0;
    }
    for(auto it:arr)
    {
        cout<<it;
    }
}


Move all zeros in an array to the end without changing the order of non-zero elements.  
Array: [0, 5, 0, 3, 4, 0, 1]
Output: [5, 3, 4, 1, 0, 0, 0]


#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={0, 5, 0, 3, 4, 0, 1};
    vector<int>res;
    int count0=0;
    for(auto it:arr) 
    {
        if(it==0) 
        {
            count0++;
        }
    }
    for(auto it:arr) 
    {
        if(it!=0) 
        {
            res.push_back(it);
        }
    }
    for(int i=0;i<count0;i++) 
    {
        res.push_back(0);
    }
    for(auto it:res) 
    {
        cout<<it<<" ";
    }
}
======================================================================================================
// Move all zeros in an array to the end without changing the order of non-zero elements.  
// Array: [0, 5, 0, 3, 4, 0, 1]
// Output: [5, 3, 4, 1, 0, 0, 0]


#include<bits/stdc++.h>
using namespace std;
int main() 
{
    vector<int>arr={0,5,0,3,4,0,1};
    int n = arr.size();
    int j=0;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]!=0) 
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=j;i<n;i++) 
    {
        arr[i]=0;
    }
    for(auto it:arr) 
    {
        cout<<it<<" ";
    }
}
==============================================================
// Find the smallest missing positive integer in an unsorted array.  
// Array: [3, 4, -1, 1]
// Output: 2


#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Mis = {3,4,-1,1};  
    int num = 0, max = Mis[0];
    for (int i = 0; i < Mis.size(); i++)
    {
        if (Mis[i] > 0)
        {
            num += Mis[i];
        }
        if (max < Mis[i])
            max = Mis[i];
    }
    cout <<  ((max/2) * (max + 1))-num << endl;
}
===========================================================================================
#include <bits/stdc++.h>
using namespace std;

bool linearsearch(vector<int>& arr, int ele) {
    for (auto it : arr) {
        if (it == ele) {
            return true;
        }
    }
    return false;
}

int firstduplicate(vector<int>& arr) {
    vector<int> seen; // To track the elements already seen
    for (auto it : arr) {
        if (linearsearch(seen, it)) {
            return it; // First duplicate found
        }
        seen.push_back(it); // Add the element to the seen list
    }
    return -1; // No duplicate found
}

int main() {
    vector<int> nums = {3, 5, 2, 4, 5, 2};
    cout << firstduplicate(nums) << endl; // Output: 5
    return 0;
}
============================================================================================
1.
Given an array of integers, find the first duplicate element and return it. If no duplicate exists, return -1.
Example:
Input: [3, 5, 2, 4, 5, 2]
Output: 5


#include<bits/stdc++.h>
using namespace std;
int first(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                return arr[i];
            }
        }
    }
    return -1;
}
int main() 
{
    int nums[] = {3, 5, 2, 4, 5, 2};
    int n=sizeof(nums)/sizeof(nums[0]);
    cout << first(nums,n);
    return 0;
}
================================================
// #include<bits/stdc++.h>
// using namespace std;
// int main() 
// {
//     vector<int>arr={0,5,0,3,4,0,1};
//     int n = arr.size();
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]!=0)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     for(int i=j;i<n;i++)
//     {
//         arr[i]=0;
//     }
//     for(auto it:arr)
//     {
//         cout<<it<<" ";
//     }
// }


// 1.
// Given an array of integers, find the first duplicate element and return it. If no duplicate exists, return -1.
// Example:
// Input: [3, 5, 2, 4, 5, 2]
// Output: 5



// #include <bits/stdc++.h>
// using namespace std;
// int first(vector<int>& arr) 
// {
//     vector<int>n;
//     for (auto it : arr) 
//     {
//         if(n<=it) 
//         {
//             return it;
//         }
//         n.push_back(it);
//     }
//     return -1;
// }
// int main() 
// {
//     vector<int>nums={3, 5, 2, 4, 5, 2};
//     cout<<first(nums);
//     return 0;
// }













// #include<bits/stdc++.h>
// using namespace std;
// int first(int arr[], int n) 
// {
//     for (int i = 0; i < n; i++) 
//     {
//         for (int j = i + 1; j < n; j++) 
//         {
//             if (arr[i] == arr[j]) 
//             {
//                 return arr[i];
//             }
//         }
//     }
//     return -1;
// }
// int main() 
// {
//     int nums[] = {3, 5, 2, 4, 5, 2};
//     int n=sizeof(nums)/sizeof(nums[0]);
//     cout << first(nums,n);
//     return 0;
// }





// 2.Write a function that counts and returns the number of unique elements in an array.
// Example:
// Input: [1, 2, 2, 3, 4, 4, 5]
// Output: 3 (Unique elements are 1, 3, and 5)

// #include<bits/stdc++.h>
// using namespace std;
// int countunique(int arr[],int n) 
// {
//     int uqcount=0;
//     bool isunique;
//     for (int i=0;i<n;i++) 
//     {
//         isunique=true;
//         for(int j=0;j<n;j++) 
//         {
//             if(i!=j&&arr[i]==arr[j]) 
//             {
//                 isunique=false;
//                 break;
//             }
//         }
//         if(isunique) 
//         {
//             uqcount++;
//         }
//     }
//     return uqcount;
// }
// int main() 
// {
//     int nums[] = {1, 2, 3, 4, 4, 5, 5,5,6,1,2};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     cout << countunique(nums, n);
//     return 0;
// }



// ==============================================
// #include <bits/stdc++.h>
// using namespace std;

// int countunique(int arr[], int n) 
// {
//     int uqcount = 0;
//     bool isunique;

//     for (int i = 0; i < n; i++) 
//     {
//         isunique = true;
//         for (int j =i+1; j < n; j++) 
//         {
//             if (arr[i] == arr[j]) 
//             {
//                 isunique = false;
//                 break;
//             }
//         }
//         if (isunique) 
//         {
//             uqcount++;
//         }
//     }

//     return uqcount;
// }

// int main() 
// {
//     int nums[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     cout << countunique(nums, n);
//     return 0;
// }
// ================================================================

// 3.Given an array of integers, return an array of all the duplicate elements.
// Example:
// Input: [7, 3, 5, 7, 3, 8]
// Output: [7, 3]


// #include<bits/stdc++.h>
// using namespace std;
// void findallduplicate(int arr[],int n)
// {
//     int uqcount=0;
//     int res[100];
//     int k=0;
//     bool isunique = true;
//     for(int i=0; i<n; i++)
//     {
//         isunique = true;
//         for(int j=0; j<n; j++)
//         {
//             if(i!=j && arr[i]==arr[j])
//             {
//                 isunique = false;
//                 break;
//             }
//         }
//         if(isunique==false) {
//             res[k]=arr[i];
//             k++;
//         }
//     }
//     for(auto it:res)
//     {
//       if(it!=0)
//       {
//           cout<<it<<" ";
//       }
//     }
// }
// int main()
// {
//     int arr[]= {1,2,3,4,4,5,5,5,6,6,1,2,2};
//     int n = sizeof(arr)/sizeof(int);
//     findallduplicate(arr,n);
// }

// ==============================================================

// 4.Given an array where all elements appear twice except for one, find the unique element.
// Example:
// Input: [2, 3, 5, 2, 5]
// Output: 3


// #include<bits/stdc++.h>
// using namespace std;
// int countunique(int arr[],int n)
// {
//     bool isunique=true;
//     for(int i=0;i<n;i++)
//     {
//         isunique=true;
//         for(int j=0;j<n;j++)
//         {
//             if(i!=j&& arr[i]==arr[j])
//             {
//                 isunique = false;
//                 break;
//             }
//         }
//         if(isunique) 
//         {
//           return arr[i];
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int arr[]= {1,2,3,4,4,5,5,5,6,6,1,2,2};
//     int n = sizeof(arr)/sizeof(int);
//     cout<<countunique(arr,n);
// }



// #include <bits/stdc++.h>
// using namespace std;
// int findUnique(int arr[], int n) 
// {
//     int uniqueElement = 0;
//     for (int i = 0; i < n; i++) 
//     {
//         uniqueElement ^= arr[i];
//     }
//     return uniqueElement;
// }
// int main() 
// {
//     int nums[] = {2, 3, 5, 2, 5};
//     int n = sizeof(nums) / sizeof(nums[0]);
//     cout << findUnique(nums, n);
//     return 0;
// }
// =====================================================================
// 5.Given a sorted array, remove the duplicates in-place such that each unique element appears only once. Return the new length of the array.
// Example:
// Input: [1, 1, 2, 2, 3, 4]
// Output: 4 (Array becomes [1, 2, 3, 4])
#include <bits/stdc++.h>
using namespace std;
int removedu(int arr[], int n) 
{
    int index = 0;
    for (int i=1;i<n;i++) 
    {
        if (arr[index]!=arr[i]) 
        {
            index++;
            arr[index]=arr[i];
        }
    }
    return index+1;
}
int main() 
{
    int array[]={1,1,2,2,3,4};
    int n = sizeof(array) / sizeof(array[0]);
    int newlength=removedu(array,n);
    cout<<newlength<<"\n";
    for (int i=0;i<newlength;i++) 
    {
        cout<<array[i];
    }
    return 0;
}
===============================================================================
// 6.Write a function that returns true if all elements in the array are unique, otherwise false.
// Example:
// Input: [6, 2, 4, 9]
// Output: true
// Input: [1, 2, 3, 1]
// Output: false

#include<bits/stdc++.h>
using namespace std;
bool unique(int arr[],int n) 
{
    for(int i=0;i<n;i++) 
    {
        for(int j=i+1;j<n;j++) 
        {
            if(arr[i]==arr[j]) 
            {
                return false;
            }
        }
    }
    return true;
}
int main() 
{
    int num[] = {6, 2, 4, 9};
    int n=sizeof(num)/sizeof(num[0]);
    if(unique(num,n)) 
    {
        cout<<"true";
    } 
    else 
    {
        cout<<"false";
    }
    return 0;
}
================================================================================




// Questions 13-12-2024


#include<bits/stdc++.h>
using namespace std;
int sumofeven(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
      if(arr[i]%2==0)
      {
          sum+=arr[i];
      }
    }
    return sum;
}
int main()
{
    int arr[]={1,2,3,4,5,6,6,77,88,9,69,72,78,81,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<sumofeven(arr,size);
}



#include<bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int n) {
    int largest = arr[0];
    int i = 0;

    // Use a while loop to find the largest element
    while (i < n) {
        if (largest < arr[i]) {
            largest = arr[i];
        }
        i++;
    }
    cout << "Largest element: " << largest << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 77, 88, 9, 69, 72, 78, 81, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    largestElement(arr, size);
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
void largestandsmallest(int arr[],int n)
{
   int largest = arr[0];
   int smallest =arr[0];
   for(int i=0;i<n;i++)
   {
       if(largest<arr[i])
       {
           largest=arr[i];
       }
       if(smallest>arr[i])
       {
           smallest=arr[i];
       }
   }
   cout<<smallest<<" "<<largest;
}
int main()
{
    int arr[]={1,2,3,4,5,6,6,77,88,9,69,72,78,81,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    largestandsmallest(arr,size);
}





#include<bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n)
{
   int i=0,j=n-1;
   while(i<j)
   {
       swap(arr[i],arr[j]);
       i++;
       j--;
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
}
int main()
{
    int arr[]={1,2,3,4,5,6,6,77,88,9,69,72,78,81,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    reversearray(arr,size);
}


=============

#include<bits/stdc++.h>
using namespace std;
void freqarr(int arr[], int n) 
{
    int res[100];
    for(int i=0;i<n;i++) 
    {
        res[arr[i]]++;
    }
    for(int i=0;i<100;i++) 
    {
        if(res[i]!=0)
        {
            cout<<i<<" "<<res[i]<<"\n";
        }
    }
}
int main() 
{
    int arr[]={1,2,3,2,4,1,5,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    freqarr(arr, n);
    return 0;
}
=================
#include<bits/stdc++.h>
using namespace std;
void secondlargest(int arr[],int n)
{
  int largest =arr[0];
  int secondlargestele;
  for(int i=0;i<n;i++)
  {
      if(largest<arr[i])
      {
          secondlargestele = largest;
          largest=arr[i];
      }
      else if(secondlargestele<arr[i] && arr[i]!=largest)
      {
          secondlargestele=arr[i];
      }
  }
  cout<<largest<<" "<<secondlargestele;
}
int main()
{
    int arr[]={1,2,2,1,2,2,2,3,4,5,6,6,77,88,9,69,72,78,81,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    secondlargest(arr,size);
}
=========================================================
#include <bits/stdc++.h>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false; // Numbers <= 1 are not prime

    int i = 2; // Start checking from 2
    while (i * i <= n) { // Check divisors up to sqrt(n)
        if (n % i == 0) {
            return false; // If divisible, it's not prime
        }
        i++;
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 17}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate size of array

    cout << "Prime numbers in the array are: ";
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    long long factorial = 1; // Variable to store factorial result
    int i = 1; // Start from 1

    // While loop to calculate factorial
    while (i <= n) {
        factorial *= i; // Multiply current value of i
        i++;            // Increment i
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}



The code defines a robot object with a greet method that uses the rest parameter (...messages) to accept multiple arguments. The method joins the messages and returns a string combining the name property and the passed messages.

When robot.greet("Hello", "World!") is called, it returns "Robo: Hello World!".

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the upper limit (n): ";
    cin >> n;

    int a = 0, b = 1, next = 0;

    cout << "Fibonacci sequence up to " << n << ": ";

    if (n >= 0) cout << a << " "; // Print the first Fibonacci number
    if (n >= 1) cout << b << " "; // Print the second Fibonacci number

    next = a + b;

    while (next <= n) {
        cout << next << " ";
        a = b;           // Update previous number
        b = next;        // Update current number
        next = a + b;    // Calculate the next Fibonacci number
    }

    cout << endl;
    return 0;
}




#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    vector<int> arr = {2, 3, 4, 5};
    vector<int> result;

    // Squaring each element and storing in the result array
    for (int i = 0; i < arr.size(); i++) {
        result.push_back(arr[i] * arr[i]);
    }

    // Printing the result array
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
=============================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    int arr[] = {2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int result[n]; // Output array to store squares

    // Squaring each element and storing in the result array
    for (int i = 0; i < n; i++) {
        result[i] = arr[i] * arr[i];
    }

    // Printing the result array
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}
======================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Swap adjacent elements
    for (int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    // Print the resulting array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
=======================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    int arr[] = {10, 20, 30, 40};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Reverse the array
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
=============================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    int arr[] = {5, 12, 3, 19, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    int max_element = arr[0]; // Assume the first element is the maximum

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    // Print the maximum element
    cout << "Maximum element: " << max_element << endl;

    return 0;
}
===============================
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Input array and target sum
    int arr[] = {2, 4, 3, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 6;
    // Find all pairs of elements whose sum equals the target
    cout << "Pairs with sum " << target << ": ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "(" << arr[i] << ", " << arr[j] << ") ";
            }
        }
    }
    return 0;
}
==================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    int even_count = 0, odd_count = 0;

    // Count even and odd numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    // Print the counts
    cout << "Even: " << even_count << ", Odd: " << odd_count << endl;

    return 0;
}

=========================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array and target element
    int arr[] = {4, 5, 2, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 2;

    // Variable to store the index of the first occurrence
    int index = -1;

    // Find the first occurrence of the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break; // Stop searching after finding the first occurrence
        }
    }

    // Print the result
    if (index != -1) {
        cout << "The first occurrence of " << target << " is at index: " << index << endl;
    } else {
        cout << target << " is not present in the array." << endl;
    }

    return 0;
}
================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Input array and target element
    int arr[] = {1, 2, 3, 4, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int target = 2;

    // Variable to store the index of the last occurrence
    int last_index = -1;

    // Find the last occurrence of the target element
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            last_index = i; // Update the last index whenever the target is found
        }
    }

    // Print the result
    if (last_index != -1) {
        cout << "The last occurrence of " << target << " is at index: " << last_index << endl;
    } else {
        cout << target << " is not present in the array." << endl;
    }

    return 0;
}
====================================
cpp assignment date 18dec2024..........
====================================================================================================================
q.1.Initialize an integer array arr of size 5 with values 1, 2, 3, 4, 5.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[5]={1,2,3,4,5};
    for(int i=0;i<5;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
====================================================================================================================
q.2.Create an integer array arr of size 6 where only the first 3 elements are initialized to 10, 20, 30. What are the remaining elements initialized to?


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[6]={10,20,30};
    for(int i = 0; i < 6; i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
====================================================================================================================
q.3.Declare and initialize a character array chars with the string "Hello" and print each character individually.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    char arr[]={'h','e','l','l','o'};
    for(int i = 0; i < 5; i++) 
    {
        cout << arr[i];
    }
    return 0;
}
====================================================================================================================
q.4.Take an integer n from the user and initialize an integer array of size n with the squares of the numbers 1 to n.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) 
    {
        arr[i] =(i+1)*(i+1);
    }
    for(auto it:arr) 
    {
        cout<<it<<" ";
    }
    return 0;
}
====================================================================================================================
q.5.Create an integer array arr of size 5 and initialize it with numbers 5, 10, 15, 20, 25 using a loop.


#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[5];
    for(int i=0;i<5;i++) 
    {
        arr[i]=(i+1)*5;
    }
    for(int i=0;i<5;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
====================================================================================================================
q.6.Create an integer array arr of size 5 and initialize all elements to -1 in a single line.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[5]={-1,-1,-1,-1,-1};
    for (int i=0;i<5;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
====================================================================================================================
q.7.Initialize an array arr2 by copying the values from another array arr1 which contains {1, 2, 3, 4, 5}.





#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5];
    for (int i=0;i<5;i++) 
    {
        arr2[i]=arr1[i];
    }
    for(auto it:arr2) 
    {
        cout<<it<< " ";
    }
    return 0;
}
====================================================================================================================
q.8.Write a function that takes an integer n and returns an integer array of size n initialized with the value 42 in each position.




#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[5]={42,42,42,42,42};
    for (int i = 0; i < 5; i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
====================================================================================================================
cpp test date 23dec2024............
================================================================================================
q.1.Write a program to create a new array where each element is the sum of the current element and twice its index.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++) 
    {
        res[i]=arr[i]+2*i;
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i];
    }
    return 0;
}
============================================================================================================================================
q.2.Create a program to count how many elements in an array are divisible by a given number and store the count in a variable.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={12,15,20,25,30,35};
    int n=sizeof(arr)/sizeof(arr[0]);
    int divaed=5,count=0;
    for (int i=0;i<n;i++) 
    {
        if(arr[i]%divaed==0) 
        {
            count++;
        }
    }
    cout<< count;
    return 0;
}
============================================================================================================================================
q.3.Write a program to generate a new array where each element is the product of all elements in the original array except the current one.


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++) 
    {
        int product=1;
        for (int j=0;j<n;j++) 
        {
            if(i!=j) 
            {
                product *= arr[j];
            }
        }
        res[i]=product;
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.4.Create a program to replace all elements in an array that are less than 0 with their absolute value and store the results in a new array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={-3,7,-1,4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++) 
    {
        if(arr[i]<0)
        {
            res[i]=-arr[i];
        }
        else 
        {
            res[i]=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.5.Write a program to find the first occurrence of a given element in an array and return its index or -1 if not found.


#include <bits/stdc++.h>
using namespace std;
int find(vector<int>&arr,int key)
{
    int index=0;
    for(auto it:arr) 
    {
        if(it==key) 
        {
            return index;
        }
        index++;
    }
    return -1;
}
int main() 
{
    vector<int>arr={1,2,3,4,5,6};
    int key=7;
    cout<<find(arr,key);
    return 0;
}
============================================================================================================================================
q.6.Create a program to generate a new array where each element is the sum of all previous elements in the original array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    res[0]=arr[0];
    for(int i=1;i<n;i++) 
    {
        res[i]=res[i-1]+arr[i];
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.7.Write a program to replace every even number in an array with 0 and every odd number with 1, storing the result in a new array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++) 
    {
        if(arr[i]%2==0) 
        {
            res[i]=0;
        } 
        else 
        {
            res[i]=1;
        }
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<< " ";
    }
    return 0;
}
============================================================================================================================================
q.8.Create a program to generate a new array where each element is the difference between the maximum value in the original array and the current element.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={3,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxval =* max_element(arr,arr+n);
    for(int i=0;i<n;i++) 
    {
        cout<<maxval-arr[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.9.Write a program to find the smallest number in an array and replace every element greater than it with the smallest number in a new array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={3,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]),minval = *min_element(arr,arr+n),res[n];
    for(int i=0;i<n;i++) 
    {
        if(arr[i]>minval) 
        {
            res[i]=minval;
        } 
        else 
        {
            res[i]=arr[i];
        }
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.10.Create a program to generate a new array by shifting each element in the original array to the right, with the last element moving to the first position.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={3,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int res[n];
    res[0]=arr[n-1];
    for(int i=1;i<n;i++) 
    {
      res[i]=arr[i-1];
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================================================
q.11.Write a program to count the number of elements in an array that are greater than the average of the array and store the count in a variable.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={3,5,7,2,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++) 
    {
        sum += arr[i];
    }
    int average=sum/int(n);
    int count=0;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]>=average) 
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
============================================================================================================================================
q.12.Create a program to find all the duplicate elements in an array and store them in a new array.


#include<bits/stdc++.h>
using namespace std;
void findallduplicate(int arr[],int n)
{
    int uqcount=0;
    int res[100];
    int k=0;
    bool isunique = true;
    for(int i=0; i<n; i++)
    {
        isunique = true;
        for(int j=0; j<n; j++)
        {
            if(i!=j && arr[i]==arr[j])
            {
                isunique = false;
                break;
            }
        }
        if(isunique==false) {
            res[k]=arr[i];
            k++;
        }
    }
    for(auto it:res)
    {
      if(it!=0)
      {
          cout<<it<<" ";
      }
    }
}
int main()
{
    int arr[]= {1,2,3,4,4,5,5,5,6,6,1,2,2};
    int n = sizeof(arr)/sizeof(int);
    findallduplicate(arr,n);
}

============================================================================================================================================
q.13.Write a program to generate a new array where each element is the cumulative product of the elements up to that index in the original array.


#include<bits/stdc++.h>
using namespace std;
void cumulative(int arr[], int n)
{
    int res[n];
    res[0]=arr[0];
    for(int i=1;i<n;i++) 
    {
        res[i]=res[i-1]*arr[i];
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
}
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cumulative(arr,n);
    return 0;
}
============================================================================================================================================
q.14.Create a program to replace every element in an array with its binary equivalent stored as a string in a new array.
============================================================================================================================================
q.15.Write a program to generate a new array where each element is the square of the difference between the element and the average of the original array.
============================================================================================================================================
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 23, 45, 67, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool results[n];

    for (int i = 0; i < n; i++)
        results[i] = (arr[i] % 5 == 0);

    for (int i = 0; i < n; i++)
        cout << (results[i] ? "true " : "false ");

    return 0;
}
===========================================================================================

cpp test date 2 jan 2025..................
============================================================================================================
 q.1. Write a program to check if each element in the array is a power of 2.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,8,10,16,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++) 
    {
        if(arr[i]>0&&(arr[i]&(arr[i]-1))==0) 
        {
            res[i] = 1;
        } 
        else 
        {
            res[i] = 0;
        }
    }
    for(int i=0;i<n;i++) 
    {
        cout<<res[i]<<" ";
    }
    return 0;
}
============================================================================================================
 q.2. Write a program to find the sum of elements at even indices in an array.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i+=2) 
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
============================================================================================================
 q.3. Write a program to find the sum of cubes of each element in the array.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++) 
    {
        sum+=arr[i]*arr[i]*arr[i];
    }
    cout<<sum;
    return 0;
}
============================================================================================================
 q.4. Write a program to check if each element in an array is divisible by the sum of its digits.
============================================================================================================
 q.5. Write a program to find the maximum and minimum elements at odd indices separately
 in an array.
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={10,20,15,40,30,25,50,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxodd = INT_MIN;
    int minodd = INT_MAX;

    for(int i=1;i<n;i+=2)
    {
        if(arr[i]>maxodd) 
        {
            maxodd=arr[i];
        }
        if(arr[i]<minodd) 
        {
            minodd=arr[i];
        }
    }
    cout<<maxodd<<"\n";
    cout<<minodd;
    return 0;
}
============================================================================================================
 q.6. Write a program to find the common prime factors between each element and the index.
============================================================================================================
 q.7. Write a program to find the sum of the prime factors of each element in an array.
============================================================================================================
 q.8. Write a program to calculate the product of the even elements in the array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int product = 1; 
    bool even = false;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]%2==0) 
        {
            product*=arr[i];
            even=true;
        }
    }
    if(even) 
    {
        cout<<product;
    } 
    else 
    {
        cout<<"No even elements";
    }

    return 0;
}
============================================================================================================
 q.9. Write a program to find the sum of even numbers and the product of odd numbers in an
 array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sumeven = 0;
    int productodd = 1;
    bool odd=false;
    for(int i=0;i<n;i++) 
    {
        if(arr[i]%2==0) 
        {
            sumeven+=arr[i];
        }
        else 
        {
            productodd*=arr[i];
            odd = true;
        }
    }
    cout<<sumeven<<"\n";
    if(odd) 
    {
        cout<<productodd<<"\n";
    } 
    else 
    {
        cout<<"No odd numbers";
    }
    return 0;
}
============================================================================================================
 q.10. Write a program to replace each element in the array with its index squared.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) 
    {
        arr[i]=i*i;
    }
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
============================================================================================================
cpp assignment date 3jan2025..................
===========================================================================================================================================
q.1.Write a program to reverse an array of integers. For example, given [1, 2, 3, 4, 5], the output should be [5, 4, 3, 2, 1].


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0,j=n-1;
    while(i<j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
===========================================================================================================================================
q.2.Write a function to find the maximum element in an array. For example, given [3, 7, 1, 9, 4], the output should be 9.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={5,12,3,19,7,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    for(int i=0;i<n;i++) 
    {
        if(arr[i]>max) 
        {
            max=arr[i];
        }
    }
    cout<<max;
    return 0;
}
===========================================================================================================================================
q.3.Write a program to calculate the sum of all elements in an array. For example, for the array [2, 4, 6, 8], the output should be 20.

#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={2,4,6,8};
    int s=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<=s;i++) 
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
===========================================================================================================================================
q.4.Write a program to find the sum of the first three digits (if available) of each element in the array.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(n<3) 
    {
        cout << "Array not has 3 elements";
        return 0;
    }
    int sum = 0;
    for (int i=0;i<3;i++) 
    {
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
===========================================================================================================================================
q.5.Write a program to check if each element in the array is equal to the sum of the factorials of its digits.



===========================================================================================================================================
q.6.Write a program to find the sum of the first and last digit of each element in the array.

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={123,456,789,10,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++) 
    {
        int num = arr[i];
        int last=num%10;
        int first=num;
        while (first>=10) 
        {
            first/=10;
        }
        int sum=first+last;
        cout<<sum<<"\n";
    }
    return 0;
}
===========================================================================================================================================
q.7.Write a program to check if each element in the array is a Kaprekar number.
===========================================================================================================================================
q.8.Write a program to find the total number of divisors of each element in the array.


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,18,25,7,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++) 
    {
        int num=arr[i];
        int divisor=0;
        for(int j=1;j<=num;j++) 
        {
            if(num%j==0) 
            {
                divisor++;
            }
        }
        cout<<divisor<<"\n";
    }
    return 0;
}
===========================================================================================================================================
q.9.Write a program to check if the square of each element in the array is a palindrome.


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={11,4,7,22};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) 
    {
        int square=arr[i]*arr[i],num=square,rev=0;
        while(num>0) 
        {
            rev=rev*10+num%10;
            num/=10;
        }
        cout<<(square==rev?"Palindrome":"Not Palindrome")<<"\n";
    }
    return 0;
}
===========================================================================================================================================
q.10.Write a program to replace each element in the array with its cube root (if it’s a perfect cube).


#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int arr[]={1,8,15,27,64,100};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++) 
    {
        int num=arr[i];
        int root=0;
        while(root*root*root<num) 
        {
            root++;
        }
        if(root*root*root==num) 
        { 
            arr[i]=root;
        }
    }
    for(int i=0;i<n;i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
===========================================================================================================================================
q.11.Write a program to find the sum of all prime numbers in the array.


#include <bits/stdc++.h>
using namespace std;
bool is_prime(int num) 
{
    if(num<=1) return false;
    for(int i=2;i*i<=num;i++) 
    {
        if(num%i==0) return false;
    }
    return true;
}
int main() 
{
    int arr[]={2,4,5,6,7,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        if (is_prime(arr[i])) 
        {
            sum+=arr[i];
        }
    }
    cout<<sum<<"\n";
    return 0;
}
===========================================================================================================================================
q.12.Write a program to find the difference between the product and the sum of digits of each element in the array.
===========================================================================================================================================
q.13.Write a program to replace each element in the array with its digital root.
===========================================================================================================================================


// factorial



// #include<bits/stdc++.h>
// using namespace std;
// int factorial(int n)
// {
//     int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }
// int main()
// {
//     int arr[]={1,2,4,5,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int factarr[n];
//     for(int i=0;i<n;i++)
//     {
//         factarr[i]=factorial(arr[i]);
//     }
//     for(auto it:factarr)
//     {
//         cout<<it<<" ";
//     }
// }

// ================================================================
// primenumbers

#include<bits/stdc++.h>
using namespace std;

bool primenumbers(int n)
{
    if(n<=1)
     return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
         return false;
    }
    return true;
}
int main()
{
    int arr[]={1,2,3,4,5,6,78,17,19,26,63,9,88,56,23};
    int n =sizeof(arr)/sizeof(arr[0]);
    int res[n];
    for(int i=0;i<n;i++)
    {
        if(primenumbers(arr[i]))
            {
                res[i]=arr[i];
            }
    }
    for(auto it:res)
    {
       if(it!=0)
       {
           cout<<it<<" ";
       }
    }
}
===================================================================
#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int>& nums) {
    unordered_map<int, int> freq;
    int sum = 0;

    // Count the frequency of each element
    for (int num : nums) {
        freq[num]++;
    }

    // Add elements that appear only once
    for (auto& pair : freq) {
        if (pair.second == 1) {
            sum += pair.first;
        }
    }

    return sum;
}

int main() {
    vector<int> nums = {1, 2, 3, 2, 4, 5, 5, 6, 1};
    
    cout << "Sum of unique elements: " << sumOfUnique(nums) << endl;

    return 0;
}
==========================================================================
// Sum of Prime Factors
// For each number in the given array, calculate the sum of all its prime factors.
// Store these sums in a new array.
#include<bits/stdc++.h>
using namespace std;

bool primenum(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int primefactors(int n)
{
    vector<int>res ;
    for(int i=2;i<=n;i++)	
    {
        if(n%i==0)
        {
            if(primenum(i))
            {
                res.push_back(i);
            }
        }
    }
    int sum=0;
    for(int i=0;i<res.size();i++)
    {
        sum+=res[i];
    }
    return sum;
}
int main()
{
    vector<int>arr={20,25,15,10,50,55};
    //20 1 2 4 5 10 20  = 2+5 = 7
    vector<int>res_sum;
    for(auto it:arr)
    {
        res_sum.push_back(primefactors(it));
    }
    for(auto it:res_sum)
    {
        cout<<it<<" ";
    }
}
==============================================================================================
// Sum of Prime Factors
// For each number in the given array, calculate the sum of all its prime factors.
// Store these sums in a new array.
#include<bits/stdc++.h>
using namespace std;

bool primenum(int n)
{
    if(n<=1)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int nextprimenum(int n)
{
    if(primenum(n))
    {
        return n;
    }
    //left side
    int leftsol,rightsol;
    for(int i=n;i>=2;i--)
    {
           if(primenum(i))
           {
               leftsol = i;
               break;
           }
    }
    //right side
    for(int i=n+1;i<=2*n;i++)
    {
        if(primenum(i))
        {
            rightsol=i;
            break;
        }
    }
   return ((n-leftsol)>(rightsol-n))? rightsol:leftsol;
}

int main()
{
     vector<int>arr={12,13,20,29,90,45,60,66,55};
     vector<int>res;
     for(auto it:arr)
     {
         res.push_back(nextprimenum(it));
     }
     for(auto it:res)
     {
         cout<<it<<" ";
     }
   
}
===========================================================================

#include<bits/stdc++.h>
using namespace std;

int maxele(int arr[],int size)
{
    int max = arr[0];
    for(int i=1;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int digitcount(int n)
{
    int arr[10],l;
    while(n)
    {
        l = n%10;
        arr[l]++;
        n/=10;
    }
   
    return maxele(arr,10);
}


int main()
{
   int n=122233333;
   cout<<digitcount(n);
   
}
=============================================================================