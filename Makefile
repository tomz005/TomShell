all: hello

hello: main.o display.o read_inp.o bicmd.o sycmd.o historian.o init.o
	g++ main.o display.o read_inp.o bicmd.o sycmd.o historian.o init.o -o hell

main.o: main.cpp
	g++ -c main.cpp

display.o: display.cpp
	g++ -c display.cpp

read_inp.o: read_inp.cpp
	g++ -c read_inp.cpp

bicmd.o: bicmd.cpp
	g++ -c bicmd.cpp

init.o: init.cpp
	g++ -c init.cpp

sycmd.o: sycmd.cpp
	g++ -c sycmd.cpp
historian.o: historian.cpp
	g++ -c historian.cpp

clean:
	rm -rf *o hell
