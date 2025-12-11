x = 1

def show_x():
    print("show_x, x =", x)

def scope_test():
    x = 2  # shadow
    print("inside function, x =", x)

    def inner():
        x = 3
        print("inside block, x =", x)


    inner()
    print("back in function, x =", x)

def static_scoping_example():
    x = 10
    show_x()  # sees the global x, not this one

print("Python Example:")
show_x()
scope_test()
static_scoping_example()