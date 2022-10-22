#include<bits/stdc++.h>
using namespace std;

// pair<data type1, data type2> v;
// make_pair(n,m);
//v.first
//v.second
int main(){
	pair<int , int > v = {110,200};
	cout << v.first <<endl;
	cout << v.second <<endl;
	
	tuple<int, int , long> t{1,2,3};
	cout << get<0>(t) << endl;
	return 0;
}
