#include<bits/stdc++.h>
using namespace std;

// vector<kieu du lieu> ten vector;
//push_back();
//size();
// duyet
// duyet bang interator
int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	cout << v.size()<<endl;
	v.push_back(100);
	cout << v.size()<< endl;
	cout << "Phan tu dau tien trong vector: "<< v[0]<<endl;
	cout <<"Phan tu cuoi cung: "<< v[v.size()-1]<<endl;
	cout <<"Phan tu cuoi cung: "<< v.back()<<endl;

	for(int i=0;i<=v.size()-1;i++){
		cout << v[i]<<endl;
	}
	for(vector<int>::iterator it = v.begin();it != v.end();++it){
		cout << *it << endl;
	}
	for(auto it = v.begin(); it !=v.end();++it){
		cout << *it << endl;
	}
	int n ;cin>> n;
	vector<int> v(n,100);
	for(int i=0;i<n;i++){
		cout<< v[i]<<endl;
	}
	vector<string> vec;
	vec.push_back("LTCTDL");
	vec.push_back("DATA");
	for(int i=0;i<vec.size();i++){
		cout << vec[i]<< endl;
		
	}
	string s = "ngon ngu lap trinh java";
	stringstream ss(s);
	string temp;
	vector<string > vector;
	while(ss >> temp){
		vector.push_back(temp);
	}
	for(string x: vector){
		cout << x<< endl;
	}
	return 0;
}
