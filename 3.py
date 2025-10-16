import random
guess_number = random.randint(1, 100)
while True:
    try:
        number = int(input("Guess number between 1-100: "))
        if (number > guess_number):
            print("Too high")
        elif (number < guess_number):
            print ("Too low")
        else:
            print("CONGRSTULATIONS")
            break    
    except ValueError:
        print("Enter valid number")
        
