class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        int top = 0;
        int bottom = rows - 1;
        int mid_row;

        int left;
        int right;

        while(top <= bottom){
            mid_row = (top + bottom) / 2;
            if( target > matrix[mid_row][cols - 1]){
                top = mid_row + 1;
            } else if(target < matrix[mid_row][0]){
                bottom = mid_row - 1;
            } else {
                break;
            }
        }

        if(!(top <= bottom)){ return false; }

        left = 0;
        right = cols - 1;
        
        while(left <= right){
            int mid = (left + right) / 2;

            if(target > matrix[mid_row][mid]){
                left = mid + 1;
            } else if (target < matrix[mid_row][mid]){
                right =  mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
};
