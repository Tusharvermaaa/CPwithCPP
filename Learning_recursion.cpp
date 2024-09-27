// printing subsequences 
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
//     print(arr,i+1,n,v);
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

//printing all subsequences whose sum is k and all the sub sequence are unique and sorted in order
// #include <bits/stdc++.h>
// using namespace std;
// void solve(vector<int>& nums, int sum ,int ind, vector<int> ds)
// {
//     if(sum==0)
//     {
//         for(int i=0;i<ds.size();i++)
//         {
//             cout<<ds[i]<<" ";
//         }cout<<endl;
//         return;
//     }
//     for(int i=ind;i<nums.size();i++)
//     {
//         if(ind<i && nums[i]==nums[i-1]) continue; //check for duplicasy in it 
//         if(nums[i]>sum) break; //if next element is greater than the required ,then we will brack. here sum is remaining required sum
//         ds.push_back(nums[i]);   //note dont write sum-=nums[i]; will not work ,dont know why
//         solve(nums,sum-nums[i],i+1,ds);
//         ds.pop_back();      
//     }
// }
// int main() {

//    vector<int> nums={1,1,2,3,4};
//     int sum=5;
//     solve(nums,sum,0,{});
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
//     s1=s1+ ch; //keep in mind
//     print(s,i+1,n,s1);
//     s1.pop_back(); // as string is a stl so we can use pop back
//     // s1.erase(s1.length()-1);  //this also works
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
// { }
// int main() {
//     // Write C++ code here
//     int a[5]={1,2,3,4,5};
//     // int a=[1,2,3,4,5];   // remember
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

// #include<bits/stdc++.h>
// using namespace std;
// void print(vector<int>a,int i,int n,vector<int>b)//recursivefunction
// {
//     if(i>=n)
//     {
//         for(auto &pr: b)
//         cout<<pr<<" "; cout<<endl;
//         return;
//     }
//     b.push_back(a[i]);
//     print(a,i+1,n,b);
//     b.pop_back();
//     print(a,i+1,n,b);
// }
// int main()
// {
//     vector<int> a={1,2,4};
//     int n=a.size();
//     vector<int> v;
//     print(a,0,n,v);
//     return 0;
// }

/////////

// combinations of elements of a array

// #include <iostream>
// #include <vector>
// using namespace std;

// void generateCombinations(vector<char>& arr, string current, int index, vector<string>& result) {

//     if (index == arr.size()) {
//         result.push_back(current); // Base case: add current combination to results
//         return;
//   }
//   current += arr[index];
//     generateCombinations(arr, current, index + 1, result);
//     current.pop_back();
//   generateCombinations(arr, current, index + 1, result);
// }
// int main() {

//     vector<char> chars = {'a', 'b', 'c'};

//     vector<string> combinations;

//     generateCombinations(chars, "", 0, combinations);
//  for (string comb : combinations) {

//         cout << comb << endl;

//     }
//     return 0;

// }

//////
// total number of subsequences of array whose sum is k
// #include<bits/stdc++.h>
// using namespace std;

// int count(int i,int s,int sum,int arr[],int n)
// {
//     if(i>=n)
//     {
//         if(sum==s) return 1;
//         else return 0;
//         return 0;
//     }
//     s+=arr[i];
//     int l=count(i+1,s,sum,arr,n);
//     s-=arr[i];
//     int r=count(i+1,s,sum,arr,n);
//     return l+r;

// }

// int main()
// {
//     int arr[]={1,2,3,1};
//     int n=4;
//     int k=3;
// cout<<"total subsequences whose sum is "<< k<<" is "<<count(0,0,k,arr,n);
//     return 0;
// }

// to print only one subsequence of array whose sum is k

// #include<bits/stdc++.h>
// using namespace std;

// bool count(int i,int s,int sum,int arr[],int n,vector<int> v)
// {
//     if(i>=n)
//     {
//         if(sum==s)
//         {
//             for(auto &pr:v) cout<<pr<<" "; cout<<endl;
//             return true;
//         }
//         else return false;
//         // return false;
//     }
//     v.push_back(arr[i]);
//     s+=arr[i];
//     if(count(i+1,s,sum,arr,n,v)==true) return true;
//     s-=arr[i];
//     v.pop_back();
//     if(count(i+1,s,sum,arr,n,v)==true ) return true;

// return false;
// }

// int main()
// {
//     int arr[]={2,3,1};
//     int n=3;
//     int k=3;
//     count(0,0,k,arr,n,{});
//     return 0;
// }

// generate all  paranthesis which are valid

// #include <bits/stdc++.h>
// using namespace std ;
// void generate(string s,int o,int c,int n,vector<string> &v)
// {
//     if(s.length()==2*n)
//     {
//         v.push_back(s);
//         return;
//     }
//     if(o>0)
//     {
//         s.push_back('(');
//          generate(s,o-1,c,n,v);
//       s.pop_back();
//     }

//      if(c>0)
//     {
//         if(o<c)
//         s.push_back(')');
//          generate(s,o,c-1,n,v);
//     }

// }
// int main()
// {
//     vector<string > v;
//     generate("",2,2,2,v);
//     for(auto &pr:v) cout<<pr<<" ";
//     return 0;

// }

// how to generate all possible permutations of characrers in the array using recursion in cpp

// #include <iostream>
// #include <vector>

// using namespace std;

// void permute(vector<char>& nums, int index, vector<vector<char>>& result) {
//     if (index == nums.size()) {
//         result.push_back(nums);
//         return;
//     }

//     for (int i = index; i < nums.size(); i++) {
//         swap(nums[index], nums[i]);
//         permute(nums, index + 1, result);
//         swap(nums[index], nums[i]); // Backtrack
//     }
// }

// int main() {
//     vector<char> nums = {'a', 'b', 'c'};
//     vector<vector<char>> result;
//     permute(nums, 0, result);

//     for (auto& permutation : result) {
//         for (char c : permutation) {
//             cout << c << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
