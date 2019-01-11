#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int x=n*m;
		
		char arr[n][m];
		pair<int,int> p[x];
		int k=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>arr[i][j];
				if(arr[i][j]=='1'){
					p[k]= make_pair(i,j);
					k++;
				}
				
			}
		}
		int y=n+m-1;
		int arr2[y];
		for(int i=0;i<y;i++){
			arr2[i]=0;
		}
		
		for(int i=0;i<k;i++){
			for(int j=i+1;j<k;j++){
				int d=abs(p[i].first-p[j].first)+abs(p[i].second-p[j].second);
				arr2[d]++;
			}
		}
		for(int i=1;i<y;i++){
			cout<<arr2[i]<<" ";
		}
	}
	return 0;
}
