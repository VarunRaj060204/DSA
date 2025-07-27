class Solution {
  public:
    int reverseDigits(int n) {
        int reversed = 0;
        
        while (n > 0) {
            int digit = n % 10;              
            reversed = reversed * 10 + digit; 
            n = n / 10;                      
        }
        
        return reversed;
    }
};
