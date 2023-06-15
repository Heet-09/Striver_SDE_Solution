class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& matrix, int n) 
    { 
        // code here 
        // int count =0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<i;j++){
        //         swap(matrix[i][j],matrix[j][i]);
        //     }
        // }
        
        // for(int i=0;i<n/2;i++){
        //     for(int j=0;j<n;j++){
        //         // cout << matrix[i][j] << endl;
        //         swap(matrix[i][j],matrix[n-1-i][j]);
        //     }
        // }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        // for(int i=0;i<n/2;i++){
        //     for(int j=0;j<n;j++){
        //     swap(matrix[i][j],matrix[n-1-i][j]);
        //     }
        // }
        
        // for(int i=0;i<n;i++){
        //     reverse(matrix[i].begin(),matrix[i].end());
        // }
    } 
};