# solved with python


start = int(input())
end = int(input())

lessThanNine = ["zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"]

def printEvenOrOdd(n):
    if n % 2 == 0:
        print("even")
    else:
        print("odd")

i = start;
while i <= end : 
    if i <= 9 :
        print(lessThanNine[i])
    else:
        printEvenOrOdd(i)
    i+=1