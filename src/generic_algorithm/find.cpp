#include <iostream>
#include <vector>
#include<algorithm>
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
	auto result = find(v1.cbegin(),v1.cend(),10);
	cout<<*result<<endl;
	auto result1 = count(v1.cbegin(),v1.cend(),10);
	cout<<result1<<endl;
	
	return 0;	
}
