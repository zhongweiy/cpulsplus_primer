CFLAGS = -Wall -g 

all:CheckedPtr.o CheckedPtrUti.o

CheckedPtr.o:CheckedPtr.cpp
	g++ $(CFLAGS) -c $^ -o $@

CheckedPtrUti.o:CheckedPtrUti.cpp
	g++ $(CFLAGS) -c $^ -o $@

clean:
	rm *.o