#include<bits/stdc++.h>
using namespace std;

int a[100000001];
int b[100000001];

int n,x;
void solve1(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin  >>x;
	}
	sort(a, a+n);
	int l =0, r = n-1;
	while(l<=r){
		if(l == r){
			cout <<a[l];break;
		}else{
			cout << a[r--] << " " << a[l++] <<" ";
		}
	}
	cout << endl;
}
//tong cap so = k;
void sumK(){
	int n,k;cin>>n>>k;
	int a[n];
	map<int, int > mp;
	for(int i=0;i<n;i++){
		cin >>a[i];
		mp[a[i]]++;
	}
	long long ans =0;
	for(int i=0;i<n;i++){
		ans += mp[k-a[i]];
		if(a[i]*2 == k)--ans;
	}
	cout << ans/2 << endl;
}

//binary_sum
int first_pos(int a[], int l, int r, int x){
	long long res =-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			r = m-1;
		}else if(a[m] < x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return res;
}
int last_pos(int a[], int l, int r, int x){
	long long res = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			l = m+1;
		}else if(a[m] < x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return res;
}
void binary_sum(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	long long ans =0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int l = first_pos(a,i+1,n-1,k-a[i]);
		int r = last_pos(a,i+1,n-1,k-a[i]);
		if(l != -1){
			ans += r-l+1;
		}
	}
	cout << ans << endl;
}
//cap so co tong nho hon k
int last_pos1(int a[], int l, int r, int x){
	long long res = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] < x){
			res = m;
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return res;
}
void sumNhoHonK(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	long long ans =0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int r = last_pos1(a,i+1,n-1,k-a[i]);
		if(r != -1){
			ans += r-i;
		}
	}
	cout << ans << endl;
}
//cap so co tong lon hon k
int first_pos1(int a[], int l, int r, int x){
	long long res = -1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] > x){
			res = m;
			r = m-1;
		}else{
			l = m+1;
		}
	}
	return res;
}
void sumLonHonK(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	long long ans =0;
	sort(a,a+n);
	for(int i=0;i<n;i++){
		int r = first_pos1(a,i+1,n-1,k-a[i]);
		if(r != -1){
			ans += n-r;
		}
	}
	cout << ans << endl;
}
void tich(){
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<m;i++)cin>>b[i];
	
	int m1 = *max_element(a, a+n);
	int m2 = *min_element(b,b+m);
	
	cout << (long long)m1*m2<< endl;
}
//hopp nhat 2 mang
void hopNhat2Mang(){
	int n,m;cin>>n>>m;
	int arr[m+n];
	for(int i=0;i<n+m;i++)cin>>arr[i];
	sort(arr, arr+m+n);
	for(int x: arr){
		cout << x<< " ";
	}
}

void solve2(){
	int n;cin>>n;
	int l = INT_MAX;
	int r = INT_MIN;
	bool a[1000001] = {0};
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		l = min(l,x);
		r = max(r,x);
		a[x] = 1; 
	}
	int cnt =0;
	for(int i=l;i<=r;i++){
		if(a[i] ==0){
			++cnt;
		}
	}
	cout <<cnt << endl;
}


bool cmp(int a,int b){
	return abs(x-a)< abs(x-b);
}
void solve3(){
	cin>>n>>x;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	stable_sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	cout << endl;
}
// Giao nhau cua 2 mang
void giao_hop(){
	int n,m;cin>>n>>m;
	int a[n],b[m];
	for(int &x: a)cin>>x;
	for(int &x: b)cin>>x;
	
	int i=0,j=0;
	vector<int> hop,giao;
	while(i<n && j< m){
		if(a[i] < b[j]){
			hop.push_back(a[i]);
			++i;
		}else if(a[i] > b[j]){
			hop.push_back(b[j]);
			++j;
		}else{
			hop.push_back(a[i]);
			giao.push_back(a[i]);
			++i;
			++j;
		}
	}
	while(i<n){
		hop.push_back(a[i]);
		++i;	
	}
	while(j<m){
		hop.push_back(b[j]);
		++j;
	}
	for(int x: hop)cout << x << " ";
	cout << endl;
	for(int x: giao)cout<< x <<" ";
	cout <<endl;
}
// sap xep day con
void xapXepDayCon(){
	int n;cin>>n;
	int a[n];
	for(int &x: a)cin>>x;
	int l,r;
	for(int i=0;i<n-1;i++){
		if(a[i] > a[i+1]){
			l = i;
			break;
		}
	}
	for(int i =n-1;i>=0;i--){
		if(a[i] < a[i-1]){
			r = i;
			break;
		}
	}
	int min = *min_element(a+l,a+r+1);
	int max = *max_element(a+l,a+r+1);
	
	for(int i=0;i<=l;i++){
		if(a[i] > min){
			l =i;
			break;
		}
	}
	for(int i=n-1;i>=r;i--){
		if(a[i] < max){
			r = i;
			break;
		}
	}
	cout << l+1<< " "<< r+1;
	
}
//xapsepchu so
void xapXepChuSo(){
	int n;cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	int a[10] = {0};
	for(char x: s){
		if(isdigit(x)){
			a[x-'0'] = 1;
		}
	}
	for(int i=0;i<10;i++){
		if(a[i]){
			cout << i << " ";
		}
	}
	cout << endl;
}
//xapxep theo tuan xuat xuat hien

bool cmpp(pair<int, int>p1, pair<int,int>p2){
	if(p1.second != p2.second){
		return p1.second > p2.second;
	}
	return p1.first < p2.first;
}
void tansuatxuathien(){
	cin>>n;
	map<int,int> mp;
	for(int i=0;i<n;i++){
		cin>>a[i];
		mp[a[i]]++;
	}
	vector<pair<int,int>> v;
	for(auto it: mp){
		v.push_back(it);
	}
	sort(v.begin(),v.end(),cmpp);
	for(auto it: v){
		for(int j =0;j<it.second;j++){
			cout <<it.first<<" ";
		}
	}
	cout << endl;
} 
// x^y > y^x;
int cnt[5];
int first_poss(int a[], int l, int r, int x){
	int res =-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] >x){
			res = m;
			r = m-1;
		}else{
			l = m+1;
		}
	}
	return res;
}
int count(int a[], int n, int x){
	if(x==0)
		return 0;
	if(x==1)
		return cnt[0];
	long long res = cnt[0]+cnt[1]; 
	int l = first_poss(a,0,n-1,x);
	if(l != -1){
		res += n-l;
	}
	if(x==2){
		res -= cnt[3]+ cnt[4];
	}
	if(x==3){
		res += cnt[2];
	}
	return res;
}
void lonHon(){
	int n,m;
	cin>>n>>m;
	int a[n], b[m];
	for(int &x: a)cin>>x;
	for(int &x: b){
		cin>>x;
		if(x<=4){
			cnt[x]++;
		}
	}
	sort(b,b+m);
	long long ans =0;
	for(int x:a){
		ans += count(b,m,x);
	}
	cout << ans ;
	cout <<endl;
	memset(cnt,0,sizeof(cnt));	
}
//Giao cua 3 day so
void giao(){
	int n,m,k;
	cin>>n>>m>>k;
	int a[n],b[m],c[k];
	for(int &x: a)cin>>x;
	for(int &x: b)cin>>x;
	for(int &x: c)cin>>x;
	
	vector<int> res;
	int i=0,j=0,r=0;
	while(i<n && j<m && r<k){
		if(a[i] == b[j] && b[j] == c[r]){
			res.push_back(a[i]);
			++i;
			++j;
			++r;
		}else if(a[i] <= b[j] && a[i] <= c[r]){
			++i;
		}else if(b[j] <= a[i] && b[j] <= c[r]){
			++j;
		}else {
			++r;
		}
	}
	if(res.size()==0){
		cout <<"-1\n";
	}else{
		for(int x: res){
			cout << x<< " ";
		}
		cout << endl;		
	}
} 
//sapXepchanLe
void sapXepChanLe(){
	int n;cin>>n;
	int a[n];
	vector<int> chan,le;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0){
			chan.push_back(a[i]);
		}else{
			le.push_back(a[i]);
		}
	}
	sort(chan.begin(),chan.end());
	sort(le.begin(),le.end(),greater<int>());
	
	int i=0,j=0;
	for(int k =0;k<n;k++){
		if(a[k] %2==0){
			cout <<chan[i] <<" ";
			++i;
		}else{
			cout <<le[j] <<" ";
			++j;
		}
	}
	cout <<endl;
}
//Bieu thuc lon nhat
void bieuThucLonNhat(){
	int n,k;cin>>n>>k;
	int a[n];
	for(int &x: a)cin>>x;
	sort(a+1,a+n,greater<int>());
	long long ans = a[0];
	for(int i=1;i<n;i++){
		if(k>0){
			ans += a[i];
		}else{
			ans -= a[i];
		}
		--k;
	}
	cout << ans <<endl;
}
// Xep hang;
void xepHang(){
	int n;cin>>n;
	pair<int,int>a[n];
	for(int i=0;i<n;i++){
		cin>> a[i].first >> a[i].second;
	}
	sort(a,a+n);
	
}
int main(){
	int t;cin>>t;
	while(t--){
//		solve1();
//		sumK();
//		binary_sum();
//		sumNhoHonK();
//		sumLonHonK();
//		tich();
//		hopNhat2Mang();
//		solve2();
//		solve3();
//		giao_hop();
//		xapXepDayCon();
//		xapXepChuSo();
//		tansuatxuathien();
//		lonHon();
//		giao();
//		sapXepChanLe();
		bieuThucLonNhat();
	}
	return 0;
}
