/*class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
    int evenlyDivides=0;
    
    while(n>0){
        int lastDigits = n % 10;
        
        evenlyDivides=evenlyDivides+1;
        
        n=n/10;
        
    }
        return evenlyDivides;
    }
};*/

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int original = n;
        int count = 0;
        
        while(n > 0) {
            int digit = n % 10;
            
            // Ignore 0, and check if digit divides original
            if(digit != 0 && original % digit == 0) {
                count++;
            }
            
            n = n / 10;
        }
        
        return count;
    }
};
