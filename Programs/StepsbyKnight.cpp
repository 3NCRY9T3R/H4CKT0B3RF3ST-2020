// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

int minStepToReachTarget(int *, int *, int);

int main() {
    // size of square board
    int t;
    cin >> t;
    while (t--) {
        int N;
        int a, b, c, d;
        cin >> N;
        cin >> a >> b;
        cin >> c >> d;
        int knightPos[] = {a, b};
        int targetPos[] = {c, d};
        cout << minStepToReachTarget(knightPos, targetPos, N) << endl;
    }
    return 0;
}
// KnightPos : knight position coordinates
// targetPos : target position coordinated
// N : square matrix size


int minStepToReachTarget(int kp[], int tp[], int N) {
if(kp[0]==tp[0] && kp[1]==tp[1])
return 0;
int visted[N+1][N+1]={0};
visted[kp[0]][kp[1]]=1;
queue<pair<int,int>>q;
q.push(pair<int,int>(kp[0],kp[1]));
int rr[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int cc[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
    while(!q.empty())
    {
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=0;i<8;i++)
        {
            int nextr=r+rr[i];
            int nextc=c+cc[i];
             if (nextr < 1 || nextc < 1 || nextr > N || nextc > N) continue;
            if (visted[nextr][nextc] != 0) continue;
           
           if (nextr == tp[0] && nextc == tp[1])
                return visted[r][c];
                
                visted[nextr][nextc] = visted[r][c] + 1;
            q.push(pair<int, int>(nextr, nextc));
        }
