#parent class
class Animals:
    def __init__(self, binomial_name, size, color):
        self.binomial_name = binomial_name
        self.size = size
        self.color = color

#child classes
class Mammals(Animals):
    def __init__(self, food_habit, call):
        Animals.__init__(self, binomial_name, size, color)
        self.food_habit = food_habit
        self.call = call
    class Cat:
        def __init__(Mammals):
            Mammals.food_habit = 'omnivorous'
            Mammals.call = 'meaow'
            Mammals.size = 'medium'
            Mammals.color = 'various' 
            Mammals.binomial_name = 'Felis catus'
        def sound(self):
            print(self.call)
    class Dog:
        def __init__(Mammals):
            Mammals.food_habit = 'omnivorous'
            Mammals.call = 'bark'
            Mammals.size = 'medium'
            Mammals.color = 'various' 
            Mammals.binomial_name = 'Canis lupus'
        def sound(self):
            print(self.call)
    class Mouse:
        def __init__(Mammals):
            Mammals.food_habit = 'carnivorous'
            Mammals.call = 'squeak'
            Mammals.size = 'small'
            Mammals.color = 'grey'
            Mammals.binomial_name = 'Mus musculus'
        def sound(self):
            print(self.call)
    class Human:
        def __init__(Mammals):
            Mammals.food_habit = 'omnivorous'
            Mammals.call = 'various'
            Mammals.size = 'large'
            Mammals.color = 'skin'
            Mammals.binomial_name = 'Homo Sepians' 
        def sound(self):
            print(self.call)

class Birds(Animals):
    def __init__(self, bird_type, call):
        Animals.__init__(self, binomial_name, size, color)
        self.bird_type = bird_type
        self.call = call
    class Crow:
        def __init__(Birds):
            Birds.bird_type = 'arboreal'
            Birds.call = 'craw'
            Birds.size = 'medium'
            Birds.color = 'black'
            Birds.binomial_name = 'Corvus Splendens'
        def Sound(self):
            print(self.call)
    class Egret:
        def __init__(Birds):
            Birds.bird_type = 'waterbird'
            Birds.call = 'croak'
            Birds.size = 'medium'
            Birds.color = 'white'
            Birds.binomial_name = 'Egretta garzetta'
        def Sound(self):
            print(self.call)
    class Kite:
        def __init__(Birds):
            Birds.bird_type = 'raptor'
            Birds.call = 'whistle'
            Birds.size = 'large'
            Birds.color = 'brown'
            Birds.binomial_name = 'Milvus migrans'
        def Sound(self):
            print(self.call)

class Insects(Animals):
    def __init__(self, canfly):
        Animals.__init__(self, binomial_name, size, color)
        self.canfly = canfly
    class Butterfly:
        def __init__(Insects):
            Insects.canfly = 'yes'
            Insects.size = 'large'
            Insects.color = 'various'
            Insects.binomial_name = 'Euploea core'
    class Mosquito:
        def __init__(Insects):
            Insects.canfly = 'yes'
            Insects.size = 'small'
            Insects.color = 'black'
            Insects.binomial_name = 'Aedes aegypti'

class Amphibians(Animals):
    def __init__(self):
        Animals.__init__(self, binomial_name, size, color)
    class Frog:
        def __init__(Amphibians):
            Amphibians.size = 'small'
            Amphibians.color = 'green'
            Amphibians.binomial_name = 'Rana temporaria'

#playing with the classes
human = Mammals.Human()
human.sound()
crow = Birds.Crow()
print("Crow is an", crow.bird_type, "bird.")
butterfly = Insects.Butterfly()
print("Butterfly is", butterfly.size, "in size.")
frog = Amphibians.Frog()
print("Frog is", frog.color, "in colour.")