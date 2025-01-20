from utils import alternate_greeting, string_operations, save_to_file

def hello_world_program():
    alternate_greeting()
    string_operations()

    save_to_file("log.txt", "Program 'hello_world.py' został uruchomiony.")

if __name__ == "__main__":
    hello_world_program()
