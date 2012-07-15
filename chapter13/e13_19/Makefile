
.PHONY:ALL

ALL: main

main: main.o Message.o Folder.o
	g++ $^ -o $@
main.o: main.cpp
	g++ -c $^ -o $@
Message.o: Message.cpp
	g++ -c $^ -o $@
Folder.o: Folder.cpp
	g++ -c $^ -o $@

.PHONY:clean

clean:
	rm *.o main