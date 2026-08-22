# Boutique Control System by Abduramane
# Formula: FB = SB + REV - EXP

SB = 20000   # Starting Balance (XOF)
REV =input("...")  # Revenue
EXP = 15000  # Expenses

FB = SB + REV - EXP
result = FB - SB

print("--- BOUTIQUE CONTROL ---")
print(f"Starting Balance: {SB} XOF")
print(f"Revenue: {REV} XOF")
print(f"Expenses: {EXP} XOF")
print(f"Final Balance: {FB} XOF")

if result > 0:
    print(f"Positive! Profit: {result} XOF")
elif result < 0:
    print(f"Negative! Loss: {abs(result)} XOF")
else:
    print("Neutral. No profit or loss.")
