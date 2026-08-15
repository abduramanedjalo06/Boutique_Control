# Boutique_Control
# FINANCIAL MANAGEMENT SYSTEM - FAMILY BOUTIQUE

print("--- DAILY CASH CLOSING SYSTEM ---")

# Data Input (Where you type the daily values)
starting_balance = float(input("Enter Starting Balance (SI) in CFA: "))
revenue = float(input("Enter Today's Revenue (REC) in CFA: "))
expenses = float(input("Enter Today's Expenses (DES) in CFA: "))

# Your Formula Applied
final_balance = starting_balance + revenue - expenses

print("\n--- DAILY RESULT ---")
print(f"Calculated Final Balance (SF): {final_balance} CFA")

# Conditional Logic (IF / ELIF / ELSE)
if final_balance > starting_balance:
    profit = final_balance - starting_balance
    print(f"Success! The boutique made a PROFIT of {profit} CFA today.")
elif final_balance < starting_balance:
    loss = starting_balance - final_balance
    print(f"Warning! The boutique had a LOSS of {loss} CFA today.")
else:
    print("Neutral Day. No balance changes.")
