class Solution{
public:	
    static bool cmp(pair<char, int> &a, pair<char, int> &b){
        return a.second<b.second;
    }
	bool sameFreq(string s)
	{
	    // code here 
	    map<char , int> mp;
	    
	    for(int i=0;i<s.size();i++){
	        mp[s[i]]++;
	    }
	    if(mp.size()==1) return 1;
	    vector<pair<char, int>> freq;
	    for(auto x:mp){
	        freq.push_back({x.first, x.second});
	    }
	    sort(freq.begin(), freq.end(), cmp);
	    
	    int count = 0;
	    int index  = 0;
	    bool check = true;
	    for(int i=0;i<freq.size()-1;i++){
	        if(freq[i+1].second-freq[i].second>0){
	            if(i==freq.size()-2 && freq[i+1].second-freq[i].second==1){
	                if(count==0){
	                     return 1; 
	                }else{
	                    check = false;
	                    break;
	                }
	            }else{
	                if(freq[i].second==1){
	                    count++;
	                    continue;
	                }
	                check = false;
	                break;
	            }
	        }
	    }
	    if(check) return 1;
	    return 0;
	}
};
