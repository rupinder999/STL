#include<bits/stdc++.h>
using namespace std;

void swap(int *x,int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int t;
	cin>>t;
     while(t--){
     	int n,x,s;
     	cin>>n>x>>s;
     	int *arr=new int[n+1];
     	for(int i=0;i<=n;i++){
     		arr[i]=0;
     	}
     	arr[x]=1;
     	int a,b;
     	for(int i=0;i<s;i++){
     		cin>>a>>b;
             swap(&arr[a],&arr[b]);
     	}

     	for(int i=1;i<n+1;i++){
     		if(arr[i]==1){
     			break;
     			int z=i;
     		}
     	}
     	cout<<x<<endl;

     }
     return 0;
}