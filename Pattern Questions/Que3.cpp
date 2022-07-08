/*
Printing following pattern
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1

sol:
if row+col=even then print 1
or print 0
*/

#include<iostream>
using namespace std;
int main(){
    int r;
    cin>>r;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < i+1 ; j++)
        {
            if ((i+j)%2==0  )
            {
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            
        }

        cout<<endl;
        
    }
    
}