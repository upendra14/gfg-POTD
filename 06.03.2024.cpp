class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
        vector<int>ans;
         int n=text.size();
         int k=pattern.size();
        string res="";
       
       if (k > n) {
            return ans;
        }
        
       for(int i=0;i<k;i++){
           res+=text[i];
       }
       if(res==pattern){
           ans.push_back(1);
       }
       
      for(int i=k;i<n;i++){
         res = res.substr(1) + text[i];
          if(res==pattern) {
              ans.push_back(i-k+2);
             }
      }
       return ans;
    }
};
