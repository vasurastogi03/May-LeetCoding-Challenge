// class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& A) {
//         if(A.size() == 0) return 0;
//         int sum = A[0];
//         int maxSoFar = A[0];
//         int maxTotal = A[0];
//         int minSoFar = A[0];
//         int minTotal = A[0];
//         for(int i = 1; i< A.size();i++){
//             maxSoFar = max(A[i], maxSoFar + A[i]);
//             maxTotal = max(maxTotal, maxSoFar);
            
//             minSoFar = min(A[i], minSoFar + A[i]);
//             minTotal = min(minTotal, minSoFar);
//             sum += A[i];

//         }
//         if(sum == minTotal) return maxTotal;
//         return max(sum - minTotal, maxTotal);
//     }
// };

static const auto io_sync_off = [](){
     ios::sync_with_stdio(false);
     cin.tie(nullptr);
     return nullptr;
}();
class Solution {
public:
    int solve(vector<int> &v){
        int csum = v[0];
        int ans= v[0];
        for(int i=1;i<v.size();i++){
            csum = max(csum+v[i],v[i]);
            ans=max(ans,csum);
        }
        return ans;
    }
    int maxSubarraySumCircular(vector<int>& A) {
         int a1 = solve(A);
        //  cout<<a1;
        int sum = 0;
        int cnt = 0;
         for(int i=0;i<A.size();i++){
             sum+=A[i];
             if(A[i]<0)cnt++;
             A[i]=(-1)*A[i];
         }
        if(cnt==A.size()) return a1;
        int a2 = solve(A);
        return max(a1,a2+sum);
    }
};
