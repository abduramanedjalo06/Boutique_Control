#BOUTIQUE_CONTROL 

print("BOUTIQUE_CONTROL")

SB = float(input("SB:"))
REV = float(input("REV:"))
EXP = float(input("EXP"))

FB = SB + REV - EXP
print("\nO Saldo Final é:\n", FB)
print("XOF")

if FB > 0:
    print("BALANÇO POSITIVO")
    
elif FB < 0:
    print("BALANÇO NEGATIVO")
    
else:
    print("EMPATE")
    

