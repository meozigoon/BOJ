#include<iostream>
#include<vector>
#include<algorithm>
#include<tuple>
#include<numeric>
using namespace std;
vector<int>link;
int find(int x){if(x!=link[x])link[x]=find(link[x]);return link[x];}
bool same(int a,int b){return(find(a)==find(b));}
void unite(int a, int b){a=find(a);b=find(b);if(a<b)swap(a,b);link[b]=a;return;}
int main(void){ios::sync_with_stdio(false);cin.tie(NULL),cout.tie(NULL);
int n;cin>>n;int a,b;long long w;long long ans=0;vector<tuple<long long,int,int>>g;
vector<pair<long long,long long>>p(n);link.resize(n);iota(link.begin(),link.end(),0);
for(int i=0;i<n;i++)cin>>p[i].first>>p[i].second;
for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(i!= j){w=(p[i].first-p[j].first)*(p[i].first-p[j].first)+(p[i].second-p[j].second)*(p[i].second-p[j].second);g.push_back({w,i,j});}
sort(g.begin(),g.end());
for(auto&i:g){tie(w,a,b)=i;if(!same(a,b)){unite(a,b);ans=max(ans,w);}}
cout<<ans;
return 0;}