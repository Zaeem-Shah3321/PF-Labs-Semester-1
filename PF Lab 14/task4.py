num = int(input("Enter a number: "))
length = 0
while num != 0:
    length += 1
    num //= 10
if length == 0:
    length = 1
print("The length of the number is:",length)
