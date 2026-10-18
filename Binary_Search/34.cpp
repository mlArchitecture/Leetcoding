
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto find_first=[&](){
            int left=-1,right=nums.size();
            while(left+1<right){
                int mid=left+(right-left)/2;
                if(nums[mid]<target)left=mid;
                else right=mid;
            }
            return right;
        };
        int right=find_first();
        if(right==nums.size() || nums[right]!=target)return {-1,-1};
        auto find_last=[&](){
            int left=-1,right=nums.size();
            while(left+1<right){
                int mid=left+(right-left)/2;
                if(nums[mid]<=target)left=mid;
                else right=mid;
            }
            return left;
        };
        int left=find_last();
        return {right,left};
    }
};