#include <iostream>

using namespace std;

int main() {
	// your code goes here
    int n;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    int a[n];
    for(int i; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter index at which number should be inserted"<<endl;
    int num;
    cin>>num;
    n=n+1;
    for(int i=n-2; i>=num; i--){
        a[i+1]=a[i];
    }
    cout<<"Enter number to be inserted"<<endl;
    cin>>a[num];
    for(int i{}; i<n; i++){
        cout<<a[i]<<" ";
    }
    
	return 0;
}
