#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#   this is just me learning python
#   you may or may not do whatever you want with this file and knowledge
#   but thou shalt show no hope for python is shit
#   thou shalt pray for assembly for it is the almighty
#   ------------------long live the c------------------
#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

import math                               #imports a module (like '#include') --- math is a default build-in module
from math import pi as thatConst
from turtle import st
from typing import List          #imports the variable pi from the module math as the name thatConst
import module as myOtherFile



variable = 0           #variable decleration
str(variable)          #converts variable to string and returns that
"""
    str(), int(), float()  
"""

print(thatConst)                    #outputs pi in console
name = input("what's your name \n") #waits for user input and returns it
print("fuck you " + name)

myList = ["hmm", 4.9, False, 'fuck']  #lists :)
myList[3] = 'no'                      #changing the value of an item
#print(myList[0])                      #printing shit
"""
    myList.extend(adds another list to this list); 
    myList.append(adds another item to the end of the list)
    myList.insert(index, item to be inserted at that position other items are pushed)
    myList.remove(searches for an item and removes it)
    myList.clear(deletes all items)
    myList.pop(removes the last item)
    myList.index(returns the index of a value in the list)
    myList.count(how many times a valuse shows up inside the list)
    myList.sort(sorts the list in ascending order?)
    myList.reverse(reverses the order of a list)
    myList.copy()
"""
myTuple = (4, 5, 9)             #lists but bad [not editable >:-(]

#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
print(myOtherFile.func(3))     #MAGICK

k = input("choose an operation: ")

#if else statements
if k == "maximum":
    myOtherFile.maxnum()
elif k == "calculate":
    myOtherFile.calc()
else:
    print("wtf do you want")
#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


#The almighty four 🙏

#Lists  ---a collection which is ordered and changeable. Allows duplicate members.---
myList = ["hmm", 4.9, False, 'fuck']  #lists :)
myList[3] = 'no'                      #changing the value of an item
#print(myList[0])                      #printing shit
"""
    myList.extend(adds another list to this list); 
    myList.append(adds another item to the end of the list)
    myList.insert(index, item to be inserted at that position other items are pushed)
    myList.remove(searches for an item and removes it)
    myList.clear(deletes all items)
    myList.pop(removes the last item)
    myList.index(returns the index of a value in the list)
    myList.count(how many times a valuse shows up inside the list)
    myList.sort(sorts the list in ascending order?)
    myList.reverse(reverses the order of a list)
    myList.copy()
"""

#Tuples  ---a collection which is ordered and unchangeable. Allows duplicate members.---
myTuple = (4, 5, 9)              #lists but bad [not editable >:-(]

#Dictionaries  ---a collection which is ordered*, changeable and do not allow duplicates.---
dic = {'name': 'john', 'age': 22, "married": False}

#Sets  ---a collection which is unordered, unchangeable*, and unindexed. No duplicate members.---
settu = {"name", 57, 'cats', False}

#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#while loop
i=1
while i<=10:
    print(i); i+=1

#for loop :)
for i in range(1, 11):
    print(i)



#2d lists and nested loops:
listo = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
    [0]
]

for row in listo:
    for col in row:
        print(col)

#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#neat
try:
    print(int("hi"))
except ValueError as err:
    print(err)
#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#files and stuff you can figure it out
fileo = open('file.txt', 'r')      #r for read, w for write, a for apend, r+ for read&write, w+ for write&read, a+ for append&read
                                   #for some reason both w+ and r+ didn't work so I just used regular r and w here
lineo = fileo.readlines()
print(fileo.readlines())
ao = str(int(lineo[1]) + 1)
print("this programme has been runned " + ao + " times since it was written.")
lineo[1] = ao + "\n"
co = ""
for bo in lineo:
    co = co + bo

fileo.close()

fileu = open('file.txt', 'w'); fileu.write(co); fileu.close();

#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





