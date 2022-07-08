/*
Printing the following pattern

    * 
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include <iostream>
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
        for (int k = 0; k < i+1; k++)
        {
            cout<<"* ";
        }
        
        cout<<endl;
        spaces--;
    }

    spaces=1;
    for (int i = r-1; i >0; i--)
    {
        for (int j = 0; j <spaces; j++)
        {
            cout<<" ";
        }
        for(int k=0;k<i;k++){
            cout<<"* ";
        }
        cout<<endl;
        spaces++;
        
    }
    
    return 0;
}