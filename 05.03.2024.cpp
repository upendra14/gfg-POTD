class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
      int maxi=0;
        vector<int>v={0};
        
        for(int i=1; i<n; i++){
            int back=v.size()-1;
            while(v.size() && a[i]>=a[v[back]] && back>=0){
                maxi=max(maxi, i-v[back]);
                back--;
            }
            back=v.size()-1;
            if(!v.size() || a[i]<a[v[back]]){
                v.push_back(i);
            }
        }
        return maxi; 
    }
};
