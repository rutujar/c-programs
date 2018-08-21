#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
int has[1000];
int main()
{
	  int t;
	   cin>>t;
	   while(t--)
	    {
	    	 string s;
	    	  cin>>s;
			  memset(has,0,sizeof has);;
	    	  int len=s.length();
	    	  for(int i=0;i<len;i++)
	    	   {
	    	   	 has[s[i]-'a']++;
			   }
			   int f=0;
			   for(int i=0;i<26;i++ )
			   {
			  // 	cout<<has[i]<<endl;
			   	 if(has[i]==i+1 || has[i]==0) continue;
			   	 else f=1;
			   }
			   if(f==0)
			    cout<<"GOOD"<<endl;
			    else
			    cout<<"BAD"<<endl;
		}
}
