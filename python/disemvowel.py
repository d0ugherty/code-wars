def disemvowel(string_):
    new_string = ""
    vowels = {
        'A': '',
        'a': '',
        'E': '',
        'e': '',
        'I': '',
        'i': '',
        'O': '',
        'o': '',
        'U': '',
        'u': '',
    }

    for char in string_:
        new_string += vowels.get(char, char)
    return new_string


test = "HA HA INTERNET LOL"
print(test)
print(disemvowel(test))

