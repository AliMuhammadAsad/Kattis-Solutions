if __name__ == "__main__":
    n = int(input())
    md = {"v": n}
    for _ in range(n):
        d = md; val = 0
        word = input()
        for w in word:
            if w not in d:
                d[w] = {"v": 1}
            d = d[w]; d["v"] = d["v"] + 1
            val = d["v"]
        print(val - 2)

# This implementation uses dictionaries to create a sorta trie like structure, but since there is not one particular word and the number of words varies, we create one dictionary acting like a trie structure storing the values along the way