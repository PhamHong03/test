#include<bits/stdc++.h>
using namespace std;
//10
//1 -1 2 3 5 4 6 -5 -4 -3
//1 -1 2 -2 3 4 -4 5 -5 6

//bool cmp(int a, int b){
//	return abs(a) < abs(b);
//}
bool cmp(string a , string b){
	return a.length() > b.length();
}
int main(){
	int n;cin>>n;
//	int a[n];
	string a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
//	stable_sort(a,a+n);
	stable_sort(a,a+n,cmp);
	for(string x: a){
		cout << x << " ";
	}
	
	return 0;
}
