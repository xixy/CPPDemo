#include <iostream>
#include <vector>
#include<stack>
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
	stack<int> intStack;
	for(size_t ix=0;ix!=10;ix++){
		intStack.push(ix);
	}
	while(!intStack.empty()){
		int value=intStack.top();
		intStack.pop();
		cout<<value<<endl;
	}
	return 0;	
}
