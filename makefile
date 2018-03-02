output: main.o zoo.o animal.o patas.o pelaje.o ojo.o oreja.o cola.o
	g++ main.o zoo.o animal.o patas.o pelaje.o oreja.o ojo.o cola.o -o output

main.o: main.cpp animal.h zoo.h patas.h pelaje.h ojo.h oreja.h cola.h
	g++ -c main.cpp
zoo.o: zoo.cpp zoo.h animal.h
	g++ -c zoo.cpp
animal.o: animal.cpp animal.h patas.h pelaje.h oreja.h ojo.h cola.h
	g++ -c animal.cpp
patas.o: patas.cpp patas.h
	g++ -c patas.cpp
pelaje.o: pelaje.cpp pelaje.h
	g++ -c pelaje.cpp
ojo.o: ojo.cpp ojo.h
	g++ -c ojo.cpp
oreja.o: oreja.cpp  oreja.h
	g++ -c oreja.cpp
cola.o:	cola.cpp cola.h
	g++ -c cola.cpp
