#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void intersection(int *arr1, int *arr2, int n1, int n2)
{
    vector<int> arr;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                arr.push_back(arr1[i]);
                arr2[j]=-1;
                break;
            }
        }
    }
    for(auto i=arr.begin();i<arr.end();++i){
        cout<<*i<<" ";
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    intersection(arr1,arr2,n,m);
}
