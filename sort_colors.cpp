class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a =0 ,b=0,c=0;
        for(int i=0; i<nums.size();i++){
            if(nums[i]==0){
                nums[a]=0;
                a+=1;
                
            }
            else{ 
                if(nums[i]==1){ b+=1;}
             else{ c+=1;}
            }
        }
        for(int i=a ; i < nums.size() ;i++){
            if(i>=(a+b)) nums[i]=2;
            else nums[i]=1;
        }
        
    }
};
