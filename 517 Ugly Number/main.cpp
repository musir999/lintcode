class Solution {
public:
    /**
     * @param num an integer
     * @return true if num is an ugly number or false
     */
    bool isUgly(int num) {
        // Write your code here
        
        // Write your code here
        if(num==0)
            return false;
        while(num%5==0)
            num/=5;
        while(num%3==0)
            num/=3;
        while(num%2==0)
            num/=2;
        if(num==1)
            return true;
        else
            return false;
        
    }
};