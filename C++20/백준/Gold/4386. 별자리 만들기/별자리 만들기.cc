//실험용 Chat GPT 코드입니다
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <tuple>

using namespace std;

// 유니온-파인드 구조체
struct UnionFind {
    vector<int> parent, rank;

    UnionFind(int n) {
        parent.resize(n);
        rank.resize(n, 1);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] = find(parent[x]);  // 경로 압축
    }

    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX != rootY) {
            if (rank[rootX] > rank[rootY]) {
                parent[rootY] = rootX;
            }
            else if (rank[rootX] < rank[rootY]) {
                parent[rootX] = rootY;
            }
            else {
                parent[rootY] = rootX;
                rank[rootX]++;
            }
            return true;
        }
        return false;
    }
};

// 두 점 사이의 거리를 계산하는 함수
double distance(pair<double, double>& a, pair<double, double>& b) {
    return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int main() {
    int n;
    cin >> n;

    vector<pair<double, double>> stars(n);
    for (int i = 0; i < n; i++) {
        cin >> stars[i].first >> stars[i].second;
    }

    vector<tuple<double, int, int>> edges;

    // 모든 별들 간의 거리(간선)를 계산
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dist = distance(stars[i], stars[j]);
            edges.push_back({ dist, i, j });
        }
    }

    // 간선들을 거리 순으로 정렬
    sort(edges.begin(), edges.end());

    UnionFind uf(n);
    double totalCost = 0;

    // 크루스칼 알고리즘: 최소 비용 간선부터 차례로 선택
    for (auto& edge : edges) {
        double cost;
        int u, v;
        tie(cost, u, v) = edge;

        if (uf.unite(u, v)) {
            totalCost += cost;
        }
    }

    // 결과 출력
    printf("%.2f\n", totalCost);

    return 0;
}
