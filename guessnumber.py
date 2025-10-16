import random
guess_number = random.randint(1, 100)
while True:
    try:
        number = int(input('Guess the number between 1 and 100:'))
        if (number > guess_number):
            print('Too high')
        elif(number < guess_number):
            print('Too low')
        else:
            print('congratulations')
            break
    except ValueError:
        print('Please enter a valid number')
