# -*- coding: utf-8 -*-
"""
Created on Sat Apr 17 01:12:21 2021

@author: User
"""
import math;
class selectionsort:
    def __init__(self,my_list,x):
        self.my_list = my_list;
        self.x = x;
        self.value_pos = 0;
    def input_list(self):
        for _ in range(self.x):
            self.my_list.append(int(input('Enter item: ')));
        return self.my_list;
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
    
    def selection(self,my_list,x):
        for i in range(x):
            min_value = math.inf;
            for j in range(i,x):
                if my_list[j] < min_value:
                    min_value = my_list[j];
                    self.value_pos = j;
            my_list[i],my_list[self.value_pos] = my_list[self.value_pos],my_list[i];

my_list=[];
s = selectionsort(my_list, int(input('Enter array size: ')));
my_list = s.input_list();
print('Before sorting: ');
s.print_list();
s.selection(my_list, len(my_list));
print('After sorting: ');
s.print_list();