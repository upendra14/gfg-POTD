class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
       int n = mat.size(), mode = 0, it = 0, lower = 0; 
        vector<int>res;

        for (int t = 0; t < (2 * n - 1); t++) { 
            int t1 = t; 
            if (t1 >= n) { 
                mode++; 
                t1 = n - 1; 
                it--; 
                lower++; 
            } 
            else { 
                lower = 0; 
                it++; 
            } 
            for (int i = t1; i >= lower; i--) { 
                if ((t1 + mode) % 2 == 0) { 
                    res.push_back(mat[i][t1 + lower - i]);
                } 
                else { 
                    res.push_back(mat[t1 + lower - i][i]);
                } 
            } 
        } 
        return res;
    }
};
