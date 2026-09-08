def fib(n):
    fib_0 = 0
    fib_1 = 1
    seq = [fib_0, fib_1]

    for i in range(2,n):
        next_num = seq[i-1] + seq[i-2]
        seq.append(next_num)

    return seq

def print_seq(seq):
    with open('./output/fibonacci.txt','w') as file:
        for entry in seq:
            file.write(f'{entry}\n')

def main():
    sequence = fib(25)
    print_seq(sequence)

if __name__ == "__main__":
    main()
