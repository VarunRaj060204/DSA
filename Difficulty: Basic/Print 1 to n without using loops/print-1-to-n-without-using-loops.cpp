class Solution {
  public:
    void printTillN(int n) {
        
        printTillNHelper(1,n);
        
    }
    private:
        void printTillNHelper(int i ,int n){
            
            if(i>n){
                return;
            }else{
                cout<<i<<" ";
                printTillNHelper(i+1,n);
            }
        }
};