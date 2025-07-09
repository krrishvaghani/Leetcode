class Solution {
public:
    int reverse(int x) {
        long reversenumber = 0;
        while(x != 0){
            int ld = x % 10;
            x = x / 10;
            reversenumber = (reversenumber * 10) + ld;
        }

        // Check if result is outside 32-bit int range
        if (reversenumber < INT_MIN || reversenumber > INT_MAX)
            return 0;

        return (int)reversenumber;
    }
};
