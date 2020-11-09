try:
    print(x)
except:
    print("I don't know any x")
finally:
    x = 1
    print("Oh! now I know.")
print('x is ', x)