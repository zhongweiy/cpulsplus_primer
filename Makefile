#this makefile is to complile all the filename.cpp files to filename program
SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp,%,$(SOURCES))

all:$(OBJECTS)

% :: %.cpp
	g++ -Wall -g $^ -o $@
clean:
	rm $(OBJECTS)
