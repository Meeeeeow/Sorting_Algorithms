# -*- coding: utf-8 -*-
"""
Created on Fri Apr 16 20:46:11 2021

@author: User
"""

class merge_sort:
    def __init__(self,my_list,x):
        self.my_list = my_list;
        self.x = x;
    def input_list(self):
        for _ in range(self.x):
            self.my_list.append(int(input('Enter item: ')));
        return self.my_list;
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
    def mergesort(self,my_list,l,r):
        if l < r:
            mid = l + (r - l) // 2;
            self.mergesort(my_list, l, mid);
            self.mergesort(my_list, mid + 1, r);
            self.merge(my_list,l,mid,r);
    def merge(self,my_list,l,m,r):
        n1 = m - l + 1;
        n2 = r - m;
        L = [];
        R = [];
        for i in range(n1):
            L.append(my_list[l + i]);
        for i in range(n2):
            R.append(my_list[m + 1 + i]);
        i,j,k = [0,0,l];
        while i < n1 and j < n2:
            if L[i] < R[j]:
                my_list[k] = L[i];
                i+=1;
                k+=1;
            else:
                my_list[k] = R[j];
                j+=1;
                k+=1;
        while i < n1:
            my_list[k] = L[i];
            i+=1;
            k+=1;
        while j < n2:
            my_list[k] = R[j];
            j+=1;
            k+=1;
my_list=[];
n = int(input('Enter array size: '));
m = merge_sort(my_list, n);
my_list = m.input_list();
print('Before sorting: ');
m.print_list();
m.mergesort(my_list, 0, n -1);
print('After sorting: ');
m.print_list();
            
        