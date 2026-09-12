class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int x: nums) {
            sum+=x;
        }
        return sum%k;
    }
};