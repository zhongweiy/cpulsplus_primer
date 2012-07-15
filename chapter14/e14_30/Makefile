CFLAGS = -Wall -g 

all:CheckedPtr.o 

CheckedPtr.o:CheckedPtr.cpp
	g++ $(CFLAGS) -c $^ -o $@

clean:
	rm *.o