#include<bits/stdc++.h>
using namespace std;

// Doi cho truc tiep
void solution(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin>>x;
	}
	for(int i=0;i<n-1;i++){
		for(int j =i+1;j<n;j++){
			if(a[i] > a[j]){
				swap(a[i],a[j]);
			}
		}
		cout <<"Buoc "<< i+1<< ":  ";
		for(int x: a){
			cout<< x<< " ";
		}
		cout << endl;
	}
	
}
// selectionsort
void selection_sort(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin>> x;
	}
	for(int i=0;i<n-1;i++){
		int min =i;
		for(int j = i+1;j<n;j++){
			if(a[j] < a[min]){
				min = j;
			}			
		}
		swap(a[i],a[min]);
		cout << "Buoc "<< i+1<< ": ";
		for(int x: a){
			cout << x<< " ";
		}
		cout << endl;
	}
}
//insertion_sort
void insertion_sort(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin>> x;
	}
	for(int i=0;i<n;i++){
		int x = a[i];
		int pos = i-1;
		while(pos >= 0 && a[pos] > x){
			a[pos+1] = a[pos];
			--pos;
		}
		a[pos+1] =x;
		cout <<"Buoc " << i<< ": ";
		for(int x: a){
			cout << x<< " ";
		}
		cout << endl;
	}
}
//mergesort : noi bot
void merge_sort(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin>> x;
	}
	for(int i=0;i<n-1;i++){
		bool ok = false;
		for(int j=0;j<n-i-1;j++){
			if(a[j] > a[j+1]){
				swap(a[j],a[j+1]);
				ok = true;
			}
		}
		if(ok){
			cout << "Buoc "<< i+1<< ": ";
			for(int x: a){
				cout << x<< " ";
			}
			cout << endl;
		}else{
			break;
		}
	}
}

void timkiemtuyentinh(){
	int n,x;cin>> n>>x;
	int a[n];
	for(int &x: a){
		cin>>x;
	}
	int ok =0;
	for(int i=0;i<n;i++){
		if(a[i] == x){
			ok =1;
		}
	}
	cout << ok <<endl;
}
bool bs(int a[], int n, int x){
	int l =0;
	int r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] == x)return true;
		else if(a[m]< x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return false;
}
//binary_search;
void binary_search(){
	int n,x;cin >>n>>x;
	int a[n];
	for(int &x: a){
		cin>>x;
	}
	cout << bs(a,n,x) << endl;
	
}
//vi tri dau tien
int dautien(int a[], int n, int x){
	int res = -1, l =0, r = n-1;
	while(l<=r){
		int m =(l+r)/2;
		if(a[m] == x){
			res = m+1;
			r = m-1;
		}else if(a[m] <x){
			l =m+1;
		}else{
			r = m-1;
		}
	}
	return res;
}
void findFirst(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int &x: a){
		cin >>x;
	}
	cout << dautien(a,n,x)<< endl;
}
int cuoicung(int a[], int n, int x){
	int res = -1, l =0, r = n-1;
	while(l<=r){
		int m =(l+r)/2;
		if(a[m] == x){
			res = m+1;
			l = m+1;
		}else if(a[m] <x){
			l =m+1;
		}else{
			r = m-1;
		}
	}
	return res;
}
void lastFirst(){
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int &x: a){
		cin >>x;
	}
	cout << cuoicung(a,n,x)<< endl;
}

//Quick sort;
 void quick_sort(){
 	
 }
void partition(int a[], int l, int r){
	int pivot = a[r];
	int i = l-1,j = l;
	for(int j =l;j<r;j++){
		if(a[j] < pivot){
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	
}
//tron 
void merge_sort1(){
	int n,m;cin>>n>>m;
	int b[n],c[m];
	for(int &x: b)cin >>x;
	for(int &x: c) cin>>x;
	int i=0,j=0;
	while(i< n && j < m){
		if(b[i] < c[j]){
			cout << "b" << i+1<< " ";
			++i;
		}else{
			cout <<"c"<< j+1<<" ";
			++j;
		}
	}
	while(i< n){
		cout <<"b"<<i+1<< " ";
		++i;
	}
	while(j<m){
		cout <<"c" <<j+1<<" ";
		++j;
	}
}
void ghepcap(){
	int n,m;cin>>n>>m;
	int a[n], b[m];
	for(int &x: a)cin>>x;
	for(int &x: b)cin>>x;
	sort(a,a+n);
	sort(b,b+m);
	int i=0,j=0,ans =0;
	while(i<n && j<m){
		if(a[i] <=b[j]){
			++i;
		}else{
			++ans;
			++i;
			++j;
		}
	}
	cout << ans << endl;
}
//nha gan nhat
void nhaGanNhat(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin >>x;
	}
	sort(a, a+n);
	int res  =INT_MAX;
	for(int i=1;i<n;i++){
		res = min(res, a[i] - a[i-1]);
	}
	cout <<res << endl;
}
//xep Gach
void xepGach(){
	int n;cin>>n;
	int a[n];
	for(int &x: a){
		cin >>x;
	}
	sort(a,a+n,greater<int>());
	int ans =1;// vien gach dau tien
	int docung =a[0];
	for(int i=1;i<n;i++){
		if(docung >=1){
			++ans;
			docung = min(docung -1,a[i]); 
		}
		else{
			break;
		}
	}
	cout << ans<< endl;
}
//Vat sua bo
void vatSuaBo(){
	int n;cin >>n;
	int a[n];
	for(int &x: a){
		cin >>x;
	}
	sort(a, a+n,greater<int>());
	int ans =0;
	for(int i=0;i<n;i++){
		if(a[i] > i){
			ans += a[i]-i;
		}else{
			break;
		}
	}
	cout << ans<< endl;
}
//Doi cho
void doiCho(){
	
}
int main(){
	
	int t;cin>>t;
	while(t--){
//		solution();
//		selection_sort();
//		insertion_sort();
//		merge_sort();
//		timkiemtuyentinh();
//		binary_search();
//		findFirst();
//		lastFirst();
//		merge_sort1();
//		ghepcap();
//		nhaGanNhat();
//		xepGach();
//		vatSuaBo();
		doiCho();
	}	
	return 0;
}
