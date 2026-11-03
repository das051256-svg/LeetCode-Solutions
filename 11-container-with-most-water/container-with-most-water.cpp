class Solution {
public:
    int maxArea(vector<int>& height) {
        int left= 0;
        int right= height.size()-1;
        int b= 0;
        int h= 0;
        int max_area= 0;
        while(left<right){
            b= right- left;
            h= min(height[left], height[right]);
            if(max_area<(b*h))
            max_area= b*h;
            if(height[left]>height[right])
            right--;
            else
            left++;
        }
        return max_area;
    }
};