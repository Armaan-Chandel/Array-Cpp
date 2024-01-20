#include <iostream>
using namespace std;
void Merge(int arr[],int brr[],int n, int m){
    int crr[n+m];
    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(arr[i]<=brr[j]){
            crr[k++]=arr[i++];
        }
        else if(brr[j]<=arr[i]){
            crr[k++]=brr[j++];
        }
    }
    if(i<n){
        while(i<n){
            crr[k++]=arr[i++];
        }
    }
    else if(j<m){
        while(j<m){
            crr[k++]=brr[j++];
        }
    }
    cout<<"Merged array: ";
    for(int i=0;i<m+n;i++){
        cout<<crr[i]<<" ";
    }
}

int main(){
    int n,m;
    cout<<"Enter the size of first array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array in sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the size of the second array: ";
    cin>>m;
    int brr[m];
    cout<<"Enter the elements of the array in sorted order: ";
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    Merge(arr,brr,n,m);
}
