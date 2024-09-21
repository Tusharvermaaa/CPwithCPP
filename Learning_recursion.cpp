// printing subsequences whose sum is k
//  printing all the subsequences of an array
// note- subarray id different from subsequence
//. sub array is contigious
// subsequence can be non contigious but in a sequence as given;

// #include <bits/stdc++.h>
// using namespace std;
// void print(int arr[],int i,int n,vector<int> v)
// {
//     if(i>=n )
//     {
//           for(auto &pr: v) {cout<<pr<<" ";} cout<<endl;
//         return;
//     }
//     v.push_back(arr[i]);
//     print(arr,i+1,n,v);
//     v.pop_back();
//     print(arr,i+1,n,v);

// }
// int main() {
//     int arr[]={1,2,4,2,5,6,7};
//     int n=7;
//     vector<int > v;
//     print(arr,0,n,v);

//     return 0;
// }

// printing all the sub sequences with sum k
// printing subsequences whose sum is k

// #include <bits/stdc++.h>
// using namespace std;
// int k=10;
// void print(int arr[],int i,int n,vector<int> v)
// {
//     if(i>=n )
//     {
//         int sum=0;
//         for(auto &pr: v) {sum+=pr;}
//         if(sum==k)
//       {
//           for(auto &pr: v) {cout<<pr<<" ";} cout<<endl;
//       }
//         return;
//     }
//     v.push_back(arr[i]);
//     sum+=arr[i];
//     print(arr,i+1,n,v);
//     sum-=v[v.size()-1];
//     v.pop_back();
//     print(arr,i+1,n,v);

// }
// int main() {
//     // Write C++ code here
//     int arr[]={1,2,4,2,5,6,7};
//     int n=7;
//     vector<int > v;
//     print(arr,0,n,v);

//     return 0;
// }

/// more optimal approach
// printing all the sub sequences with sum k
// printing subsequences whose sum is k

///////////////////////////////////////////////////////////////
// it basically selects any elements from the whole provided list

// #include <bits/stdc++.h>
// using namespace std;
// int k=10;
// void print(int arr[],int i,int n,vector<int> v,int sum)
// {
//     if(i>=n )
//     {
//         if(sum==k)
//       {
//           cout<<v.size()<<endl;
//           for(auto &pr: v) {cout<<pr<<" ";} cout<<endl;
//       }
//         return;

//     }
//     v.push_back(arr[i]);
//     sum+=arr[i];
//     print(arr,i+1,n,v,sum);
//     sum-=v[v.size()-1];
//     v.pop_back();
//     print(arr,i+1,n,v,sum);

// }
// int main() {
//     // Write C++ code here
//     int arr[]={-1,2,0,5,6,7,0};
//     int n=7;
//     vector<int > v;
//     print(arr,0,n,v,0);

//     return 0;
// }

/////  all sub sequences for a given string

// #include<bits/stdc++.h>
// using namespace std;
// void print(string s,int i,int n,string s1)
// {
//     if(i>=n)
//     {
//         cout<<s1<<endl;
//         return;
//     }
//     char ch=s[i];
//     s1=s1+ ch;
//     print(s,i+1,n,s1);
//     s1.pop_back();
//     // s1.erase(s1.length()-1);

//     print(s,i+1,n,s1);
// }
// int main()
// {
//     string s;
//     s="hel";
//     print(s,0,s.length(),"");

//     return 0;
// }

////////////////reverse of array using recursion

// Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// void rec(int *a,int i,int j)
// {
//     if(i>=j) return;

// rec(a,i+1,j-1);
// int temp;
// temp=*(a+i);
// *(a+i)=*(a+j);
// *(a+j)=temp;

// }
// int pall(string s,int i,int j)
// {

// }
// int main() {
//     // Write C++ code here
//     // std::cout << "Try programiz.pro";
//     int a[5]={1,2,3,4,5};
//     // int a=[1,2,3,4,5];
//     rec(a,0,4);
//     for(int i=0;i<5;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     string s="10101";
//     cout<<pall(s,0,s.length()-1);

//     return 0;
// }
/// tryed to implement pallidrome functionality;

/////print only one subsequence of array whose sum is k
