#include<bits/stdc++.h>
#include<set>
#include<map>
//#include<unorder_map>


using namespace std;

//insert
//size
//find
//count
//erase
//multiset : duy tri duoc 2 thang giong nhau;
//erase
//Dem so lan xuat hien cua cac phan tu trong mang
int main(){
//	set<int> s;
//	for(int i=0;i<10;i++){
//		s.insert(i);
//	}
//	
//	s.erase(5);
//	for(int x: s){
//		cout << x<< endl;
//	}
//	cout << s.size()<< endl;
//////////////////////////////////////////////
//	multiset<int> ms;
//	ms.insert(100);
//	ms.insert(300);
//	ms.insert(200);
//	ms.insert(300);
//	
//	cout << ms.size()<< endl;
//	int n,k;
//	cin >> n>> k;
//	int a[n];
//	for(int &x: a){
//		cin >> x;
//	}
//	multiset<int > ms;
//	for(int i=0;i<k;i++){
//		ms.insert(a[i]);
//	}
//	for(int i=k;i<n;i++){
//		cout << *ms.rbegin() <<endl;
//		ms.erase(ms.find(a[i-k]));
//		ms.insert(a[i]);
//	} 
/////////////////////////////////////////////
//	map<int, int> mp;
//	mp[100]= 200; // (100,200;
//	mp[200] = 300; // (200,300
//	mp.insert({300,400});
//	mp.insert({400,500});
//	mp.erase(100);
//	for(pair<int, int> x: mp){
//		cout << x.first << " "<< x.second << endl;
//	}
//	for(map<int, int> :: iterator it = mp.begin();it != mp.end();++it){
//		cout << (*it).first << " "<< (*it).second << endl;
//	}
//	if(mp.count(500) != 0){
//		cout << "Found! \n";
//	}else{
//		cout << "Not Found ";
//	}
/////////////////////////////////////
//	map<int, int> mp;
//	int n;cin>>n;
//	int a[10000];
//	for(int i=0;i<n;i++){
////		int x;cin>>x;
//		cin>> a[i];
//		mp[a[i]]++;
//	}
//	for(int i=0;i<n;i++){
//		if(mp[a[i]] != 0)
//		cout << a[i] << " " <<mp[a[i]] << endl; 
//		mp[a[i]] = 0;
//	}
	///////////////////////////////////////
//	map<string ,int> mp;
//	int n; cin>> n;
//	for(int i=0;i<n;i++){
//		string s;cin >> s;
//		mp[s]++;
//	}
//	int max_fre =0;
//	string res;
//	for(auto it: mp){
//		if(it.second > max_fre){
//			max_fre = it.second;
//			res = it.first;
//		}
//	}
//	cout << res << " " << max_fre << endl;	
/////////////////////////////////////////////////
	unordered_map <int, int> mp;
	mp.insert({1,100});
	mp.insert({2,200});
	mp.insert({1,200});
	for(auto it: mp){
		cout << it.first << " " << it.second <<endl;
	}
	cout << mp.count(1) << endl;
	
	
	return 0;
}
