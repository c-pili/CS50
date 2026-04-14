

from cs50 import get_int
import sys

number = get_int("Number: ")
n_temp = number
n = 0
resulat = 0
l = 0
n1 = 0
n2 = 0
code1 = 0
code2 = 0

while(n_temp != 0): 
    n_temp //= 10
    n += 1

if n < 13 or n > 16: 
    print("INVALID")
    sys.exit()

else:
    compteur1 = 10
    compteur2 = 10
    while(compteur1 < (10 ** (n+1))):
        resultat = number % compteur1
        if compteur1 != 10:
            resultat //= compteur2
            compteur2 *= 10

        if(l == (n-1)):
            n1 = resultat

        elif(l == (n-2)):
            n2 = resultat

        if(l % 2 != 0):
            temp = resultat * 2
            if temp >= 10:
                temp2 = temp % 10
                temp3 = (temp % 100)// 10
                code1 += temp2 + temp3

            else:
                code1 += temp

        else:
            code2 += resultat

        l += 1
        compteur1 *= 10

    code1 += code2
    code1 = code1 % 10

    if (code1 == 0):
        match n1:
            case 5:
                match n2:
                    case 1 | 2 | 3 | 4 | 5:
                        print("MASTERCARD")

                    case _:
                        print("INVALID")
                        sys.exit()

            case 3:
                match n2:
                    case 4 | 7:
                        print("AMEX")
                    case _:
                        print("INVALID")
                        sys.exit()

            case 4:
                print("VISA")

            case _:
                print("INVALID")
                sys.exit()

    else:
        print("INVALID")
        sys.exit()



