def factorial_iterative(number):
    result = 1
    for i in range(1, number + 1):
        result *= i
    return result

num = 7
print(f"Факторіал числа {num} дорівнює {factorial_iterative(num)}")
