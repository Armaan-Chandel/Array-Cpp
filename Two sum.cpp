#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elments: ";
    cin>>n;
    vector<int> arr;
    vector<vector<int>> b;
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=0;i<n;i++){
        if(arr[i]!=-1){
        for(int j=0;j<n;j++){
            if(arr[j]!=-1){
                
            
            if((arr[i]+arr[j])==num){
                vector<int> a;
                
                a.push_back(arr[i]);
                a.push_back(arr[j]);
                b.push_back(a);
                arr[j]=-1; 
            }
        }
        }
        }
    }
    for(auto i=b.begin();i!=b.end();i++){
        cout<<"(";
        for(auto j=i->begin();j!=i->end();j++){
        cout<<*j<<" ";
        }
        cout<<")"<<endl;
    }
}
