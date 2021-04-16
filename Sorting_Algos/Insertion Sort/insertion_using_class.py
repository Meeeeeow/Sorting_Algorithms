# -*- coding: utf-8 -*-
"""
Created on Fri Apr 16 15:13:15 2021

@author: User
"""

class insertion:
    def __init__(self, my_list , s):
        self.my_list = my_list;
        self.s = s;

    def input_list(self):
        for _ in range(self.s):
            self.my_list.append(int(input("Enter item ")));
        return self.my_list;
    
    def print_list(self):
        print(' '.join([str(i) for i in self.my_list]));
    
    def insertion_sort(self,my_list,s):
        for i in range(1,s):
            for j in range(0,i):
                if my_list[j] > my_list[i]:
                    index = i;
                    key = my_list[index];
                    while index > j:
                        my_list[index] = my_list[index - 1];
                        index-= 1;
                    my_list[j] = key;

my_list=[];
i =insertion(my_list, int(input('Enter array size: ')));
my_list = i.input_list();
print('Before sorting:');
i.print_list()
i.insertion_sort(my_list, len(my_list));
print('After sorting: ');
i.print_list();