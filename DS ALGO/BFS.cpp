#include<iostream>
#include<vector>
#include<queue>
using namespace std;



queue<int> q;
void bfs(int src)
{

}
int main()
{
    int v,e;
    cout<<"enter vertices number: ";
    cin>>v;
    cout<<"enter edges: ";
    cin>>e;

    vector< vector<int> >v1[10000];
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

