def alternate_greeting():
    print("Witaj! Bardzo się cieszę, że jesteś tutaj!")
    
def string_operations():
    print("Operacje na łańcuchach znaków.")
    text = input("Podaj tekst: ")
    print(f"Długość tekstu: {len(text)}")
    print(f"Tekst w wersji wielkimi literami: {text.upper()}")
    print(f"Tekst w wersji małymi literami: {text.lower()}")
    print(f"Odwrócony tekst: {text[::-1]}\n")

def use_greet_user():
    try:
        from main import greet_user
        greet_user()
    except ImportError:
        print("Nie udało się zaimportować funkcji 'greet_user' z main.py\n")

def hello_world_program():
    alternate_greeting()
    string_operations()
    use_greet_user()

if __name__ == "__main__":
    hello_world_program()
