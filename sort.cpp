#include<bits/stdc++.h>
using namespace std;
//sort
//stable sort
int main(){
	int n;cin>>n;
//	int a[n];
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
//	sort(a,a+n);
//	for(int i=0;i<n;i++){
//		cout << a[i]<< " ";
//	}
//	sort(a, a+n,greater<int>());
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}
