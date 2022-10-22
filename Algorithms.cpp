#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
//Liner search O(n)

bool linerSearch(int a[], int n, int x){
	for(int i=0;i<n;i++){
		if(a[i] == x)return true;
	}
	return false;
}


/// Binary Search O(nlogn)
// Cac phan tu trong mang phai duoc sap xep
bool binarySearch(int a[], int n, int x){
	int l =0,r = n-1;
	while(l <= r){
		int m = (l+r)/2;
		if(a[m] == x){
			return true;
		}else if (a[m] < x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
	return false;
}
bool bs(int a[], int l, int r,int x){
	if(l>r)return false;
	int m = (l+r)/2;
	if(a[m] == x){
		return true;
	}else if(a[m] <x){
		return bs(a,m+1,r,x);
	}else{
		return bs(a,l,m-1,x);
	}
}

int last_pos(int a[], int n, int x){
	int res =-1;
	int l=0, r = n-1;
	while(l <=r){
		int m = (l+r)/2;
		if(a[m] == x){
			res = m;
			l = m+1;//tim them ben phai;
		}else if(a[m] <x){
			l = m+1;
		}else{
			r = m-1;
		}
	}
}
int first_pos(int a[], int n, int x){
	int res = -1;
	int l =0, r = n-1;
	while(l<=r){
		int m = (l+r)/2;
		if(a[m] ==x){
			res = m;
			r = m-1;
		}else if(a[m]< x){
			l = m+1;
			
		}else{
			r = m-1;
		}
	}
}
int main(){
	int n,x;cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin >>a[i];
	}
	sort(a,a+n);
	if(binarySearch(a,n,x)){
		cout << "Found\n";
	}else{
		cout << "Not Found\n";
	}	
	int l = first_pos(a,n,x);
	int r = last_pos(a,n,x);
	cout << x << " "<< (r-l)+1 << endl;
	return 0;
}
