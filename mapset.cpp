#include<bits/stdc++.h>
using namespace std;

void solution(){
//	int n,k;cin>> n,k;
//	vector<int> A(n);
//	map<int, int> count;
//	for(int i=0;i<n;i-=-1){
//		cin >>A[i];
//		count[A[i]]++;
//	}
//	long long ans  =0;
//	for(int i=0;i<n;i++){
//		if(count[A[i]] <=0)continue;
//		ans += count[k-A[i]] - (A[i] == k-A[i]);
//		count[A[i]]--;
//	}
//	cout << ans << endl;
//////////////////
	int n;
	cin>>n;
	vector <int> A(n);
	int MAX =0;
	int MIN = INT_MAX;
	for(int i=0;i<n;i++){
		cin >>A[i];
		MAX = max(MAX,A[i]);
		MIN = min(MIN, A[i]);		
	}
	set<int> st;
	for(int i=0;i<n;i++){
		st.insert(A[i]);
	}
	cout << (MAX - MIN +1 -st.size())<< endl;
	cout << (*(--st.end()) - *(st.begin()) +1) - st.size() << endl;
}
int main(){
	
///////////HopGiao////////////
	
//	int t;cin>>t;
//	while(t--){
//		int n,m;
//		cin>> n>>m;
//		vector<int > v1(n),v2(m);
//		set<int> st1,st2;
//		for(int i=0;i<n;i++){
//			cin >>v1[i];
//			st1.insert(v1[i]);
//		}
//		for(int i=0;i<m;i++){
//			cin >> v2[i];
//			if(st1.find(v2[i]) != st1.end()){
//				st2.insert(v2[i]);
//			}else{
//				st1.insert(v2[i]);
//			}
//		}
//		for(auto x: st1){
//			cout << x << " " ;
//		}
//		cout << endl;
//		for(auto x: st2){
//			cout << x << " ";
//		}
//		cout << endl;
//	}
///////////////////Bai2////////
	int test;cin>> test;
	while(test--){
		solution();
	}
	return 0;
}
