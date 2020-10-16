CFLAGS = -O
CC = g++

Main: Main.o MyHash.o
	$(CC) $(CFLAGS) -o Main Main.o MyHash.o

Main.o: Main.cpp
	$(CC) $(CFLAGS) -c Main.cpp

MyHash.o: MyHash.cpp
	$(CC) $(CFLAGS) -c MyHash.cpp

run:
	./Main

clean:
	rm -rf core *.o