def merge_sort(lst):
    if len(lst) > 1:
        mid = len(lst) // 2 #mid of the list
        left, right = lst[:mid], lst[mid:] #dividing the list into two halves
        merge_sort(right), merge_sort(left) #sorting the two halves
        i = j = k = 0
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                lst[k] = left[i]
                i += 1
            else:
                lst[k] = right[j]
                j += 1
            k += 1
        while i < len(left):
            lst[k] = left[i]
            i += 1
            k += 1
        while j < len(right):
            lst[k] = right[j]
            j += 1
            k += 1
    return lst

if __name__ == "__main__":
    n = int(input())
    while(True):
        lst = []
        for i in range(n):
            lst.append(input())
        lst = merge_sort(lst)
        for i in lst:
            print(i)
        n = int(input())
        if n == 0: break
        print()