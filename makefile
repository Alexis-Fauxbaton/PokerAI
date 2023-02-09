all: cards tests
	g++ *.o -o exec

cards:
	g++ -c cards.cpp -o cards.o

tests:
	g++ -c test.cpp -o test.o

clean:
	del *.exe
	del *.o