class Solution {
  public:
    void printNos(int N) {
        
        printNosHelper(N);
        
    }
    private:
        void printNosHelper(int i){
            if(i<1){
                return;
            }else{
                cout<<i<<" ";
                printNosHelper(i-1);
            }
        }
};