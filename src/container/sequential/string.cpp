#include <iostream>
#include <vector>
#include <array>
#include<string>
using namespace std;


int main(){
	const char *cp ="Hello World!!!";
	string s(cp);
	cout<<s<<endl;
	s.insert(0,"test");
        cout<<s<<endl;

	return 0;	
}
