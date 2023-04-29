/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int min(int a, int b){
        if(a<b)return a;
        else return b;
    }
    int maxArea(vector<int>& height) {
        int maxArea=0,area;
        int start=0,end=height.size()-1;
        while (start<end)
        {
            area=(end-start)*min(height[start],height[end]);
            if(area>maxArea) maxArea=area;
            if(height[start]<height[end])
                start++;
            else
                end--;
        }
        return maxArea;
        
    }
};
// @lc code=end

