class Solution {
  public:
    int firstOccurence(string& txt, string& pat) {
        for(int i = 0; i + pat.size() <= txt.size(); i++) {
            int j = 0;

            while(j < pat.size() && txt[i + j] == pat[j])
                j++;

            if(j == pat.size())
                return i;
        }

        return -1;
    }
};