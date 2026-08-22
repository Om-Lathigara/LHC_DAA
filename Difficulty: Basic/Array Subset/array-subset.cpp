class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        int freq[1000001] = {0};

        for(int i = 0; i < a.size(); i++) {
            freq[a[i]]++;
        }

        for(int i = 0; i < b.size(); i++) {
            if(freq[b[i]] == 0)
                return false;

            freq[b[i]]--;
        }

        return true;
    }
};