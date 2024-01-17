#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int ans;
       vector<int> lol;
       for(int i=0;i<n;i++){
           
           if(nums[i]==nums[i+1]){
               lol.push_back(nums[i]);
           }
       }
    return lol;}
};
int main(){
    Solution sc;
    int n;
    cin>>n;
    vector<int> nums;
    
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        nums.push_back(in);      
    }
    vector<int> lol=sc.findDuplicates(nums);
    for(auto i=lol.begin();i<lol.end();++i){
        cout<<*i<<" ";
    }
    
    
}
