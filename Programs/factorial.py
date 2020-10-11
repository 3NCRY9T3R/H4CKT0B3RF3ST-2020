class Rectangle(object):
    def __init__(self, l, w):
        self.length = l
        self.width = w
        
    def area(self):
        return self.length*self.width
        
aRectangle = Rectangle(5,12)
print(aRectangle.area())
