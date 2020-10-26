# DEfining a function
import turtle
def spiral():
    t=turtle.Turtle()
    t.color("cyan")
    for n in range(100):
       t.forward(n)
       t.right(20)
spiral()  

# without parameter and arguments
def spiral():
    sides = 50
    for n in range(sides):
        t.forward(n)
        t.right(30)

spiral()

# with parameter and arguments
def spiral(sides):
    for n in range(sides):
        t.forward(n)
        t.right(30)

spiral(50)
