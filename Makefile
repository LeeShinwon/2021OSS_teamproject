all : main
market : main.c manager.o product.o convert.o
	gcc -o $@ $^
clean:
	rm *.o main
