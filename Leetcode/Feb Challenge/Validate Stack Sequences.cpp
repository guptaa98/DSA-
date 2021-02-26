class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) 
    {
        int j = 0;
        stack <int> stk;
        for(int i = 0; i < pushed.size(); i++)
        {
            stk.push(pushed[i]);
            while(!stk.empty() && stk.top() == popped[j])
            {
                stk.pop();
                j++;
            }
        }
        return (stk.empty());
    }
};
