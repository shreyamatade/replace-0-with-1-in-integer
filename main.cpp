#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
   int num;
   cin>>num;

   string s=to_string(num);
  // cout<<s.size();
   int nd=s.size();
   //cout<<nd;
   vector<int>v;
   for(int i=0;i<nd;i++)
   {
       int a=num%10;
       if(a==0)
       {
           v.push_back(1);
       }
       else if(a!=0)
       {
           v.push_back(a);
       }
       num=num/10;
   }
   reverse(v.begin(),v.end());

   for(int i=0;i<v.size();i++)
   {
       cout<<v[i];
   }
}
