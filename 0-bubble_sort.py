#!/bin/usr/python3

def bubble_sort(array, size):
    while size:
        for i in range(size-1):
            l = array[i]
            r = array[i + 1]
            if r < l:
                array[i] = r
                array[i + 1] = l
                print(array)
        size -= 1

array = [19, 48, 99, 71, 13, 52, 96, 73, 86, 7]
n = len(array)
print(array)
print('')
bubble_sort(array, n)
print('')
print(array)
