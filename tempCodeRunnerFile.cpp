#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s) {
 stack<char> c;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                c.push(s[i]);
            }
            else if (s[i] == ')')
            {
                if (!c.empty() && c.top() == '(')
                {

                    c.pop();
                }
                else
                {
                    return "NO";
                    
                }
            }
            else if (s[i] == '}')
            {
                if (!c.empty() && c.top() == '{')
                {

                    c.pop();
                }
                else
                {
                    return "NO";
                }
            }
            else if (s[i] == ']')
            {
                if (!c.empty() && c.top() == '[')
                {

                    c.pop();
                }
                else
                {
                    return "NO";
                    
                }
            }
        }
        if (c.empty())
        {
            return "YES";
        }
    }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        getline(cin,x);
        cout<<isBalanced(x)<<endl;
    } 
}