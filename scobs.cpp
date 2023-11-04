#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    string str;
    cin >> str;
    bool boo = true;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (!s.empty() && ((str[i] == '}' && s.top() == '{') || (str[i] == ']' && s.top() == '[') || (str[i] == ')' && s.top() == '(')))
        {
            s.pop();
        }
        else
        {
            boo = false;
            break;
        }
    }
    if (boo && s.empty())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}