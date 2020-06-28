def switch(i, j, k):
    switcher = {
        0: lambda x, y: x * y,
        1: "Monday",
        2: "Tuesday",
        3: "Wednesday"
    }

    return switcher[k](i, j)


print(switch(1, 2, 0))
