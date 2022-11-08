#include <iostream>

using namespace std;

int main() {
	// your code goes here
    int n, t;
    cout<<"Number of elements in array"<<endl;
    cin>>n;
    int a[n];
    for(int i{}; i<n; i++){
        cin>>a[i];
    } 
    cout<<"Enter number to be deleted"<<endl;
    int num;
    cin>>num;
    for(int i{}; i<n; i++){
        if(a[i]==num){
            t=i;
        }
    }
    for(int i{t}; i<n; i++){
        a[i]=a[i+1];
    }
    n=n-1;
    for(int i{}; i<n; i++){
        cout<<a[i]<<" ";
    }
	return 0;
}
