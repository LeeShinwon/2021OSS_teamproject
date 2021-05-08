all : main
main : main.c convert.o manager.o product.o
	gcc -o $@ $^
clean:
	rm *.o main
