#include <iostream>
#include <vector>

using namespace std;


int main(){
	vector<string> v2;
	string word;
	cin>>word;
	while(word!="exit"){
		for(char &c:word)
			c = toupper(c);
		v2.push_back(word);
		cin>>word;
	}
	for(string i:v2)
		cout<<i<<endl;
	return 0;	
}
