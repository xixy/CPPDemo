#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool isShorter(const string &s1,const string &s2){
	return s1.size()<s2.size();
}

int main(){
	vector<string> v2={"hello","word","this","is","my","girlfriend"};
	//sort(v2.begin(),v2.end(),isShorter);
	for(auto i:v2)
		cout<<i<<endl;
	sort(v2.begin(),v2.end(),[](const string &a, const string &b)
		{return a.size()<b.size();});
        for(auto i:v2)
                cout<<i<<endl;

	return 0;	
}
