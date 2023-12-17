class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        /*
        all rows are sorted 
        traverse all rows one by one
        compair the first elemengt and last element of the row 
        use row major  

        row index in 2d = mid / col;
        col index in 2d = mid % col;
        then exicute the binary search here 
        
        time complexity == O(log(m * n))
        space complexity == O(1)
        */ 
        int n = matrix .size();   //no of rows
        int m = matrix[0].size(); //no of colms
        int rowindex,colmindex,start=0,end=n*m-1,mid;

        while(start<=end)
        {
            mid= start+(end-start)/2;
            rowindex=mid/m;
            colmindex=mid%m;

            if(matrix[rowindex][colmindex]==target)
            return 1;

            else if(matrix[rowindex][colmindex]>target)
            end=mid-1;
            else
            start= mid+1;
        }
        return 0 ;
    }
};