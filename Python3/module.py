from math import pow as pwr

#for this shall be a function
def func(var):
    a = "your var is " + str(var)
    return a
#function shall end

def maxnum():
    num1 = input('1st number: ')
    num2 = input('2nd number: ')
    num3 = input('3rd number: ')
    if num1 >= num2:
        print(num1)
    elif num2 >= num3:
        print(num2)
    else:
        print(num3)
    return 0

def calc():
    num1 = input('1st number: ')
    operation = input('operation: ')
    num2 = input('2nd number: ')
    if operation == "+":
        print(float(num1) + float(num2))
    elif operation == "-":
        print(float(num1) - float(num2))
    elif operation == "*":
        print(float(num1) * float(num2))
    elif operation == "/":
        print(float(num1) / float(num2))
    elif operation == "^":
        print(pwr(float(num1), float(num2)))
    else:
        print('tf did you type')
    return 0

#------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#this is a class
class Student:

    def __init__(self, name, major, gpa):
        self.name = name
        self.major = major
        self.gpa = gpa

    def gpaCalc(self, percentage):
        self.gpa = percentage * 0.04        


student1 = Student('John', 'Art', 3.2)  #this is an object with class type Student
student1.gpaCalc(85)
print(student1.gpa)

#inheritance
class ASSTStudent(Student):
    def __init__(self, name, major, gpa, reg):
        super().__init__(name, major, gpa)          #super() refers to the parent class
        self.reg = reg



