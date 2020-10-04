"""
Class is the blueprint of object
Object is the instance of class
"""


# Example 1:
class operation:
    def __init__(self):
        print("It contains different mathematical concepts")

    def addition(self, x, y):
        return x + y

    def substraction(self, p, q):
        return p - q


a = 15
b = 20
add = operation()
minus = operation()
print("Sum of a and b is", add.addition(a, b))
print("Difference of a and b is", minus.substraction(a, b))


# **********************************************************************************************************************
# Example 2
class information:
    def __init__(self, name, address, age):
        self.name = name
        self.address = address
        self.age = age

    def get_info(self):
        return (f"Student name is {self.name}; address is {self.address}; and age is {self.age}")


ram = information("Ram", "Delhi", 15)
shyam = information("Shyam", "Kathmandu", 16)
print(ram.get_info())
print(shyam.get_info())


# **********************************************************************************************************************
# Example 3
class Compute:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

    def operation(self):
        return (self.x + self.y + self.z, self.x - self.y - self.z)


digits = Compute(3, 2, 1)
print(digits.operation())


# **********************************************************************************************************************
# Example 4 : Changing the objects
class Just_Change:
    def __init__(self):
        self.name = "Prabin"
        self.age = 19
        self.location = "Butwal"


x = Just_Change()
y = Just_Change()
print(x.name)  # Prints Prabin
"""
Types of Variables in Class:
1.Class(Static) Variable
2.Instance Variable
"""


# Example 1:
class Car:
    wheel = 4  # Class(Static) Variable

    def __init__(self):
        self.company = "BMW"  # Instance Variable
        self.price = "10,00,000"  # Instance Variable


my_car = Car()
my_frnd_car = Car()
my_frnd_car.company = "Farrari"
my_frnd_car.price = "20,00,000"
my_car.extra_info = "Made in America"
my_frnd_car.extra_info = "Made in India"
print(my_car.company, my_car.price, my_car.wheel, my_car.extra_info)
print(my_frnd_car.company, my_frnd_car.price, my_frnd_car.wheel, my_frnd_car.extra_info)
# **********************************************************************************************************************
"""
Types of methods
1.Instance Method- 
                 1.Accessor Method : Used when we only need to access the value
                 2.Mutator Method: Used when we required to set or change the value
2.Class Method
3.Static Method
"""


# Example 2: Instance Method
class value:
    def __init__(self, p):
        self.p = p

    def get(self):  # Instance Method - Accessor Method
        return self.p

    def set(self, set_to):  # Instance Method - Mutator Method
        self.p = set_to


first = value(1)
second = value(2)
print(first.p)
print(second.p)
first.set(11)
second.set(22)
print(first.p)
print(second.p)


# **********************************************************************************************************************
# Example 3: Class method
class Employee:
    dress_code = 'white shirt and black pant'  # Class or Static Variable

    def __init__(self):
        self.employee_id = 0000
        self.employee_address = '0000'

    @classmethod
    def get_dress_code(cls):  # Class method - working with class variable
        return cls.dress_code

    @staticmethod
    def random_operation():
        print("Welcome to this company")


employ1 = Employee()
employ1.employee_id = 23456
employ1.employee_address = 'Delhi'
print(employ1.employee_id)
print(employ1.employee_address)
print(Employee.get_dress_code())  # Calling the class method
Employee.random_operation()  # Calling the static method

# **********************************************************************************************************************
"""
Class inside the class
"""


class Employ:
    def __init__(self, name, address, age, brand, CPU, ram):
        self.name = name
        self.address = address
        self.age = age
        self.lap = self.laptop(brand, CPU, ram)

    def get_info(self):
        print(f"Employ name is {self.name}; Address is {self.address} and age is {self.age}")
        self.lap.get_info()

    class laptop:
        def __init__(self, brand, CPU, ram):
            self.brand = brand
            self.cpu = CPU
            self.ram = ram

        def get_info(self):
            print(f"Laptop is of {self.brand} having CPU {self.cpu} and Ram Storage {self.ram}")


Employ1 = Employ("Prabin", "Butwal", 19, 'HP', "i5", "8-GB")
Employ1.get_info()

# **********************************************************************************************************************
"""
Inheritance, Use of Constructor and MRO (Method Resolution Order)
"""


class ten:
    def __init__(self):
        print("This is class ten")

    def get_result_10(self):
        print("You got 3.7 GPA in Grade 10")


class eleven(ten):  # Single level Inheritance
    def __init__(self):
        print("This is class Eleven")

    def get_result_11(self):
        print("You got 3.11 GPA in Grade 11")


class twelve(eleven, ten):  # Multiple Inheritance
    def __init__(self):
        super().__init__()
        print("This is class Twelve")

    def get_result_12(self):
        print("You got 3.27 GPA in Grade 12")


my_result = twelve()
my_result.get_result_10()
my_result.get_result_11()
my_result.get_result_12()
# **********************************************************************************************************************
print(y.name)  # Prints Prabin
y.name = "Kumar"
print(y.name)  # Prints Kumar
print(x.name)  # Prints Prabin


# **********************************************************************************************************************
#  Example 5: Comparing two objects
class Value:
    def __init__(self):
        self.x = 50
        self.y = 60

    def compare(self, other):
        if (self.x == other.x):
            return True
        else:
            return False


a = Value()
b = Value()
if a.compare(b) == True:
    print("They are same")  # This line is executed
else:
    print("They are different")
# Changing the value of x for object b and then executing the same thing
b.x = 70
if a.compare(b) == True:
    print("They are same")
else:
    print("They are different")  # This line is executed
# **********************************************************************************************************************
"""
Types of Variables in Class:
1.Class(Static) Variable
2.Instance Variable
"""


# Example 1:
class Car:
    wheel = 4  # Class(Static) Variable

    def __init__(self):
        self.company = "BMW"  # Instance Variable
        self.price = "10,00,000"  # Instance Variable


my_car = Car()
my_frnd_car = Car()
my_frnd_car.company = "Farrari"
my_frnd_car.price = "20,00,000"
my_car.extra_info = "Made in America"
my_frnd_car.extra_info = "Made in India"
print(my_car.company, my_car.price, my_car.wheel, my_car.extra_info)
print(my_frnd_car.company, my_frnd_car.price, my_frnd_car.wheel, my_frnd_car.extra_info)
# **********************************************************************************************************************
"""
Types of methods
1.Instance Method- 
                 1.Accessor Method : Used when we only need to access the value
                 2.Mutator Method: Used when we required to set or change the value
2.Class Method
3.Static Method
"""


# Example 2: Instance Method
class value:
    def __init__(self, p):
        self.p = p

    def get(self):  # Instance Method - Accessor Method
        return self.p

    def set(self, set_to):  # Instance Method - Mutator Method
        self.p = set_to


first = value(1)
second = value(2)
print(first.p)
print(second.p)
first.set(11)
second.set(22)
print(first.p)
print(second.p)


# **********************************************************************************************************************
# Example 3: Class method
class Employee:
    dress_code = 'white shirt and black pant'  # Class or Static Variable

    def __init__(self):
        self.employee_id = 0000
        self.employee_address = '0000'

    @classmethod
    def get_dress_code(cls):  # Class method - working with class variable
        return cls.dress_code

    @staticmethod
    def random_operation():
        print("Welcome to this company")


employ1 = Employee()
employ1.employee_id = 23456
employ1.employee_address = 'Delhi'
print(employ1.employee_id)
print(employ1.employee_address)
print(Employee.get_dress_code())  # Calling the class method
Employee.random_operation()  # Calling the static method
