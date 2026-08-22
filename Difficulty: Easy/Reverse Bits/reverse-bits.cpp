class Solution {
  public:
    int reverseBits(int n) {
        // code here
        int r=0;
        while(n){
            r<<=1;
            r |= (n&1);
            n>>=1;
            
        }
        
        return r;
    }
};