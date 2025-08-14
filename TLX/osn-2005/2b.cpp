#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<vector<int>> maze(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> maze[i][j];
        }
    }

    int start_row, start_col; 
    cin >> start_row >> start_col;
    start_row--;
    start_col--;

    queue<pair<int, int>> q;

    vector<vector<int>> dist(N, vector<int>(M, 0));

    q.push({start_row, start_col});
    dist[start_row][start_col] = 1;

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while (!q.empty()) {
        pair<int, int> current = q.front();
        q.pop();
        int current_row = current.first;
        int current_col = current.second;

        if (current_row == 0 || current_row == N - 1 || current_col == 0 || current_col == M - 1) {
            cout << dist[current_row][current_col] << endl;
            return 0; 
        }

        for (int i = 0; i < 4; ++i) {
            int next_row = current_row + dr[i];
            int next_col = current_col + dc[i];

            if (next_row >= 0 && next_row < N && next_col >= 0 && next_col < M &&
                maze[next_row][next_col] != -1 && dist[next_row][next_col] == 0) {
                
                dist[next_row][next_col] = dist[current_row][current_col] + 1;
                q.push({next_row, next_col});
            }
        }
    }
}