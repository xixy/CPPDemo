#include <iostream>
#include "base.h"
using namespace std;
template <typename T>
int compare(const T &v1,const T &v2){
	if(v1<v2) return -1;
	if(v2<v1) return 1;
	return 0;
}

int main(){
	cout<<compare(1,2)<<endl;

	cout<<compare(-1.0,-2.13)<<endl;

	base a(10),b(20);
	if(a<b) cout<<"hi";
	cout<<compare(a,b)<<endl;//这里有问题，不能编译通过
}