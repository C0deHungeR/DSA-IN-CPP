class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int column = matrix[0].size();

        int start = 0 ;
        int end = row*column - 1;
        int mid = start + (end - start)/2 ;
        while(start <= end){

            if(matrix[mid/column][mid%column] == target){
                return true ;
            }
            if(matrix[mid/column][mid%column] > target){
                end = mid -1 ;
            }
            if(matrix[mid/column][mid%column] < target){
                start = mid+1;
            }
            mid = start + (end - start)/2 ;
            
        }
        return false ;
        
    }
};