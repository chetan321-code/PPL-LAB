from turtle import *
import math
import time

#defining classes
class Triangle:
    def __init__(self, side):
        self.side = side
        self.sides = 3
        self.vertices = 3
    def draw(self):
        color('red')
        left(120)
        for i in range(0, 3, 1):
            forward(self.side)
            left(120)
        right(30)

class Square:
    def __init__(self, side):
        self.side = side
        self.sides = 4
        self.vertices = 4
    def draw(self):
        color('orange')
        for i in range(0, 4, 1):
            forward(self.side)
            left(90)

class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth
        self.sides = 4
        self.vertices = 4
    def draw(self):
        color('orange')
        for i in range(0, 4, 1):
            if(i % 2):
                forward(self.breadth)
            else:
                forward(self.length)
            left(90)

class Trapezium:
    def __init__(self, base, height, angle):
        self.base = base
        self.height = height
        self.angle = angle
        self.sides = 4
        self.vertices = 4
    def draw(self):
        color('orange')
        forward(self.base)
        left(180 - self.angle)
        forward(self.height / math.sin(self.angle * math.pi / 180))
        left(self.angle)
        forward(self.base - 2 * self.height / math.tan(self.angle * math.pi / 180))
        left(self.angle)
        forward(self.height / math.sin(self.angle * math.pi / 180))
        left(180 - self.angle)

class Rhombus:
    def __init__(self, side, angle):
        self.side = side
        self.angle = angle
        self.sides = 4
        self.vertices = 4
    def draw(self):
        color('orange')
        forward(self.side)
        left(self.angle)
        forward(self.side)
        left(180 - self.angle)
        forward(self.side)
        left(self.angle)
        forward(self.side)
        left(180 - self.angle)

class Polygon:
    def __init__(self, side, sides):
        self.side = side
        self.sides = sides
    def draw(self):
        color('yellow')
        for i in range(0, self.sides, 1):
            forward(self.side)
            left(180 - (self.sides - 2) * 180 / self.sides)

class Circle:
    def __init__(self, radius):
        self.radius = radius
        self.sides = '∞'
        self.vertices = '∞'
    def draw(self):
        color('green')
        circle(self.radius)

class Star:
    def __init__(self, side, sides):
        self.side = side
        self.sides = sides
    def draw(self):
        color('blue', 'blue')
        begin_fill()
        right(180 + (self.sides - 2) * 90 / self.sides)
        forward(self.side)
        for i in range(0, self.sides - 1, 1):
            right(360 - (self.sides - 2) * 360 / self.sides)
            forward(self.side)
        end_fill()

class Spiral:
    def __init__(self):
        self.sides = '∞'
        self.vertices = '∞'
    def draw(self):
        color("purple")
        for i in range(0, 100, 1):
            forward(1+0.5 * i)
            right(20)

class Cube:
    def __init__(self, side):
        self.side = side
        self.sides = 12
        self.faces = 6
        self.vertices = 8
    def draw(self):
        color("gray")
        forward(self.side)
        left(90)
        forward(self.side)
        left(90)
        forward(self.side)
        left(90)
        forward(self.side)
        left(120)
        forward(self.side / 2)
        left(60)
        forward(self.side)
        left(120)
        forward(self.side / 2)
        left(150)
        forward(self.side)
        left(30)
        forward(self.side / 2)
        left(150)
        forward(self.side)
        left(90)
        forward(self.side)
        left(90)
        forward(self.side)
        left(90)
        forward(self.side)
        left(120)
        forward(self.side / 2)
        left(60)
        forward(self.side)
        left(120)
        forward(self.side / 2)

#calling functions
t1 = Triangle(200)
t1.draw()
time.sleep(1)
clear()

s1 = Square(200)
s1.draw()
time.sleep(1)
clear()

r1 = Rectangle(250, 150)
r1.draw()
time.sleep(1)
clear()

tr1 = Trapezium(200, 50, 60)
tr1.draw()
time.sleep(1)
clear()

rh1 = Rhombus(100, 60)
rh1.draw()
time.sleep(1)
clear()

p1 = Polygon(100, 8)
p1.draw()
time.sleep(1)
clear()

c1 = Circle(100)
c1.draw()
time.sleep(1)
clear()

st1 = Star(100, 9)
st1.draw()
time.sleep(1)
clear()

sp1 = Spiral()
sp1.draw()
time.sleep(1)
clear()

cu1 = Cube(100)
cu1.draw()
time.sleep(1)
clear()

done()

#printing properties
print(t1.sides)
print(s1.sides)
print(r1.sides)
print(tr1.sides)
print(rh1.sides)
print(p1.sides)
print(c1.sides)
print(st1.sides)
print(sp1.sides)
print(cu1.sides)