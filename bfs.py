from collections import deque
n = int(input())
adj = []
for i in range(n):
    adj.append(list(map(int, input().split())))
visited = [False]*n


def bfs(at, to):
    q = deque()
    visited[at] = True
    q.append(at)
    while(len(q) > 0):
        ele = q.popleft()
        print(ele)
        for i in adj[ele]:
            if i == to:
                print(to)
                q.clear()
                break
            if visited[i] == False:
                visited[i] = True
                q.append(i)


bfs(0, 6)
