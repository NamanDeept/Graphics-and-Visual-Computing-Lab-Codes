  #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
 #define ll long long int
 struct node{
     ll id,atr,val,pt,index;
 };
 bool comp(struct node a1,struct node a2)
 {
     if(a1.id != a2.id)
        return (a1.id < a2.id) ;
     else  if(a1.atr != a2.atr)
            return ( a1.atr < a2.atr);
     else if(a1.pt != a2.pt)
        return (a1.pt > a2.pt);
     else
            return (a1.index > a2.index);



 }
 
 
 int main()
 {

     int n,m;
     cin >> n >> m;
     vector < struct node > v;
     vector < vector <ll > > v2;

      vector < struct node >:: iterator it;
     for(int i=0 ;i<n ;i++)
     {

         struct node t;
         cin >> t.id >> t.atr >> t.val >> t.pt ;
         t.index=i;
         v.push_back(t);
     }
     sort(v.begin(),v.end(),comp);
     for( int i=0 ;i< m; i++)
     {
         vector <ll> k;
         ll b1,b2;
         cin >> b1 >> b2;
         k.push_back(b1);
         k.push_back(b2);
         v2.push_back(k);
         k.clear();

     }
     for(int i=0 ;i < m ;i++)
     {

         ll b1,b2;
         b1=v2[i][0],b2=v2[i][1];
         struct node s;
         s.id=b1,s.atr=b2;
         int dd=binarySearch(v,0,n-1,s)
          

     }
     return 0;
 }

