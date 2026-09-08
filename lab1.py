def fib(n, sequence):
    if len(sequence) < 2:
        sequence = [0,1]

    if n <= 2:
        return sequence
    else:
        next_num = sequence[-1] + sequence[-2]
        sequence.append(next_num)
        return fib(n-1,sequence)

def print_seq(seq):
    with open('./output/fibonacci.txt','w') as file:
        for entry in seq:
            file.write(f'{entry}\n')

def main():
    sequence = []
    sequence = fib(25, sequence)
    print(f'Sequence size: {len(sequence)}')
    print_seq(sequence)
    print('done')

if __name__ == "__main__":
    main()
