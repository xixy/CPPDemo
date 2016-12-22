#include <string>
using namespace std;
#include <iostream>
#include<vector>
#include<map>

bool compare(int x,int y){
	return x<y;
}

int main(){
	map<string,size_t> word_count;
	string word;
	while(cin>>word){
		auto ret = word_count.insert({word,1});
		if(!ret.second)
			++ret.first->second;
	
	}
	auto map_it = word_count.begin();
	while(map_it!=word_count.end()){
		cout<<map_it->first<<":"<<map_it->second<<endl;
		++map_it;
	}
	for(const auto &w:word_count)
		cout<<w.first<<" : "<<w.second<<endl;
}
