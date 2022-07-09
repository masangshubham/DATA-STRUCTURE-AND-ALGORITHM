#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0,j=n-1;i<n/2;i++,j--){
	        int temp=a[i];
	        a[i]=a[j];
	        a[j]=temp;
	    }
	    
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}