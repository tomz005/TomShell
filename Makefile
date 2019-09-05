all: hello

hello: main.o display.o read_inp.o bicmd.o sycmd.o
	g++ main.o display.o read_inp.o bicmd.o sycmd.o -o hell

main.o: main.cpp
	g++ -c main.cpp

display.o: display.cpp
	g++ -c display.cpp

read_inp.o: read_inp.cpp
	g++ -c read_inp.cpp

bicmd.o: bicmd.cpp
	g++ -c bicmd.cpp

sycmd.o: sycmd.cpp
	g++ -c sycmd.cpp

clean:
	rm -rf *o hell
