  #include <iostream>
#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main() {

	//relevant code here
	int t;
	cin>>t;
	string s;
	//cout<<t<<endl;
	while(t--)
	{
	    s="";
	    while(s.size()==0)
        {


                getline(cin,s);
                //if(s.size()==0)
                //{
                 //   continue;
                //}
        }


		//cout<<s<<endl;

	    int x=0,n=1,f=0;
	    vector < pair < int ,long long int> > v;
	    long long int l = s.size();
	    for(int i=0 ;i< l  ;i++)
	    {   if(s[i]==' ')
	            continue;
	        else if(s[i]=='?')
	        {
	            v.push_back(make_pair(n ,-1));

	            f=n;
	            if(f==3)
	            	break;

	             //cout << f << " ##1"<<endl;
	             n++;
	            x=0;
	        }
	        else if(s[i]=='+')
	        {	if(f==1)
	        		continue;
	            v.push_back(make_pair(n ,x));
	            //cout << x << " @@1"<<endl;
	            n++;
	            x=0;
	        }
	        else if(s[i]=='=')
	        {	if(f==2)
	        		continue;
	            v.push_back(make_pair(n ,x));
	             //cout << x << " @@2"<<endl;
	            n++;
	            x=0;
	        }
	        else
	        {
	            x*=10;
	            x+=s[i]-'0';
	        }
	    }
	    if(f!=3)
	    	 v.push_back(make_pair(n ,x));
	    long long int ans=0;
	    if(f==3)
	    {
	        ans=v[1].second+v[0].second;
	    }
	    else if(f==1)
	    {
	        ans=v[2].second-v[1].second;

	    }
	    else
	    {
	         ans=v[2].second-v[0].second;
	    }
	    cout << ans << endl;

	}

	return 0;
}

