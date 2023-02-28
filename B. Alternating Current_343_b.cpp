#include<bits/stdc++.h>
using namespace std;
#define e endl;

int main()
{
   stack<char>st;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++)
   {
       if(st.size()==0)
       {
           st.push(s[i]);
       }
       else if(st.top()==s[i])
       {
           st.pop();
       }
       else
       {
           st.push(s[i]);
       }
   }
   if(st.size())
   {
       cout<<"NO"<<e;
   }
   else
   {
       cout<<"Yes"<<e;
   }
   return 0;
}

