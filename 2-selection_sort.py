#!/bin/usr/python3

def selection_sort(array, size):
    for h in range(0, size-1):
        min_val = array[h]
        for i in range(h, size):
            if array[i] < min_val:
                min_val = array[i]
                tmp_idx = i
                changed = True
        tmp = array[h]
        array[h] = min_val
        array[tmp_idx] = tmp
        if changed:
            print(array)
            changed = False


array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
n = len(array)
print(array)
print('')
selection_sort(array, n)
print('')
print(array)
