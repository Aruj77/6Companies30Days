class Solution
{
public:
    int evalRPN(vector<string> &v)
    {
        stack<int> x;
        for (string s : v)
        {
            int a, b;
            if (s == "+")
            {
                a = x.top();
                x.pop();
                b = x.top();
                x.pop();
                x.push(a + b);
            }
            else if (s == "-")
            {
                a = x.top();
                x.pop();
                b = x.top();
                x.pop();
                x.push(b - a);
            }
            else if (s == "*")
            {
                a = x.top();
                x.pop();
                b = x.top();
                x.pop();
                x.push(a * b);
            }
            else if (s == "/")
            {
                a = x.top();
                x.pop();
                b = x.top();
                x.pop();
                x.push(b / a);
            }
            else
                x.push(stoi(s));
        }
        return x.top();
    }
};