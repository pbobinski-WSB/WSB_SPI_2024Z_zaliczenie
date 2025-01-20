def is_number(value):
    try:
        float(value)
        return True
    except ValueError:
        return False

def save_to_file(filename, content):
    try:
        with open(filename, 'a') as f:
            f.write(content + '\n')
        print(f"Dane zapisane do pliku {filename}.")
    except Exception as e:
        print(f"Nie udało się zapisać do pliku: {e}")
