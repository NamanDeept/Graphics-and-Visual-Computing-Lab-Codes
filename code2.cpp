  #include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {

	//relevant code here
	int x,y,z;
	vector < vector < long long int > > v;
	 vector < long long int >::iterator it1,it2,it3;
	for(int j=0 ;j<3;j++)
	{   cin >> x;
	    vector < long  long int > s;
	    for(int i=0; i<x ;i++)
	    {   long long int t;
	        cin >> t;
	        s.push_back(t);


	    }
	    sort(s.begin(),s.end());
	    v.push_back(s);
	}
	long long int ans=0;
	for (it1=v[0].begin() ;it1!=v[0].end() ;it1++)
	{
		//int temp=*it1;
	    it2=lower_bound(v[1].begin() ,v[1].end() ,*it1);
	    if(it2 != v[1].end())
	    {   for( ; it2 != v[1].end() ;it2++)
            {


	        //long long int index1=distance(v[1].begin() ,it2);
	        //cout<< index1 << " @@!" << endl;
	        //index1 =v[1].size() - index1;
	        //cout<< index1 << " @@2" << endl;
	         it3=lower_bound(v[2].begin() ,v[2].end() ,*it2);
	         if(it3 != v[2].end())
	         {
	             long long int index2=distance(v[2].begin() ,it3);
	             //cout<< index2 << " **1" << endl;
	                index2 =v[2].size() - index2;
	                //cout<< index2 << " **2" << endl;
	                ans = ans + index2;

	         }
            }
	    }

	}
	cout << ans << endl;

	return 0;
}

