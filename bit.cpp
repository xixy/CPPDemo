#include <iostream>
#include <bitset>
using namespace std;

int main(){
	unsigned long quiz1 = 0;
	quiz1 |= 1UL << 27;
	cout<<quiz1<<endl;
	cout<<bitset<sizeof(int)*8>(quiz1)<<endl;
	return 0;	
}
