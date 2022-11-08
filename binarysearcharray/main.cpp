#include <iostream>
#include <cmath>
using namespace std;

int binary_search(int arr[], int x, int low, int high){
    while(low<=high){
        int mid=floor((low+high)/2);
        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
            low=mid+1;
        }
        else high=mid-1;
    }
}

int main() {
	// your code goes here
    int n, x;
    cout<<"Number of elements in array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i{}; i<n; i++){
        cin>>a[i];
    }
    int low=0;
    int high=n-1;
    cout<<"Enter number to be searched"<<endl;
    cin>>x;
    cout<<x<<" is present at index: "<< binary_search(a, x, low, high)<<endl;
	return 0;
}
