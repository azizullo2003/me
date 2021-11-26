#include <bits/stdc++.h>
#define ll long long 
using namespace std;
const int N = 111111;

vector<int> v1[N], v2[N];
int maxdis1 = 0, maxdis2 = 0;
int maxnode1 = 1, maxnode2 = 1;


void dfs1(int n, int n1, int dis){
	if(dis > maxdis1){
		maxdis1 = dis;
		maxnode1 = n;
	}
	for(auto u : v1[n]){
		if(u != n1){
			dfs1(u, n, dis + 1);
		}
	}
}

void dfs2(int n, int n1, int dis){
	if(dis > maxdis2){
		maxdis2 = dis;
		maxnode2 = n;
	}
	for(auto u : v2[n]){
		if(u != n1){
			dfs2(u, n, dis + 1);
		}
	}
}

int main(){
	
	int n, m;
	cin>>n;
	for(int i = 1; i<=n - 1; i++){
		int a, b;
		cin>>a>>b;
		v1[a].push_back(b);
		v1[b].push_back(a);
	}
	
	cin>>m;
	for(int i = 1; i<=m - 1; i++){
		int a, b;
		cin>>a>>b;
		v2[a].push_back(b);
		v2[b].push_back(a);
	}
	
	dfs1(1, 0, 0);
	maxdis1 = 0;
	dfs1(maxnode1, 0, 0);
	int l1 = maxdis1;
	
	
	dfs2(1, 0, 0);
	maxdis2 = 0;
	dfs2(maxnode2, 0, 0);
	int l2 = maxdis2;
	
	int natija = (((l1 % 2 == 1)?l1/2 + 1:l1/2)+((l2 % 2 == 1)?l2/2 + 1:l2/2) + 1);
	cout<<natija;
	
	return 0;
}