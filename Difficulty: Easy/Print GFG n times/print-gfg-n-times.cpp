class Solution {
  public:
    void printGfg(int N) {
        
        printGfgHelper(1,N);
        
    }
    private:
        void printGfgHelper(int i , int N){
            if(i>N){
                return;
            }else{
                cout<<"GFG"<<" ";
                printGfgHelper(i+1,N);
            }
        }
};
