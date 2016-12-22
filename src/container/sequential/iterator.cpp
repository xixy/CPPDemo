#include <string>
using namespace std;
#include <iostream>
#include<vector>
bool check(vector<int>::iterator &begin,vector<int>::iterator &end, int key){
	while(begin!=end){	
		if(*begin==key)
			return true;
		begin++;
	}
	return false;
}

int main(){
	string s("some string");
	auto it = s.begin();
	for(;it!=s.end();it++){
		*it = toupper(*it);	
	}
	cout<<s<<endl;
}
