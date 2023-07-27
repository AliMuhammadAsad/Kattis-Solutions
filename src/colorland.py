def mind(n, colors):
    start = colors[0]
    target = colors[-1]
    q = [(0, 0)]
    visited = {0} #set
    while q:
        curr, drawsYet = q.pop(0)
        if curr == n:
            return drawsYet
        toFind = colors[curr + 1]
        if toFind == target:
            return drawsYet + 1
        for i in range(len(colors)):
            if colors[i] == toFind and i not in visited:
                visited.add(i)
                q.append((i, drawsYet + 1))
    return -1


if __name__ == "__main__":
    n = int(input())
    colors = [input().strip().capitalize() for _ in range(n)]
    print(mind(n, colors))
