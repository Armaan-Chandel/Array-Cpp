#include <iostream>
using namespace std;

void swap(int arr[],int a,int b){
    int temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    //taking the array elements imput from user
    for(int i=1;i<=n;i++){
        cout<<"Add element "<<i<<": ";
        cin>>arr[i-1];
        cout<<endl;
    }
    //printing the original array
    cout<<"Orininal array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";;
    }
    //Reversing the array using a swap function
    for(int i=0;i<=(n/2)-1;i++){
            swap(arr,i,(n-1)-i);
    }
    //printing the reversed array
    cout<<endl;
    cout<<"Reversed Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
