#include <string>
using namespace std;
#include <iostream>
#include<vector>
#include<set>
bool compare(int x,int y){
	return x>y;
};

int main(){
	vector<int>ivec={2,4,6,8,10,2,4,6};
	set<int,decltype(compare)*> myset(compare);
	myset.insert(ivec.cbegin(),ivec.cend());
	for(const auto &w:myset)
		cout<<w<<endl;
}
