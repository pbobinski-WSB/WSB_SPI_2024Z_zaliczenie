import random
from utils import is_number, save_to_file

def greet_user():
    print("Witaj w moim programie! Cieszę się, że tu jesteś")
    name = input("Podaj swoje imię: ")
    print(f"Cześć, {name}!\n")
    return name

def generate_random_number():
    print("Generowanie losowej liczby z zakresu od 1 do 100...")
    number = random.randint(1, 100)
    print(f"Wylosowana liczba to: {number}\n")
    return number

def math_operations():
    print("Proszę podać dwie liczby, aby wykonać na nich operacje matematyczne.")
    num1 = input("Pierwsza liczba: ")

    while not is_number(num1):
        print("To nie jest liczba! Spróbuj ponownie.")
        num1 = input("Pierwsza liczba: ")
    
    num2 = input("Druga liczba: ")
    while not is_number(num2):
        print("To nie jest liczba! Spróbuj ponownie.")
        num2 = input("Druga liczba: ")
    
    num1 = float(num1)
    num2 = float(num2)

    print(f"Suma: {num1 + num2}")
    print(f"Różnica: {num1 - num2}")
    print(f"Iloczyn: {num1 * num2}")
    print(f"Iloraz: {num1 / num2 if num2 != 0 else 'Nie można dzielić przez zero'}\n")

    result = f"Wyniki obliczeń: {num1} + {num2} = {num1 + num2}, {num1} - {num2} = {num1 - num2}, {num1} * {num2} = {num1 * num2}, {num1} / {num2} = {num1 / num2 if num2 != 0 else 'Nie można dzielić przez zero'}"
    save_to_file("results.txt", result)

def main():
    name = greet_user()
    generate_random_number()
    math_operations()

if __name__ == "__main__":
    main()
