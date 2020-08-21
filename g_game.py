guess_one = "thotarella"
guess_try =  ""
try_count = 0
max_try = 3

print("Guess it!")
print("\n")

while guess_try != guess_one:
    guess_try = input("Guess the magic word")
    print("wrong, try again")
    try_count = try_count + 1
    print("you have " + str( int(max_try) - int(try_count)) + "tries left")


if int(try_count) > int(max_try):
    print("out of tries")
    print("game over")
 

