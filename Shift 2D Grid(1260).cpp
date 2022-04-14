class Solution {
private:
    int index1d(int presentrow,int presentcolm,int colm)
    {
        int index=presentrow*colm+presentcolm;
        return index;
    }
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int colm=grid[0].size();
        int row=grid.size();
        vector<vector<int>> ans(row, vector<int>(colm,0));
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<colm;j++)
            {
                int newindex=index1d(i,j,colm);
                newindex=(newindex+k)%(row*colm);
                int newrow=newindex/colm,newcolm=newindex%colm;
                ans[newrow][newcolm]=grid[i][j];   
                newindex=0;
            }
        }
        return ans;       
    }
};
