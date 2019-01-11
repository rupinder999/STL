#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
  cin>>n>>m;
  int *arr=new int[n];
  int *arr2=new int[m];

   vector< pair <int,int> > a;
   vector< pair <int,int> > b;
  
  for(int i=0;i<n;i++){
	  cin>>arr[i];
	  a.push_back( make_pair(arr[i],i) );
  }
  for(int i=0;i<m;i++){
	  cin>>arr2[i];
	  b.push_back( make_pair(arr2[i],i) );
  }
   sort(a.begin(),a.end());
   sort(b.begin(),b.end());
   
   for(int i=0,j=0;j<m;j++){
	   cout<<a[i].second<<" "<<b[j].second<<endl;
   }
   
  for(int i=m-1,j=1;j<n;j++){
	   cout<<a[j].second<<" "<<b[i].second<<endl;
   }


  return 0;
}

  
  
  