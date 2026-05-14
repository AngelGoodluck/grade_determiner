score = int(input("Enter your score: "))

#using elif
if score >= 80:
    print("Your grade is A")
elif score >= 70:
    print("Your grade is B")
elif score >= 60:
    print("Your grade is C")
elif score >= 50:
    print("Your grade is D") 
elif score >= 40:
    print("Your grade is E")   
elif score < 40:
    print("Ohh...you got an F")   
else:
    print("Invalid input. Check and try again.")