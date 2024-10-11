"""

take three block if it space is enough or two two block if space is not enough. 
horizontally fill first then vertically fill

"""

def game(grid):
    res = "Jhinuk"

    for i in range(len(grid[0])):
        # implementation plan
        res = "Grandma" if res == "Jhinuk" else "Jhinuk"
         
    return res 


