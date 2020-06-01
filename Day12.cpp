class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int beg=0,last=n-1;
        while(beg<last){
            int mid = (beg+last)/2;
            if(nums[mid]==nums[mid^1]){
                beg=mid+1;
            }
            else
                last = mid;
        }
        return nums[beg];
    }
};
