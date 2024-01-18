#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elments: ";
    cin>>n;
    vector<int> arr;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int j;
        cin>>j;
        arr.push_back(j);
    }
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
            
        }
        else if(arr[i]%2!=0){
            odd++;
        }
    }
    cout<<"The number of odd elements is: "<<odd<<endl;
    cout<<"The number of even elements is: "<<even;
    
}
