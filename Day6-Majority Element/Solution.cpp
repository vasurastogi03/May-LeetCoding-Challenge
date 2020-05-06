class Solution {
public:
    int majorityElement(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        // int n = nums.size();                  //Hashing Method
        // unordered_map<int , int> um;
        
        // for(auto x : nums)                    //Runtime of 40ms
        //     um[x]++;
        
        // for(auto x : um)
        //     if(x.second>n/2)
        //         return x.first;
        // return 0;

        int num = 0, counter = 0;
        for(int i = 0; i < nums.size(); i++){
            if(counter == 0)
                num = nums[i];
            counter += num == nums[i] ? 1 : -1;   //This code gave a runtime of 28ms. It is based on the fact
        }                                         // that a majority element always exists
        return num;
    }
};