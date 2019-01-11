#include <iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	
	//  

	int arr[] = {1,2,3,4,5,6,5};
	map<int,int> m;

	for(int i=0;i<7;i++){
		m[arr[i]] = m[arr[i]]+1;
	}

	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first << " :" << it->second<<endl;
	}
	cout<<endl;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first << " :" << (*it).second<<endl;
	}
	cout<<endl;
	
	m.erase(1); // THIS IS THE DELETE FUNCTIONALITY
	
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first << " :" << it->second<<endl;
	}
	
	cout<<endl;
	
	
	cout<<m.size(); //size functionality
	int x;
	cin>>x;
	if(m.find(x)!=m.end())
	{
		cout<<"x is found and its value is"<<":"<<x<<endl;
		
	}
	map<int ,string> m;
	m[100]="rupinder";
	m[123]="nupur";
	m[134]="ashu";
	m[145]="param";
	
	cout<<m[100]<<endl;
	cout<<m[123]<<endl;
	
	map<int,string>::iterator it=m.begin();
	
	while(it!=m.end())
	{
		cout<<it->second<<endl;
		it++;
	}
	
	
}
