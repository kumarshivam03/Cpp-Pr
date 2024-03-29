class Solution {//love babbar
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
       int i,srow=0,scol=0,erow=row-1,ecol=col-1;
       vector<int>ans;
        int count=0,total;
        total=row*col;
       while(count < total){
           for(i=scol;count<total && i<=ecol;i++){
               ans.push_back(matrix[srow][i]);
               count++;
           }
           srow++;
           for(i=srow;count<total &&i<=erow;i++){
               ans.push_back(matrix[i][ecol]);
               count++;
           }
           ecol--;
           for(i=ecol; count<total &&i>=scol;i--){
               ans.push_back(matrix[erow][i]);
               count++;
           }
           erow--;
           for(i=erow; count<total &&i>=srow;i--){
               ans.push_back(matrix[i][scol]);
               count++;
           }
           scol++;
        }
        return ans;
    }   
};