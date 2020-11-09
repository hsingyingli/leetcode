class Solution {
public:
    int reverse(int x) {
        long int result = 0;
        long tmp = x;
        int sign = 0;
        
        if(tmp < 0){
            tmp *= (-1);
            sign = 1;
        }
        while((tmp / 10) != 0){
            result = (result + (tmp%10)) * 10 ;
            tmp /= 10;
        }
        result += tmp;
        if(result > pow(2,31))
            result = 0;
        
        return sign? result*(-1) : result;
    }
};