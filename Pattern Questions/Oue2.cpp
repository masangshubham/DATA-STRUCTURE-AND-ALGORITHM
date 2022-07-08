// Printing the following pattern
//     1 
//    1 2 
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5 

#include<iostream>
using namespace std;

int main(){
    int r;
    cin>>r;

    int spaces=r-1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
        spaces--;
        
        
    }
    
}