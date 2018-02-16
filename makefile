all: driver

driver: Box.o driver.cpp
	g++ Box.o driver.cpp -o driver

Box.o: Box.cpp Box.h
	g++ -c Box.cpp

clean:
	rm Box.o
	rm driver

run:
	./driver

val:
	valgrind --leak-check=full --log-file=valgrind.txt ./driver
