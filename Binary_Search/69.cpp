// https://leetcode.com/problems/sqrtx/description/

class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x;
        if(x==1)return 1;
        while(left+1<right){
            int mid=left+(right-left)/2;
            if(mid<=(x/mid))left=mid;
            else right=mid;
        }
        return left;
    }
};