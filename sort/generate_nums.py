import random

with open('in_nums.txt', 'w') as f:
    for i in range(10):
        print(random.randint(-100000, 100000), file=f, end=" ")
