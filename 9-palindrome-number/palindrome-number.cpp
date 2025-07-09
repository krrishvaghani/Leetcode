class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int original = x;
        long reversenumber =0;
        while(x!=0){
            int ld = x%10;
            x = x/10;
            reversenumber = (reversenumber*10) + ld;
        }
     return reversenumber == original;
    }
};