#include<bits/stdc++.h>
using namespace std;

void solution(){
	int n;
	cin>>n;
	vector <int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int index_min = 0;
	int index_max = n-1;
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout << a[index_max] << " ";
			index_max--;
		}else{
			cout << a[index_min] << " ";
			index_min++;
		}
	}
	cout << endl;
	
}
int n,x;
bool cmp(pair<int, int> p1, pair<int, int> p2){
	if(abs(x-p1.first) == abs(x-p2.first)){
		return p1.second < p2.second;
	}
	return abs(x-p1.first) < abs(x-p2.first);
}
void solve(){
	cin>>n>>x;
	vector<int> a(n);
	vector<pair<int,int >> v;
	for(int i=0;i<n;i++){
		cin>>a[i];
		v.push_back({a[i], i});
		
	}
	
	sort(v.begin(),v.end());
	for(auto  p : v){
		cout << p.first << " ";
	}
	cout << endl;
}
int binary_search(vector<int> &a, int l, int r, int x){
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x)return 1;
		if(a[m] < x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return -1;
}
void solve2(){
	int n,x;
	cin>>n>>x;
	
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	sort(a.begin(),a.end());
	cout << binary_search(a,0,n-1,x) << endl;
}
void solve3(){
	int n;
	cin>>n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++){
		cin >>a[i];
		b[i] = a[i];
	}
	sort(b.begin(),b.end());
	int l;
	for(int i=0;i<n;i++){
		if(a[i] != b[i]){
			l = i+1;break;
		}
	}
	int r ;
	for(int i = n-1;i>=0;i--){
		if(a[i] != b[i]){
			r = i+1;break;
		}
	}
	cout << l <<" " << r << endl;
}
void solve4(){
	int n;cin>>n;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	set<int> ans;
	for(int i=0;i<n;i++){
		long long num = a[i];
		while(num >0){
			ans.insert(num %10);
			num/=10;
		}
	}
	for(auto x: ans){
		cout << x<< " ";
	}
}
void solve5(){
	int n,x;
	cin>>n>>x;
	int cnt =0;
	vector<long long> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] == x)
			cnt++;
	
	}
	cout <<(cnt ==0? -1 : cnt)<< endl;
}
const int N = 1e6 +5;
bool prime[N] ={};
void erthos(){
	for(int i=2;i<N;i++){
		prime[i] = true;
	}
	for(int i=2;i<(int)sqrt(N);i++){
		if(prime[i] == true){
			for(int j =i*i;j<N;j+=i){
				prime[j] = false;
			}
		}
	}
}
void solve6(){
	int n;
	cin>> n;
	bool found = false;
	for(int i=2;i<n;i++){
		if(prime[i] == true && prime[n-i] == true){
			cout << i <<" "<< n-i<< endl;
			found = true;
			break;
		}
	}
	if(!found){
		cout << -1<< endl;
	}
}
bool cmp7(pair<int,int> p1, pair<int, int> p2){
	if(p1.second == p2.second){
		return p1.first < p2.first;
	}
	return p1.second > p2.second;
}
void solve7(){
	int n;cin>>n;
	vector<int> a(n);
	
	map<int, int> cnt;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	vector<pair<int, int>> v;
	for(auto p: cnt){
		v.push_back(p);
	}
	sort(v.begin(),v.end(), cmp7);
	for(auto p: v){
		while(p.second--){
			cout << p.first <<" ";
		}
	}
	cout << endl;
}
void solve8(){
	int n;cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min1 = INT_MAX;
	int min2 = INT_MAX;
	for(int i=0;i<n;i++){
		min1 = min(min1, a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i] != min1){
			min2 = min(min2, a[i]);
		}
	}
	if(min2 == INT_MAX){
		cout << -1 << endl;
	
	}else{
		cout << min1 << " " << min2 << endl;
	}
}
void solve9(){
	int n1,n2,n3 ;
	cin>>n1>>n2>>n3;
	vector<long long> v1(n1), v2(n2),v3(n3);
	for(int i=0;i<n1;i++)cin>>v1[i];
	for(int i=0;i<n2;i++)cin>>v2[i];
	for(int i=0;i<n3;i++)cin>>v3[i];
	int index1 = 0, index2 =0, index3 =0;
	
	set<long long> ans;
	while(index1 <n1 && index2 <n2 && index3 < n3){
		if(v1[index1] == v2[index2] && v1[index1] == v3[index3]){
			ans.insert(v1[index1]);
			index1++;
			index2++;
			index3++;
		}
		long long Max = max({v1[index1], v2[index2],v3[index3]});
		if(v1[index1] < Max) index1++;
		if(v2[index2] < Max) index2++;
		if(v3[index3] < Max) index3++;
	}
	if(ans.empty()){
		cout << -1<<endl;
	}else{
		for(auto x: ans){
			cout << x<< " ";
		}
	}	
}
void solve10(){
	int n;cin>>n;
	vector <int> a(n+1);
	vector<int> even,odd;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] %2 ==0){
			even.push_back(a[i]);
		}else{
			odd.push_back(a[i]);
		}
	}
	sort(even.begin(),even.end());
	sort(odd.begin(),odd.end());
	
	int pos_odd =0;
	int pos_even = (int)even.size()-1;
	
	for(int i=1;i<=n;i++){
		if(i%2 == 1){
			cout << odd[pos_odd++] << " ";
		}else{
			cout << even[pos_even--] << " ";
		}
	}
	cout << endl;
	
}
int main(){
	int t;cin>>t;
	while(t--){
//		erthos();
//		solution();
		solve10();
	}	
	return 0;
}
