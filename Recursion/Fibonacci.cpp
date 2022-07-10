#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long int nthFibonacci(long long int n){
        if(n==0) return 0;
        if(n==1) return 1;
        
        return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
