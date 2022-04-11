class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
    
     vector<string> sol(min(numRows,int(s.size())));
     int curr = 0;
     bool goingDown = false;
    for(int i = 0;i<s.length();i++){
        sol[curr] += s[i];
        if(curr == 0 || curr == numRows-1) goingDown = !goingDown;
        curr += goingDown ? 1 : -1;
    }
        string res = "";
        for(string x : sol) res += x;
        return res;
    }
};
