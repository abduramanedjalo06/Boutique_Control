# Boutique Control System by Abduramane Djaló 
SB = float(input(" Starting Balance :"))
REV = float(input(" Revenue:"))
EXP = float(input(" Expenses:"))

FB = SB + REV - EXP

if FB > 0:
    print("Positive XOF")
elif FB < 0:
    print("Negative XOF")
else:
    print("Neutral XOF")

