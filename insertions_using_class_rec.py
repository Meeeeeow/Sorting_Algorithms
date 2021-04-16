# -*- coding: utf-8 -*-
"""
Created on Fri Apr 16 15:28:20 2021

@author: User
"""

class insertion_rec:
    def __init__(self,my_list,s):
        self.my_list = my_list;
        self.s = s;
    def input_list(self):
        for _ in range(self.s):
            self.my_list.append(int(input('Enter item: ')));
        return self.my_list;
    
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
    
    def recursion(self,my_list,s):
        if s == 1:
            return;
        self.recursion(my_list, s -1);
        key = my_list[s - 1];
        j = s - 2;
        while j >= 0 and my_list[j] > key:
            my_list[j + 1] = my_list[j];
            j -= 1;
        my_list[j + 1] = key;
my_list =[];
i = insertion_rec(my_list, int(input('Enter array size: ')));
my_list = i.input_list();
print('Before sorting: ');
i.print_list();
i.recursion(my_list, len(my_list));
print('After sorting: ');
i.print_list();

        