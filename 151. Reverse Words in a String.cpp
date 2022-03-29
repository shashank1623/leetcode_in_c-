#include <string>
class Solution {
    private :
        string create(string s, string temp ,int start , int end)
        {
            
            for(int i=start;i<=end;i++)
            {
                char c=s[i];
                temp.push_back(c);
                                
            }
            
           return temp;
        }
public:
    string reverseWords(string s) {
        int len = s.size();
        
        string temp = "";
        int start = 0;
        int j;
        for(j=0;s[j]==' '||s[j]=='  ';j++);
        start=j;
        for(j=len-1;s[j]==' '||s[j]=='  ';j--);
        int count=j;
        for(int i=count;i>=start;i--)
        {
            if(s[i]==' '||s[i]=='    ')
            {
                temp = create(s , temp , i+1 , count);
                 temp.push_back(' ');
                int flag=0;
                while(s[i]==' '||s[i]=='    ')
                {
                    i--;
                    flag=1;
                }
                if(flag ==1)
                {
                    count = i;
                }
                else
                count = i-1;
            }

            if(i==start)
                {
                    temp = create(s , temp , i , count);
                }
        }
        
        return temp;
    }
};
