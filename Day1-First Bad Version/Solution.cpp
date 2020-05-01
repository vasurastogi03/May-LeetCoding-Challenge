// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       int lw=1, up=n;
        
        while(lw<up){
            int mid = lw + (up - lw) / 2;  //to avoid (up + lw) overflow
            
            if(!isBadVersion(mid)){
               lw = mid + 1;
            }
            else{
                up = mid;
            }
        }
        return lw; 
    }
};
