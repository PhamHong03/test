#include<bits/stdc++.h>
using namespace std;

int main(){
	/////////////////////////BAI1////////////////////////////
//	int t;cin>> t;
//	while(t--){
//		int n;cin>> n;
////		set<int> se;
////		map<int,bool> mp;
////		for(int i=0;i<n;i++){
////			int x;cin>>x;
////			mp[x] = true;
////		}
////		cout << mp.size() << endl;
//		int a[n];
//		for(int &x: a){
//			cin>>x;
//			
//		}
//		sort(a,a+n);
//		int ans =1 ;
//		for(int i=1;i<n;i++){
//			if(a[i] != a[i-1]){
//				ans++;
//			}
//		}
//		cout << ans<< endl;
//	}
//////////////////////////BAI2//////////////////////////////////////
//	 	int t;cin >> t;
//	 	while(t--){
//	 		int n;cin>>n;
//	 		int a[n];
//	 		for(int &x: a){
//	 			cin>>x;
//			}
//			 sort(a,a+n);
//			 int q;cin>>q;
//			 while(q--){
//			 	int x;cin>>x;
//			 	if(binary_search(a,a+n,x)){
//			 		cout << "YES\n";
//				}else{
//				 	cout << "NO\n";
//				}
//			}
//			set<int> se;
//			for(int i=0;i<n;i++){
//				int x;cin>>x;
//				se.insert(x);
//			}
//			int q;cin>>q;
//			while(q--){
//				int x;cin>>x;
//				if(se.count(x)==1){
//					cout << "YES\n";
//				}else{
//					cout << "NO\n";
//				}
//			}
//		} 
////////////////BAI3///////////////////////////////
//	int t;cin>> t;
//	while(t--){
//		int n,m;cin>>n>>m;
//		int a[n], b[m];
//		for(int &x: a){
//			cin >> x;
//			
//		}
//		set<int> se;
//		for(int i=0;i<m;i++){
//			int x;cin>>x;
//			se.insert(x);
//		}
//		bool ok = false;
//		for(int x: a){
//			if(se.find(x) == se.end()){
//				cout << x << " ";
//				ok = true;
//			}
//		}
//		if(!ok){
//			cout << "Not Found!" << endl;
//		}
//	}
//	int t;cin>>t;
//	while(t--){
//		int n;
//		cin>>n;
//		map<long long, int> mp;
//		for(int i=0;i<n;i++){
//			long long x;cin>> x;
//			mp[x]++;
//		}
//		long long res;
//		long long fre = INT_MIN;
//		for(auto it : mp){
//			if(it.second > fre){
//				res = it.first;
//			}
//		}
//		cout<< res<< " " << fre << endl;
//	}
//////////////////////BAI4/////////////////////////
//	int t;cin>> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
//		int a[256] = {0};
//		for(char x: s){
//			a[x]++;
//		}
//		char res ;
//		int fre =0;
//		for(int i=0;i<256;i++){
//			if(a[i] > fre){
//				fre = a[i];
//				res = (char)i;
//			}
//		}
//		map<char , int > mp;
//		for(char x: s){
//			mp[x]++;
//		}
//		char res;
//		int fre =0;
//		for(auto it: mp){
//			if(it.second >fre){
//				fre = it.second;
//				res = it.first;
//			}	
//		}		
//		cout << res << " " << fre<< endl;
//		
//	}	 
///////////////////////////BAI5//////////////
//	int t;cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
////		set<char> se;
//		map<char, bool> mp;
//		for(char x: s){
////			se.insert(tolower(x));
//			mp[tolower(x)] = true;
//		}
//		if(mp.size() == 26){
//			cout << "YES\n";
//		}else{
//			cout << "NO\n";
//		}
//	}
	///////////////////////////BAI6//////////////
//	int t;cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
////		set<string> se;
//		map<string, int> mp;
//		stringstream ss(s);
//		string word;
//		while(ss >> word){
////			se.insert(word);
//			mp[word]++;
//		}
////		cout << se.size() << endl;
//		cout <<mp.size() << endl;
//		string res;
//		int fre =0;
//		for(auto it: mp){
//			fre = it.second;
//			res = it.first;
//		}
//		cout << res << " " << fre << endl;
//	}
/////////////////////////BAI7/////////////////////
//	int t;cin >> t;
//	cin.ignore();
//	while(t--){
//		string s;
//		getline(cin,s);
//		set<string> se;
//		stringstream ss(s);
//		string word;
//		vector <string> v;
//		while(ss >> word){
//			v.push_back(word);
//		}
//		for(string x: v){
//			if(se.find(x) != se.end()){
//				cout << x << endl;
//				break;
//			}
//			se.insert(x);
//		}
//	}
///////////////////////Bai8/////////////////////
	int t;cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		set<string> se;
		stringstream ss(s);
		string word;
		vector <string> v;
		while(ss >> word){
			v.push_back(word);
		}
		for(string x: v){
			if(se.find(x) != se.end()){
				cout << x << endl;
				break;
			}
			se.insert(x);
		}
	}
	 return 0;
}
