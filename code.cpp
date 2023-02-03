
#include <iostream>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        if (s.length() > t.length())
            return false;

        int s_size = 0;
        for (int i=0; i<t.length(); i++)
        {
            if (t[i] == s[s_size])
                s_size += 1;
        }

        if (s_size == s.length())
            return true;
        else
            return false;
        
    }
};

int main()
{
    string text, sub;
    cout << "Enter the sub string: ";
    cin >> sub;
    cout << "Enter the text string: ";
    cin >> text;
    
    Solution s1;
    if(s1.isSubsequence(sub, text)==1) cout << "True";
    else cout << "False";
    return 0;
}
