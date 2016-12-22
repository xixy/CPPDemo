#include <string>
using namespace std;
#include <iostream>
#include<iterator>
#include<list>
int main(){
	list<int>lst = {1,2,3,4,5};
	list<int> lst1,lst2, lst3;
        copy(lst.cbegin(),lst.cend(),back_inserter(lst1));
	copy(lst.cbegin(),lst.cend(),front_inserter(lst2));
	copy(lst.cbegin(),lst.cend(),inserter(lst3,lst3.begin()));
        for(int i:lst1)
                cout<<i;
        cout<<endl;
	for(int i:lst2)
		cout<<i;
	cout<<endl;
        for(int i:lst3)
                cout<<i;
        cout<<endl;

}
