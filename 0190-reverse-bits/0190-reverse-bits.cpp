class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans;
        int i = 0;
        while(n != 0 ){
            int val  = n&1;
            cout<<val<<"\n";
            if (val) ans |= (1 << (31-i));
            n = n>>1;
            i++;
        }
        return ans;
    }
};