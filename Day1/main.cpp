#include <iostream>

using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int a[n];
    for(int i{}; i<n; i++){
        cin>>a[i];
    }
    for(int i{}; i<n; i++){
        cout<<a[i]<<" ";
    }
    
	return 0;
}
