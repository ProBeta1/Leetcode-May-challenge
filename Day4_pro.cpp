class Solution {
public:
    int findComplement(int num) {
        long long int n = 1;
        while(n<=num)
            n*=2;
        n -=1;
        
        return n^num;
    }
};
