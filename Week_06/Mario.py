########################################################################
#                       Week 6 : Mario                                 #
#                                                                      #
#    Implement a program in C that prompts the user for their name     #
#                and then says hello to that user.                     #
########################################################################

from cs50 import get_int

height = 0
while height <= 0 or height >= 9:
    height = get_int("Height: ")

for i in range(height):
    print(" " * (height-i-1), end="")

    print("#" * (i+1), end="")

    print(" "*2, end="")

    print("#" * (i+1), end="")

    print("")


