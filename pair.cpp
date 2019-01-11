#include <iostream>
#include <algorithm>

#include<utility>
using namespace std;

int main()
{
	
	 pair<int,char> p[5];
	 p[0] = make_pair(2,'b');
	 pair<int,char> p2(1,'a');
	 cout<<p[0].first << " " << p[0].second<<endl;
	
	cout<<p2.first << " " << p2.second<<endl;
	cout<<endl;
	 pair<int,char> arr[9];
	for(int i=0;i<9;i++){
		arr[i].second=0;
		arr[i].first=i+1;
	}
	for(int i=0;i<9;i++){
			cout<<arr[i].first<<" "<<arr[i].second<<endl;
			
		}
		cout<<endl;
		
	sort(arr,arr+9);
		for(int i=0;i<9;i++){
			cout<<arr[i].first<<" "<<arr[i].second<<endl;
			
		}

	
}
