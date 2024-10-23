#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int MAX = 100'001;

queue<int> q;
bool visited[MAX];
int cnt;

void bfs(vector<int> graph[], int source)
{ // graph는 인접 리스트, source는 시작 노드
    // source 방문
    q.push(source);
    visited[source] = true;

    while (!q.empty()) { // 큐가 빌 때까지 반복
        // 큐에서 노드를 하나 빼 온다. 이 노드를 current라고 하자.
        int current = q.front();
        q.pop();

        for (int next : graph[current]) { // current의 인접 노드들을 확인한다. 이 각각의 노드를 next라고 하자.
            if (!visited[next]) { // 만일 next에 방문하지 않았다면
                // next 방문
                q.push(next);
                visited[next] = true;
                cnt++;
            }
        }
    }
}

int main(void)
{
	queue<int> q;
	int n;
	cin >> n; // com
    vector<int>* graph = new vector<int>[n];
    int t, a, b;
	cin >> t;
    int tmp;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }
    bfs(graph, 0);
    cout << cnt;
}