#include <string>
using namespace std;
#include <iostream>

int main(){
	string s("some string");
	auto it = s.begin();
	for(;it!=s.end();it++){
		*it = toupper(*it);	
	}
	cout<<s<<endl;
}
