 #include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>

//dijkstra's algorithm --> falta este

using namespace std;

 class SolutionTwentyOne{
 public:
 	int fn(int i, int j, int x, int y){
 		int ans=j-i; //calcula la distancia
 		ans=min(j-i, abs( abs(x-i)+1+abs(y-j)));
 		if(x>=i && j>=y && x!=y){
 			ans=x-i+1+j-y;
 		}
 		if(ans==0) ans++;
 		return ans;
 	}
 	vector<int> countOfPairs(int n, int x, int y){
 		vector<int> ans(n);
 		int p=min(x,y);
 		y=max(x,y);
 		x=p;
 		map<int,int> m;
 		for(int i=1; i<=n; i++){
 			for(int j=i+1; j<=n; j++){
 				m[fn(i,j,x,y)]++;
 			}
 		}
 		int j=0;
 		for(auto &i: m){
 			ans[j++]=i.second*2;
 		}
 		return ans;
 	}
/*
Input: n = 5, x = 2, y = 4
Output: [10,8,2,0,0]
*/
 };