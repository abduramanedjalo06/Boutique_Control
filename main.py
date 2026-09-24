# Boutique_Control

def Sales_Control(Starting_Balance, Revenue, Expenses):

  Final_Balance = Starting_Balance + Revenue - Expenses

  if Final_Balance > Starting_Balance:

    print(f"POSITIVE! High Revenue, the value is: {Final_Balance} XOF")

  elif Final_Balance < Starting_Balance:

    print(f"NEGATIVE! Low Revenue, the value is: {Final_Balance} XOF")

  else:

    print(f"TIE! There was neither Loss nor Gain, the value is: {Final_Balance} XOF")

Starting_Balance = float(input("Enter the value of Starting_Balance: "))
Revenue = float(input("Enter the value of Revenue: "))
Expenses = float(input("Enter the value of Expenses: ")) 

Sales_Control(Starting_Balance, Revenue, Expenses)

