#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 222222;

vector<int> a(N);
vector<int> v[N];
bool used[N] = {0};

vector<int> qiy;
vector<int> tug;

void dfs(int s){
	
	if(used[s]) return;
	
	used[s] = 1;
	
	qiy.push_back(a[s]);
	tug.push_back(s);
	
	for(auto u : v[s]){
		dfs(u);
	}
}


int main(){
	
	int n, m;
	cin>>n>>m;
	
	for(int i = 1; i<=n; i++){
		cin>>a[i];
	}
	
	for(int i = 0; i<m; i++){
		int x, y;
		cin>>x>>y;
		
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	
	for(auto i = 1; i<=n; i++){
		if(!used[i])dfs(i);
		sort(qiy.begin(), qiy.end());
		sort(tug.begin(), tug.end());
	
		auto q1 = qiy.begin();
		for(auto u : tug){
			a[u] = *q1;
			q1 ++;	
		}
		qiy.clear();//
		tug.clear();
	}
	
	for(int i = 1; i<=n; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}