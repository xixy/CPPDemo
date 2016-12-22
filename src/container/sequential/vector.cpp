#include <iostream>
#include <vector>

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
	vector<int> v2;
	for(int i=0;i!=100;i++){
		v2.push_back(i);
	}
	vector<int>v1;
        for(int i=0;i!=90;i++){
                v1.push_back(i);
        }
	v1.swap(v2);
	if(check(v2.begin(),v2.end(),95)==false){
		cout<<"I cannot find"<<endl;
	}
	initialize(v2.begin(),v2.end());
	return 0;	
}
