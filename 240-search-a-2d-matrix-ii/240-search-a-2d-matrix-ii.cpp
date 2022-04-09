class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row =matrix.size();
        int col=matrix[0].size();
        
        int rowstart=0;
        int colstart=col-1;
        
        while(rowstart<row&&colstart>=0){
        
        int element =matrix[rowstart][colstart];
         
        if(element==target)
        {
            return true;
        }    
        if(element<target){
            
            rowstart++;
        }
        else
        {
            colstart--;
        }
        }
        return 0;
    }
};