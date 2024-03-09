class Solution{
public:
	string removeDuplicates(string str) {
	unordered_map<char,int>mp;
	string res="";
	for(int i=0;i<str.size();i++){
	    mp[str[i]]++;
	    if(mp[str[i]]==1){
	        res.push_back(str[i]);
	    }
	}
	return res;
	}
