class Solution {
public:
    int hammingWeight(uint32_t n) {

        uint32_t mask = 0x1;
        int c = 0;
        
        for (int i=0 ; i < 32 ; i++)
        { 
            if((mask & n) != 0)
            c++;
            mask = mask<<1;

        }
      return c;
    }
};
