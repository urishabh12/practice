n = int(input())
adjacency = []
visited = [False]*n
for i in range(n):
    adjacency.append(list(map(int, input().split())))


def dfs(at):
    if visited[at]:
        return
    print(at)
    visited[at] = True
    neighbours = adjacency[at]
    for i in neighbours:
        dfs(i)


print("-------------")
dfs(0)
