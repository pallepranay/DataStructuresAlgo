class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> v1;
       
        int n=words.size();
        int len=words[0].length();
        int k=n*len;
       if(s.length()<k)return v1;
        unordered_map <string,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[words[i]]++;
        }
        for(int i=0;i<=s.length()-k;i++)
        {
            
            int count=n;
            int st=i;
            unordered_map<string,int> mp1;
            while(count)
            {
               
                string s1=s.substr(st,len);
                mp1[s1]++;
                if(mp.find(s1)!=mp.end() && mp[s1]>=mp1[s1])
                {
                    count--;
                    st+=len;
                }
                else break;
                
            }
            if(count==0)
            {
                v1.push_back(i);
                
            }
           
        }
        return v1;
    }
};
