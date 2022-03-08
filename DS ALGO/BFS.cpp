#include<iostream>
#include<vector>
#include<queue>
using namespace std;



queue<int> q;
vector<int>v1[10000];
bool visited[10000];
void bfs(int src)
{
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        int vertex=q.front();
        q.pop();
        cout<<vertex<<"->";
        for(int i=0;i<v1[vertex].size();i++)
        {
            if(!(visited[v1[vertex][i]]))
            {
                q.push(v1[vertex][i]);
                visited[v1[vertex][i]]=true;
            }
        }
    }

}

int main()
{
    int v,e;
    cout<<"enter vertice number: ";
    cin>>v;
    cout<<"enter edges: ";
    cin>>e;


    int temp1,temp2;
    for(int i=0;i<e;i++)
    {
        cin>>temp1>>temp2;
        v1[temp1].push_back(temp2);
        v1[temp2].push_back(temp1);

    }
    bfs(0);
    return 0;
}


