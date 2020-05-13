class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int l=0, r=nums.size(), mid;		//Runtime was 12ms
        if(r == 1)				//Used Binary Searching
            return nums[0];
        while(l <= r){
            mid = l + (r - l)/2;
            if(l == r)  return nums[l];
            
            if(mid%2 == 0){
                if(nums[mid] == nums[mid + 1])
                    l = mid + 2;
                else
                    r = mid; 
            }
            else{
                if(nums[mid] == nums[mid - 1])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        
        return -1;
    }
};



Another Approach
int l = 0, h = nums.size()- 1;
        while (l < h) {
            int mid = l + (h - l)/2;
            if (nums[mid] == nums[mid ^ 1])     //Another technique using XOR with 1
                l = mid + 1;        
            else
                h = mid;
        }
        return nums[l];
    }
