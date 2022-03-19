#include<iostream>
#include<vector>
using namespace std;
const int N=1e4;
vector<int > List[N];
vector<int> visited(N);




void dfs(int vertex)
{
    visited[vertex]=true;
    cout<<vertex<<"->";

    for(int i=0;i<List[vertex].size();i++)
    {
        if(!visited[List[vertex][i]])dfs(List[vertex][i]);
    }
}
int main()
{
    int v,e;
    cin>>v>>e;
    int v1,v2;
    for(int i=0;i<e;i++)
    {
        cin>>v1>>v2;
        List[v1].push_back(v2);
        List[v2].push_back(v1);
    }
    dfs(0);

}
