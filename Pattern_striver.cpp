// strivers Patterns 
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // std::cout << "Try programiz.pro";
    //solutions is below the patterns ---->>>
    int n;
    cin>>n;

    cout<<"hello world";
    
//   n=  5;
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  *  * 
    
    //   for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {   
    //         cout<<" * ";
    //     }
    //     printf("\n");
    // }
    
    
//  n=   5
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" * ";
    //     }
    //     printf("\n");
    // }
    
//    n= 5
//  1 
//  1  2 
//  1  2  3 
//  1  2  3  4 
//  1  2  3  4  5 
    
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" "<<j+1<<" ";
    //     }
    //     printf("\n");
    // }
    
//    n= 5
//  1 
//  2  2 
//  3  3  3 
//  4  4  4  4 
//  5  5  5  5  5 
    
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" "<<i+1<<" ";
    //     }
    //     printf("\n");
    // }
    
// n=    5
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 
    
//      for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i<=j)
//             cout<<" * ";
//         }
//         printf("\n");
//     }
    
    
//  n=   5
//  1  2  3  4  5 
//  1  2  3  4 
//  1  2  3 
//  1  2 
//  1 
    
//      for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=n+1-i)
//             cout<<" "<<j<<" ";
//         }
//         printf("\n");
//     }
//    n= 5
//              *             
//           *  *  *          
//       *  *  *  *  *       
//     *  *  *  *  *  *  *    
//  *  *  *  *  *  *  *  *  * 
    
    //  for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=2*n-1;j++)
    //     {
    //         if(j>=n+1-i && j<=n+i-1)
    //         cout<<" * ";
    //         else cout<<"   "; 
    //     }
    //     printf("\n");
    // }


//n= 5
//  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  *    
//       *  *  *  *  *       
//           *  *  *          
//              *        

    //  for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=2*n-1;j++)
    //     {
    //         if(j>=i && j<=2*n-i)
    //         cout<<" * ";
    //         else cout<<"   ";
    //     }
    //     printf("\n");
    // } 
    
    
//    n= 6
//                 *                
//              *  *  *             
//           *  *  *  *  *          
//       *  *  *  *  *  *  *       
//     *  *  *  *  *  *  *  *  *    
//  *  *  *  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  *  *  *  * 
//     *  *  *  *  *  *  *  *  *    
//       *  *  *  *  *  *  *       
//           *  *  *  *  *          
//              *  *  *             
//                 *                
    
//       for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=2*n-1;j++)
//         {
//             if(j>=n+1-i && j<=n+i-1)
//             cout<<" * ";
//             else cout<<"   "; 
//         }
//         printf("\n");
//     }
//      for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=2*n-1;j++)
//         {
//             if(j>=i && j<=2*n-i)
//             cout<<" * ";
//             else cout<<"   ";
//         }
//         printf("\n");
//     } 
    
//     5
//  * 
//  *  * 
//  *  *  * 
//  *  *  *  * 
//  *  *  *  *  * 
//  *  *  *  * 
//  *  *  * 
//  *  * 
//  * 
    
    // for(int i=0;i<n-1;i++)
    // {
    //     for(int j=0;j<n-1;j++)
    //     {
    //         if(j<=i)
    //         cout<<" * ";
    //     }
    //     printf("\n");
    // }
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(i<=j)
    //         cout<<" * ";
    //     }
    //     printf("\n");
    // }
    
    
//     5
//  1 
//  0  1 
//  1  0  1 
//  0  1  0  1 
//  1  0  1  0  1 
//     int k=1;
//      for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(j<=i)
//             cout<<" "<<k<<" ";
//             if(k) k=0; else k=1;
//         }
//         printf("\n");
//     }

    
//     4
//  *                    * 
//  *  *              *  * 
//  *  *  *        *  *  * 
//  *  *  *  *  *  *  *  * 
    //  for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" * ";
    //         else cout<<"   ";
    //     }
        
    //     for(int k=1;k<=n;k++)
    //     {
    //         if(k>=n+1-i)
    //         cout<<" * ";
    //         else cout<<"   ";
    //     }
    //     printf("\n");
    // }
    
    
    
//     5
//  1                          1 
//  1  2                    2  1 
//  1  2  3              3  2  1 
//  1  2  3  4        4  3  2  1 
//  1  2  3  4  5  5  4  3  2  1
    // int l;
    
    //      for(int i=1;i<=n;i++)
    // {
    //     l=i;
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" "<<j<<" ";
    //         else cout<<"   ";
    //     }
        
    //     for(int k=1;k<=n;k++)
    //     {
    //         if(k>=n+1-i)
    //         cout<<" "<<l--<<" ";
    //         else cout<<"   ";
    //     }
    //     printf("\n");
    // }
    
    
//     6
//  1  
//  2   3  
//  4   5   6  
//  7   8   9   10  
//  11   12   13   14   15  
//  16   17   18   19   20   21
    // int k=1;
    
    //  for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<n;j++)
    //     {
    //         if(j<=i)
    //         cout<<" "<<k++<<"  ";
    //     }
    //     printf("\n");
    // }
    
    
//     5
//  A  
//  A   B  
//  A   B   C  
//  A   B   C   D  
//  A   B   C   D   E  
//     char ch='A';
//       for(int i=0;i<n;i++)
//     {
//         ch='A';
//         for(int j=0;j<n;j++)
//         {
//             if(j<=i)
//             cout<<" "<<char(ch +j)<<"  ";
//         }
//         printf("\n");
//     }
    
//     5
//  A  
//  B   B  
//  C   C   C  
//  D   D   D   D  
//  E   E   E   E   E 
    
//     char ch='A';
//   for(int i=0;i<n;i++)
//     { 
//         ch=char('A'+i);
//         for(int j=0;j<n;j++)
//         {
//             if(j<=i)
//             cout<<" "<<ch<<"  ";
//         }
//         printf("\n");
//     }



// 5
//  A   B   C   D   E  
//  B   C   D   E  
//  C   D   E  
//  D   E  
//  E  

// char ch='A';
//       for(int i=0;i<n;i++)
//     { 
//         ch='A';
//         for(int j=0;j<n;j++)
//         {
//             if(i<=j)
//             cout<<" "<<char(ch+j)<<"  ";
//         }
//         printf("\n");
//     }






    
    
//     5
//  *  *  *  *  * 
//  *           * 
//  *           * 
//  *           * 
//  *  *  *  *  * 
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(i==1||i==n||j==1||j==n) cout<<" * "; else cout<<"   ";
    //     }
    //     cout<<endl;
    // }
    
// 5
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
//       for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=n+1-i)
//             cout<<"*";
//             else cout<<" ";
//         }
        

//         for(int k=1;k<=n;k++)
//         {
//             if(k>=i) cout<<"*"; else cout<<" ";
//         }
//         printf("\n");
//     }
    
    
//       for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=i)
//             cout<<"*";
//             else cout<<" ";
//         }
        

//         for(int k=1;k<=n;k++)
//         {
//             if(k>=n+1-i) cout<<"*"; else cout<<" ";
//         }
//         printf("\n");
//     }


// 5
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ****   ***
// ***     **
// **       *

//       for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(j<=i)
//             cout<<"*";
//             else cout<<" ";
//         }
        

//         for(int k=1;k<=n;k++)
//         {
//             if(k>=n+1-i) cout<<"*"; else cout<<" ";
//         }
//         printf("\n");
//     }
    
    
//       for(int i=1;i<n;i++)
//     {
//         for(int j=1;j<n;j++)
//         {
//             if(j<=n+1-i)
//             cout<<"*";
//             else cout<<" ";
//         }
        
//     cout<<"  ";  //note-two spaces are here
//         for(int k=1;k<n;k++)
//         {
//             if(k>=i) cout<<"*"; else cout<<" ";
//         }
//         printf("\n");
//     }
    
    
    
    
    
    
    
    
    
    // Online C++ compiler to run C++ program online

// 9
// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 
// 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9 
// 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 
// 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9 
// 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 
// 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 2 2 2 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 3 3 3 3 3 4 5 6 7 8 9 
// 9 8 7 6 5 4 4 4 4 4 4 4 5 6 7 8 9 
// 9 8 7 6 5 5 5 5 5 5 5 5 5 6 7 8 9 
// 9 8 7 6 6 6 6 6 6 6 6 6 6 6 7 8 9 
// 9 8 7 7 7 7 7 7 7 7 7 7 7 7 7 8 9 
// 9 8 8 8 8 8 8 8 8 8 8 8 8 8 8 8 9 
// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 9 

    // int n;
    // cin>>n;
    for (int i=1; i<=2*n-1 ;i++)
    {
        for(int j=1;j<=2*n-1;j++)
        {
            cout<<n-min(i,min(j,min(2*n-i,2*n-j)))+1<<" ";
        }cout<<endl;
    }

    
    
    
    
    
    
    
    
    
    ///////////////////////////////////////////////
    //the below code is useless . ignore as git ignore 😌
        // char ch='A',ch2;
    // int k=0;
    //   for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         if(j>=n+1-i)
    //         cout<<"  "<<char(ch + k++)<<"  ";
    //         else cout<<"     ";
    //     }
    //      ch2='A';
    //       int k2=0;
    //     for(int j=1;j<=n-1;j++)
    //     {
    //         ch2='A';
    //         if(j<=i && j!=1)
    //         {
    //             cout<<"  "<<char(ch2 - k2++)<<"  ";  
    //         }
    //         else{
    //             cout<<"   ";
    //         }
    //     }
    //     ch2=char(ch2+i-1);
    //     printf("\n");
    // }
    
    return 0;
}