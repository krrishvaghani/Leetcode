class Solution {
public:
    int trailingZeroes(int n) {
        int five=0,i=1;
        for(int i=5;i<=n;i+=5){
            int j=i;
            while(j%5==0) j/=5,five++;
        }
        return five;
    }
};