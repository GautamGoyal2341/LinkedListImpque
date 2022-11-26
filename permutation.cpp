{
	public:
		vector<string>find_permutation(string s)
		{
		    int n = s.size();
		    vector<string> res;
		    
		    solve(0,n,s,res);
		    set<string> se(res.begin(), res.end());
            res.assign(se.begin(), se.end());
		    return res;
		}
		
		void solve(int in, int n,string s, vector<string> &res){
		    if(in == n){
		        res.push_back(s);
		        return;
		    }
		        
		    
		    
		    solve(in+1,n,s,res);
		    for(int i=in+1;i<n;i++){
		        if(s[i]!=s[in]){
		        char t = s[i];
		        s[i] = s[in];
		        s[in] = t;
		        
		        solve(in+1,n,s,res);
		        
		        t = s[i];
		        s[i] = s[in];
		        s[in] = t;
		        }
		    }
		}
};
