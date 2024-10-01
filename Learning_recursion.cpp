// // printing subsequences 
// //  printing all the subsequences of an array
// // note- subarray id different from subsequence
// // . sub array is contigious
// // subsequence can be non contigious but in a sequence as given;

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

// // printing all the sub sequences with sum k
// // printing subsequences whose sum is k

// #include <bits/stdc++.h>
// using namespace std;
// int k=10; // here is sum k
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
//     int arr[]={1,2,4,2,5,6,7};
//     int n=7;
//     vector<int > v;
//     print(arr,0,n,v);

//     return 0;
// }

// // / more optimal approach
// // printing all the sub sequences with sum k
// // printing subsequences whose sum is k
// /////////////////////////////////////////////////////////////
// // it basically selects any elements from the whole provided list

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

// // printing all subsequences whose sum is k and all the sub sequence are unique and sorted in order as given in array
// //if given array contain duplicatea elements
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
//         solve(nums,sum-nums[i],i+1,ds);   //here i+1 denotes that we have to take a single element onlu once in a sunarray
//         ds.pop_back();      
//     }
// }
// int main() {

//    vector<int> nums={1,1,2,3,4};
//     int sum=5;
//     solve(nums,sum,0,{});
//     return 0;
// }

// // generate all subset unique and use the element of array once to create a particular subset -
//   // note that elements in given array are or can be duplicates
// // question is from leetcode named subset 2
//  void solve (vector<int> &nums, int i , vector<int> v, vector<vector<int>> & vv)
//  {
//         vv.push_back(v);
//     for(int j=i;j<nums.size();j++)
//     {
//         if(j!=i && nums[j]==nums[j-1]) continue; // to maintain the unique-ness in case of duplicates of v which are going to vv
//         v.push_back(nums[j]);
//         solve(nums, j+1, v,vv);//here j+1 is  correct  as we will use a single element once for single sunset
//         v.pop_back();
//     }
//  }
//     vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//          vector<vector<int>> vv;
//         sort(nums.begin(),nums.end()); //array should be sorted
//         solve(nums, 0, {} ,vv);
//         return vv;
//     }
// };
    
// //     all subsequences whose sum is sum and all must be unique from gfg
// // all subsets are unique but we have ussed every element multiples times
// //elements of given array can have duplicates
// // question is combination sum from gfg

// void solve(vector<int> &nums,vector<int>& v, int sum, int ind,vector<vector<int>> & vv)
// {
//     if(sum==0){ vv.push_back(v); return;}
    
//     for(int i=ind ;i<nums.size();i++)
//     {
//         if(i>ind && nums[i]==nums[i-1]) continue; //to maintain the duplicates in vv
//         if(sum<nums[i]) break; // |^ thats why we are doing this 
//         v.push_back(nums[i]);
//         solve(nums, v, sum-nums[i], i, vv); /// here i is used as we can use  same element multiple times as wish 
//         v.pop_back();
//     }
// }
// vector<vector<int> > combinationSum(vector<int> &nums, int summ) {
        
        
//         sort(nums.begin(), nums.end());// array must be sorted in case of duplicates
        
//         vector<vector<int>> vv;
//         vector<int> v;
//         solve(nums,v,summ , 0,vv );
//         return vv;
        
//     }
// // creating all the permutations for given array note that all the elements of given array are distinct 
// // question is permutations from leetcode
// class Solution {
// public:
// void solve(vector<vector<int>>& vv, vector<int> &v, vector<int>&nums, map<int,int> &m)
// {
//     if(v.size()==nums.size())
//     {
//         vv.push_back(v); return;
//     }
//     for(int i=0;i<nums.size();i++)
//     {
//         if(!m[nums[i]])
//         {
//             v.push_back(nums[i]);
//             m[nums[i]]++;
//             solve(vv,v,nums,m);
//             v.pop_back();
//             m[nums[i]]--;

//         }
//     }
// }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int> > vv;
//         vector<int> v;
//         map<int,int> m;;
//         solve(vv,v,nums,m);
//         return vv;
        
//     }
// };

// ///  all sub sequences for a given string

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

// //////////////reverse of array using recursion

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
// / tryed to implement pallidrome functionality;

// ///print only one subsequence of array whose sum is k

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

// ///////

// // combinations of elements of a array this means that generating subsequences of array elements .. this one is done upper side

// #include <iostream>
// #include <vector>
// using namespace std;

// void generateCombinations(vector<char>& arr, string current, int index, vector<string>& result) {
//     if (index == arr.size()) {
//         result.push_back(current); // Base case: add current combination to results
//         return;
//     }
//     current += arr[index];
//     generateCombinations(arr, current, index + 1, result);
//     current.pop_back();
//     generateCombinations(arr, current, index + 1, result);
// }
// int main() {

//     vector<char> chars = {'a', 'b', 'c'};
//     vector<string> combinations;
//     generateCombinations(chars, "", 0, combinations);
//     for (string comb : combinations) {
//         cout << comb << endl;
//     }
//     return 0;
// }

// ////
// // total number of subsequences of array whose sum is k
// //as we dont need to print the unique ones so we can do this in simple way and count as sum reaches to desired sum
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
//     cout<<"total subsequences whose sum is "<< k<<" is "<<count(0,0,k,arr,n);
//     return 0;
// }

// // this is important one technique to print only one answer
// // to print only one subsequence of array whose sum is k
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

// // generate all  paranthesis which are valid
// // question is from leetcode - valid parenthesis

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
//       //note we are not poping back amy closing one we assume that it ends here
//     }
// }
// int main()
// {
//     vector<string > v;
//     generate("",2,2,2,v);
//     for(auto &pr:v) cout<<pr<<" ";
//     return 0;
// }

// ///optimal approach to genetate all possible permutations
// // how to generate all possible permutations of characrers in the array using recursion in cpp

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
// // // bruteforce method of making permutations of given array that uses extra space of map to check the absense or presence of array element
// #include <bits/stdc++.h>

// using namespace std;
// void permute(vector<int> &nums,vector<int> &v,vector<vector<int>> &vv, map<int,int> &m)
// {
//     if(nums.size()==v.size())
//     {
//         for(auto &pr: v)cout<<pr<<" "; cout<<endl; return;
//     }
//     for(int i=0;i<nums.size();i++)
//     {
//         if(m[nums[i]]==0)
//         {
//             v.push_back(nums[i]);
//             m[nums[i]]++;
//             permute(nums, v, vv,m);
//             v.pop_back();
//             m[nums[i]]--;
//         }
  
//     }
// }
// int main() {
  
//     vector<int> nums={1,2,3,4};
//     vector<int> v;
//     vector<vector<int>> vv;
//     map<int,int> m;
//     permute(nums, v,vv, m);

//     return 0;
// }


// //most efficinet method of doing this is 
// // in this method we are using swapping technique to make the permutations of given array 
// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>> vv;
// void solve(vector<int> &nums, int i)
// {
//       if(i==nums.size()){ 
//          vv.push_back(nums);
//         return;
           
//       }
//     for(int k=i;k<nums.size();k++)
//     {
//         swap(nums[i],nums[k]);
//         solve(nums, i+1);
//         swap(nums[i],nums[k]);
//     }
// }

// int main()
// {
//     vector<int> nums={1,2,3,4};
//     solve(nums,  0);
//     for(auto &pr: vv)
//     {
//         for(auto &p : pr)
//         {
//             cout<<p<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }
//🫡
// non recursive approach of josephus problem - gaddar problem 

// #include <bits/stdc++.h>
// using namespace std;
// int main() {
    
//     vector<int> arr;
//     for(int i=0;i<40;i++)
//     {
//         arr.push_back(i+1);
//     }
//     int k=7;
//     if(arr.size()==0) return 0;
//     auto it=arr.begin();
//     while(arr.size()!=1)
//     {
//         for(int p=1;p<=k-1;p++){
//               it++;
//             if(it == arr.end()) {
//                 it = arr.begin();
//             }
//         }
//         arr.erase(it);
//           if (it == arr.end()) {
//             it = arr.begin();
//         }
//     }
//     cout<<arr[0]<<endl;
//     return 0;
// }

//important question of recursion
/// recursive approach of josephus problem 

// #include<bits/stdc++.h>
// using namespace std;
// int ans;

// void solve(vector<int> & v,int k, int i,auto it)
// {
//     if(v.size()==1)
//     {
//         ans=v[0];
//         // cout<<"my ans is "<<ans<<" ";
//         return;
//     }
//     for(int j=1;j<=k;j++)
//     {
//          it++;
//         if(it==v.end()) it=v.begin();
//     }
//     v.erase(it);
//     if(it==v.end())
//     {
//         it=v.begin();
//     }
//     solve(v,k,i,it);
// }
// int main()
// {
//     vector<int> v;
//     for(int i=0;i<5;i++)
//     {
//         v.push_back(i+1);
//     }
//     int k=2;
//     solve(v,k-1,0,v.begin());
//     cout<<ans<<" ";
//     return 0;
    
// }
