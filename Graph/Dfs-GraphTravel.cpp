
#include <iostream>
#include<vector>
#include<stack>
using namespace std;

int main() {
   int n,m;
   cin>>n>>m;
   
   vector<int>adj[n+1];
   for(int i = 0;i<m;i++){
       int u,v;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
   }
   
   stack<int>st;
   vector<int>v(n+1,0);
   
   st.push(1);
   v[1] = 1;
   while(!st.empty()){
       
       int node = st.top();
       st.pop();
       cout<<node;
       for(auto it :adj[node]){
           if(!v[it]){
               st.push(it);
               v[it] = 1;
           }
       }
   }
   
    

    return 0;
}