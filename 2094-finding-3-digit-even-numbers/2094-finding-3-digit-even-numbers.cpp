class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> set;
        int n=digits.size();

        for(int i=0;i<n;i++) {if(digits[i]==0) continue;
        for(int j=0;j<n;j++) {if(j==i) continue;
        for(int k=0;k<n;k++) {if(k==i || k==j) continue;

        if(digits[k]%2==0) {
            int num=digits[k]+digits[j]*10+digits[i]*100;
            set.insert(num);
           }
        }
        }
        }
        vector<int> ans;

        for (int num : set) {
            ans.push_back(num);
        }

        sort(ans.begin(), ans.end());

        return ans;
    }
};