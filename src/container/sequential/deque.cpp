#include <iostream>
#include <vector>
#include<deque>
using namespace std;
int main(){
	deque<int>v1;
        for(int i=0;i!=90;i++){
                v1.push_front(i);
        }
	for(auto i:v1)
		cout<<i<<endl;
	return 0;	
}
