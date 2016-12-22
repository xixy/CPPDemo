#include <iostream>
#include <vector>
#include<cassert>
using namespace std;
#define NDEBUG
int main(){
	vector<int> v2;
	assert(false);
	for(int i=0;i!=100;i++){
		v2.push_back(i);
	}
	for(int i:v2)
		cout<<i<<endl;
	return 0;	
}
