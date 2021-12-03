#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#   this is just me learning python
#   you may or may not do whatever you want with this file and knowledge
#   but thou shalt have no respect for python beeth it shit
#   thou shalt pray for assembly for it is the almighty
#   ------------------long live c------------------
#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

import math                               #imports a module (like '#include') --- math is a default build-in module
from math import pi as thatConst
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


