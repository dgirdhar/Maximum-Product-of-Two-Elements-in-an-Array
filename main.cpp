class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int min = 0;
        int max = 0;
        
        if (nums[0] > nums[1]) {
            max = nums[0];
            min = nums[1];
        }
        else {
            max = nums[1];
            min = nums[0];            
        }
        
        for (int i = 2; i < nums.size(); ++i) {
            if (nums[i] > min) {
                if (nums[i] > max) {
                    min = max;
                    max = nums[i];
                }
                else {
                    min = nums[i];
                }
            }
        }
        
        return (min - 1)*(max - 1);
    }
};
