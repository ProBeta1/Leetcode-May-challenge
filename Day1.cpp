// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long int beg,last,mid;
        beg = 1 , last = n;
        long int pos = 1;
        while(beg<=last){
            mid = (last+beg)/2;
            bool x = isBadVersion(mid);
            if(x){
                pos = mid;
                last = mid-1;
            }
            else
                beg = mid+1;
        }
        return pos;
    }
};
