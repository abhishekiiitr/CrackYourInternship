class Solution {
public:
    int maxArea(vector<int>& height) {
        int res=0,area=0;
        int i=0,j=height.size()-1;
       
            while(j>i){ 
            res=min(height[i],height[j])*(j-i);
            if(height[i]>height[j]) j--;
            else i++;
                
            area=max(area,res);
            } 
       
       return area;
    }
};
