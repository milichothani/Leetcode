class Solution {
public:
    bool isMatch(string s, string p) {
        return match(s, p, 0, 0);
    }
    bool match(string &s, string &p, int i, int j){
        if(j==p.size())
            return i==s.size();

        bool currentMatch = (i<s.size() && (s[i] == p[j] || p[j] == '.'));
        if(j+1 < p.size() && p[j+1] == '*'){
            return match(s, p, i, j+2) || (currentMatch && match(s, p, i+1, j));
        }
        else{
            return currentMatch && match(s, p, i+1, j+1);
        }
    }
};
