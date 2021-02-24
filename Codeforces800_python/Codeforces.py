#!/usr/bin/env python
# coding: utf-8

# In[ ]:


print('Hello');


# In[ ]:


weight = int(input());
if weight % 2 == 0:
    for w in range(2,int(weight/2)+2,2):
        print('YES') if (weight - w) % 2 == 0 and (weight - w) != 0 else print('NO');
        break;
        
else:
    print('NO');


# In[ ]:


weight = int(input());
print('YES') if weight % 2 == 0 and weight > 2 else print('NO');


# In[ ]:


num = int(input());
i = 1;
while i<= num:
    word = input()
    if len(word)>10:
        print(word[0],len(word)-2,word[-1],sep='');
    else:
        print(word);
    i+=1;
        


# In[44]:


num = int(input());
count = 0;
for i in range(num):
   prblm_slv=[int(x) for x in input().split()];
   if prblm_slv.count(1)> 1:
        count += 1;
print(count);        
    


# In[ ]:




