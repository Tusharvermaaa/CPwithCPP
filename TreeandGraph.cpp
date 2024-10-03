// // program to create a graph using adjacency list and implementing dfs to trverse the graph/tree
// #include <bits/stdc++.h>
// using namespace std;
// int visited[int(1e5)];
// int n;
//   vector<int> v[int(1e5)];
// void dfs(int parent)
// {
//     if(visited[parent]>0) return;
//     visited[parent]=1;
//     for(auto &child: v[parent] )
//     {
     
//         dfs(child);
//     } cout<<endl;
// }
// int main() {
  
//     cout<<"entrr the number of nodes\n";
//     cin>>n;
  
//     cout<<"entrr the number of pairs\n";
//     int k;
//     cin>>k;
//     for(int i=0;i<k;i++)
//     {
//          cout<<"enter the connected values a,b";
//         int a,b;
//         cin>>a>>b;
//         v[a].push_back(b);
//         v[b].push_back(a);
//     }
//     while(1)
//    {  cout<<"enter the value whose child you want\n";
//     int h;
//     cin>>h;
//     for(auto &pr: v[h])
//     {
//         cout<<pr<<" ";
//     }
//      cout<<"continue kare\n";
//      cin>>h;
//      if(h==0) break;
//     }
//     dfs(1);

//     return 0;
// }



// #include<bits/stdc++.h>
// //printing the leaf node  of tree 
// using namespace std;
// vector<int> g[int(1e5)];
// int visited[int(1e5)]={0};// intialize to zero
// void dfs(int parent)
// {
//     if(visited[parent]==1){ return;}
//     if(g[parent].size()==1||g[parent].size()==0) 
//     // if the connection of node is only one then it is said to be leaf node and this is the only node of then then it is also known as leaf node
//     {
//         cout<<parent<<" ";
//     }
//     visited[parent]=1;
//     for(auto &child: g[parent])
//     {
//         dfs(child);
//     }
    
// }
// int main()
// {
//     int n, m;
//     cin>>n>>m;
//     for(int i=1;i<=n-1;i++)
//     {
//         int a,b;
//         cin>>a>>b;
//         g[a].push_back(b);
//         g[b].push_back(a);
        
//     }
//     dfs(1);
    
//     return 0;
// }

// // 6 6
// // 1 2
// // 1 3
// // 1 4
// // 2 5 
// // 5 6
