#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>st;
    string s;
    cin>>s;
    int chk=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            st.push(s[i]);
        }
        else
        {
            if(!st.empty())
            {
                st.pop();
                chk++;
            }
        }
    }
    cout<<chk*2<<endl;
    return 0;
}
