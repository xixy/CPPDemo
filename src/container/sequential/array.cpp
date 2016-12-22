#include <iostream>
#include <vector>
#include <array>
using namespace std;


int main(){
	vector<int> v2;
	for(int i=0;i!=100;i++){
		v2.push_back(i);
	}
	vector<int>v1;
        for(int i=0;i!=90;i++){
                v1.push_back(i);
        }
	v1.swap(v2);
	return 0;	
}
