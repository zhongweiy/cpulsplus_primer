CFLAGS = -g -Wall

all:main

main:main.o ScreenPtr.o ScreenPtrUti.o
	g++ $(CFLAGS) $^ -o $@
main.o:main.cpp
	g++ $(CFLAGS) -c $^ -o $@
ScreenPtrUti.o:ScreenPtrUti.cpp
	g++ $(CFLAGS) -c $^ -o $@
ScreenPtr.o:ScreenPtr.cpp
	g++ $(CFLAGS) -c $^ -o $@
clean:
	rm main *.o