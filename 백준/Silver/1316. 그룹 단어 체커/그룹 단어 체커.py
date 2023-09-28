from typing import Sequence

def group_word(a: Sequence):
    word_copy = []
    d = a[0]
    for i in range(1, len(a)):
        if d == a[i]:
            continue
        for j in word_copy:        
            if a[i] == j: return 0
        if d != a[i]:
            word_copy.append(d)
            d = a[i]
    else: return 1

if __name__ == '__main__':
    N = int(input())
    counter = 0
    for _ in range(N):
        word = input()
        counter += group_word(word)

    print(counter)