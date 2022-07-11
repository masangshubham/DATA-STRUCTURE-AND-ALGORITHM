//GFG Majority element

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(int a[], int size)
    {
        
        int el=0;
    int count=0;
    for(int i=0;i<size;i++){
        if(count==0) el=a[i];
        if(el==a[i]) count++;
        else count--;
    }
    int count1=0;
    for(int i=0;i<size;i++){
        if(el==a[i]) count1++;
    }
    
    if(count1>size/2) return el;
    else return -1;
        
    }
};
int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
