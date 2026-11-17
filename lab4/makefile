build:
	gcc -Iheaders main.c fibonacci.c -o fibo
test:
	gcc -Iheaders test_fibonacci.c fibonacci.c -o fibo_test
	./fibo_test
clean:
	rm -rf fibo fibo_test
rebuild: clean build
.PHONY: build test clean rebuild
