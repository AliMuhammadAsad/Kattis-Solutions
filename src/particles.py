import heapq

def charge(n, charges):
    pq = []
    for charge in charges:
        heapq.heappush(pq, charge)
    
    while len(pq) > 1:
        smallest = heapq.heappop(pq)
        if len(pq) > 0:
            adjacent = heapq.heappop(pq)
            combined = smallest + adjacent
            heapq.heappush(pq, combined)
    
    return pq[0]

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        lst = list(map(int, input().split()))
        print(charge(n, lst))
        t -= 1