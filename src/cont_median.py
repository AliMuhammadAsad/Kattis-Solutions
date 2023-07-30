# if __name__ == "__main__":
#     t = int(input())
#     for _ in range(t):
#         n = int(input())
#         arr = list(map(int, input().split()))
#         meds = 0
#         for i in range(n):
#             tmp = arr[:i + 1]
#             tmp.sort()
#             if i % 2 == 0:
#                 meds += tmp[i // 2]
#             else:
#                 meds += (tmp[i // 2] + tmp[i // 2 + 1]) // 2
#         print(meds)

import heapq as h

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        
        min_heap = []; max_heap = []
        meds = 0

        for i in range(n):
            if not max_heap or arr[i] < -max_heap[0]:
                h.heappush(max_heap, -arr[i])
            else:
                h.heappush(min_heap, arr[i])
            
            if len(max_heap) > len(min_heap) + 1:
                h.heappush(min_heap, -h.heappop(max_heap))
            elif len(min_heap) > len(max_heap):
                h.heappush(max_heap, -h.heappop(min_heap))
            
            if i % 2 == 0: meds += -max_heap[0]
            else: meds += (-max_heap[0] + min_heap[0]) // 2
        
        print(meds)
