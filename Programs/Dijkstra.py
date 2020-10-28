from heapq import heapify,heappop,heappush
#from sys import stdin, stdout
infinity = 99999999999999

vertice, edge = [int(_) for _ in stdin.readline().split()]

graph = [[] for _ in range(vertice)]

d = [0] + [infinity] * vertice 
p = [-1] * vertice 
q = [(0, 0)]
for _ in range(edge):
    u, v, weight = map(int, input().split())
    graph[u-1] += [(weight, v-1)]
    graph[v-1] += [(weight, u-1)]
while q:
    u = heappop(q)[1]
    for e in graph[u]:
        t, v = d[u] + e[0], e[1];
        if t < d[v]:
            d[v], p[v] = t, u
            heappush(q, (d[v], v))
if d[vertice-1] == infinity:
    print(-1)
else:
    x, a = vertice - 1, []
    while x != -1:
        a += [x + 1]
        x = p[x]
    a.reverse()
    print(' '.join(map(str, a)))
