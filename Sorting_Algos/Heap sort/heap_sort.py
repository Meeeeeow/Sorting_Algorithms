# -*- coding: utf-8 -*-
"""
Created on Mon Apr 26 20:44:19 2021

@author: User
"""

class HeapSort:
    def __init__(self,my_list,x):
        self.my_list = my_list;
        self.x = x;
    
    
    def create_list(self):
        for i in range(self.x):
            self.my_list.append(int(input('Enter item: ')));
        return self.my_list;
    
    
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
        
    
    
    def max_heapify(self,my_list,i,s):
        left = lambda i : i * 2;
        right = lambda i : (i * 2) + 1;
        l = left(i);
        r = right(i);
        if l <= s and my_list[l - 1] > my_list[i - 1]:
            largest = l;
        else:
            largest = i;
        if r <= s and my_list[r - 1] > my_list[largest - 1]:
            largest = r;
        if largest != i:
            my_list[largest - 1],my_list[i - 1] = my_list[i - 1],my_list[largest - 1];
            self.max_heapify(my_list,largest,s);
    
        
    def build_max_heap(self,my_list):
        #tree height
        
        for i in range(len(my_list) // 2,0,-1):
            self.max_heapify(my_list,i,len(my_list));
            
            
    def heapsort(self):
        self.build_max_heap(self.my_list);
        #print heap
        print('max or min heap is: ');
        self.print_list();
        #sort the max or min heap(here max)
        size = len(self.my_list);
        for i in range(size,1,-1):
            self.my_list[0],self.my_list[size - 1] = self.my_list[size - 1],self.my_list[0];
            size -= 1;
            self.max_heapify(self.my_list, 1, size);

my_list=[];            
h = HeapSort(my_list, int(input('Enter size of list: ')));       
my_list = h.create_list();
print('before sorting: ');
h.print_list();
h.heapsort();
print('after sorting: ');
h.print_list();    
    