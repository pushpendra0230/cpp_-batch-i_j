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