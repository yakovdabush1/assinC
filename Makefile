
all: mymaths mymathd mains maind 

functions: basicMath.c power.c myMath.h
	gcc -Wall -g -c basicMath.c power.c 

main.o: main.c myMath.h
	gcc -Wall -g -c main.c 

mymaths: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o

mymathd: basicMath.o power.o
	gcc -shared -o libmyMath.so basicMath.o power.o

mains: main.o libmyMath.a 
	gcc -Wall -g -o mains main.o libmyMath.a

maind: main.o
	gcc -Wall -g -o maind main.o ./libmyMath.so 

clean: 	
	rm *.o *.a mains maind *.so
