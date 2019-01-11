#include <iostream>
#include<string>
using namespace std;

int main()
{
	String
	 string s = "Parikh";
	 string s3(s);
	 string s1(s,2,4);  // 2 index se leke next 4 characters print kar dega  
	 cout<<s<<endl;
	 cout<<s1<<endl;
	 cout<<s3<<endl;

	 string s2 = s.substr(2,4);  //substring de dega  2 se leke next 4 characters 
	cout<<s2<<endl;

	 if(s1.compare(s2) == 0){
	 	cout<<s1 <<"is equal to " << s2<<endl;
	 }else{
	 	cout<<s1 <<"is not equal to " << s2<<endl;
	 }        
	 // bade choti string mein compare function "1" or "-1" dega
	 
	 //string.length();= size de dega
	 
}


std::set myset;
string local, domain, full_email;
int different_emails;

  for(auto itr=emails.begin(); itr!=emails.end(); itr++)
  {
    domain = itr->substr(itr->find("@"));
    local = itr->erase(itr->find("@") );
    
    local.erase(local.find("+"));
    
    local.erase(std::remove(local.begin(), local.end(), '.'), local.end());
    
    full_email = local+domain;
    
    myset.insert(full_email);
    
  }     
  
  different_emails = myset.size();
  
  return different_emails;
  }
  
  // this is morse code question
  class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string arr[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> myset;
        for(auto itr=words.begin();itr!=words.end();itr++){
            string morse;
            for(int i=0;i<itr->length();i++){
                morse+=arr[(*itr)[i]-'a'];
            }
            myset.insert(morse);    
        }
        return myset.size();
    }
};
  
  
  
  
  
  
  
  
  
  
  
  
  