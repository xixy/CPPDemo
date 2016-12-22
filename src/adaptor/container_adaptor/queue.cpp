#include <iostream>
#include <vector>
#include<queue>
using namespace std;

void initialize(vector<int>::iterator begin,const vector<int>::iterator end){
	vector<int> temp(begin,end);
	cout<<"new vector"<<endl;
	for(auto i:temp)
		cout<<i;
}

bool check(vector<int>::iterator begin,const vector<int>::iterator end, int key){
        while(begin!=end){
                if(*begin==key)
                        return true;
                begin++;
        }
        return false;
}


int main(){
	queue<int> intQueue;
	for(size_t ix=0;ix!=10;ix++){
		intQueue.push(ix);
	}
	while(!intQueue.empty()){
		int value=intQueue.front();
		intQueue.pop();
		cout<<value<<endl;
	}
	return 0;	
}
