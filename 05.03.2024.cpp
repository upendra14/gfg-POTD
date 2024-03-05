class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
      int ans=0;
      int i=0,j=n-1;
      while(i<=j){
          if(a[i]<=a[j]){
             ans=max(ans,j-i);
            i++;
            j=n-1;
          }
          else if(a[i]>a[j]){
              j--;
          } 
      }
      return ans;
    }
};
