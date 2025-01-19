import random

def greet_user():
    print("Witaj w moim programie! Cieszę się, że tu jesteś")
    name = input("Podaj swoje imię: ")
    print(f"Cześć, {name}!\n")

def generate_random_number():
    print("Generowanie losowej liczby z zakresu od 1 do 100...")
    number = random.randint(1, 100)
    print(f"Wylosowana liczba to: {number}\n")
    return number

def math_operations():
    print("Proszę podać dwie liczby, aby wykonać na nich operacje matematyczne.")
    try:
        num1 = float(input("Pierwsza liczba: "))
        num2 = float(input("Druga liczba: "))
        
        print(f"Suma: {num1 + num2}")
        print(f"Różnica: {num1 - num2}")
        print(f"Iloczyn: {num1 * num2}")
        print(f"Iloraz: {num1 / num2 if num2 != 0 else 'Nie można dzielić przez zero'}\n")
    except ValueError:
        print("Wprowadziłeś błędne dane. Proszę wprowadzić liczby.\n")

def main():
    greet_user()
    generate_random_number()
    math_operations()

if __name__ == "__main__":
    main()
