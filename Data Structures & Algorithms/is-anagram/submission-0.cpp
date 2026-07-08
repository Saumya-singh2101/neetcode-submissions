class Solution {
public:
    bool isAnagram(string s, string t) {
        bool isan=true;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()){
            isan=false;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]){
                isan=false;
            }
        }
        return isan;
    }
};
