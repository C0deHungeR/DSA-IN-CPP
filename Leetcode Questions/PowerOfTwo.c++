class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i = 0 ; pow(2,i) <= n ; i++){

            if(pow(2,i) == n){
                return true ;
                break ;
            }

        }
        return false ;
        
    }
};