#include <iostream>

using namespace std;

int main() {
	// your code goes here
    int n, num, count;
    cin>>n;
    cout<<"Number of elements in array: "<<endl;
    int a[n];
    for(int i{}; i<n; i++){
        cin>>a[i];
    }
    cout<<"Enter number to be searched"<<endl;
    cin>>num;
    for(int i{}; i<n; i++){
        if(a[i]==num){
            cout<<a[i]<<" is found at "<<i<<endl;
            count=1;
        }
    }
    if(count!=1){
        cout<<num;
        cout<<" is not present in the array"<<endl;
    }
    return 0;
}
