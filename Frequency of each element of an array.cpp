#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    int freq[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[i]=-1;
    }
    
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                freq[j]=0;
            }
            
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        if(freq[i]!=0){
            cout<<"The Frequency of "<<arr[i]<<" is "<<freq[i]<<endl;
        }
    }
}
