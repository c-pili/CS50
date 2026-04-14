

from cs50 import get_string
import math

text = get_string("text: ")
sentence = 0
word = 1
n = len(text)
letter = 0

for i in range(n):
    if text[i] == ' ':
        word += 1

    elif(text[i] == '.') | (text[i] == '!') | (text[i] == '?'):
        sentence += 1

    elif (text[i].isalpha()):
        letter +=1

r = (0.0588 * (letter/word)*100) - 0.296 * ((sentence/word)*100) - 15.8
r = round(r)

#print("sentence",sentence)
#print("word:",word)
#print("letter:",letter)

if r <= 0:
    print("Before Grade 1")

elif r >= 16:
    print("Grade 16+")

else:
    print("Grade", r)
