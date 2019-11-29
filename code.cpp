#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	//relevant code here
	int x,y,z;
	vector < set < long long int > > v;
	 set < long  long int >::iterator it1,it2,it3;
	for(int j=0 ;j<3;j++)
	{   cin >> x;
	    set < long  long int > s;
	    for(int i=0; i<x ;i++)
	    {   long long int t;
	        cin >> t;
	        s.insert(t);
	    }
	    v.push_back(s);
	}
	long long int ans=0;
	for (it1=v[0].begin() ;it1!=v[0].end() ;it1++)
	{
	    it2=v[1].lower_bound(*it1);
	    if(it2 != v[1].end())
	    {
	        long long int index1=distance(v[1].begin() ,it2);
	        cout<< index1 << " @@!" << endl;
	        index1 =v[1].size() - index1;
	        cout<< index1 << " @@2" << endl;
	         it3=v[2].lower_bound(*it2);
	         if(it3 != v[2].end())
	         {
	             long long int index2=distance(v[2].begin() ,it3);
	             cout<< index2 << " **1" << endl;
	                index2 =v[2].size() - index2;
	                cout<< index2 << " **2" << endl;
	                ans = ans + (index1*index2);
	             
	         }
	    }
	    
	}
	cout << ans << endl;

	return 0;
}
