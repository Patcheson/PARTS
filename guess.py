guess_one = "thotarella"
guess_try = input("try guessing")
try_count = 0
max_try = 3

outta_chancs = False

print("Guess it!")

while guess_try != guess_one:

    if try_count <= max_try:
        guess_try = input("try guessing")
        print("wrong, try again")
        try_count = try_count + 1
        print("you have " + str( int(max_try) - int(try_count)) + "tries left")
    else:
        outta_chancs = True
if outta_chances:
    print("no chances left. you lose")
else:
    print("you win")
