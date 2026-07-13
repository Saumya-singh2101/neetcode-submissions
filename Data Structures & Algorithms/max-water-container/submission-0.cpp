class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right=heights.size()-1;
        int area=0;

       while(left<right){
        int ans=min(heights[left],heights[right])*(right-left);
        area=max(area,ans);
       if(heights[left]<heights[right]){
        left++;
       }
       else{
        right--;
       }
       }
       return area;
    }
};
