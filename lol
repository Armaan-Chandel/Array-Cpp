class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int l=0;
        int r=1;
        int dm=1;
        int im=1;
        while(r<nums.size()){
           if(nums[r]>nums[r-1]){
            if(r==nums.size()-1){
                dm=max(im,(r-l)+1);
            }
            r++;
           }
           else{
            im=max(im,(r-l));
            l=r;
            r++;
           }
        }
        l=0;
        r=1;
        while(r!=nums.size()){
           if(nums[r]<nums[r-1]){
            if(r==nums.size()-1){
                dm=max(dm,((r-l)+1));
            }
            r++;
           }
           else {
            dm=max(dm,(r-l));
            l=r;
            r++;
           }
        }
        return max(im,dm);
    }
};
