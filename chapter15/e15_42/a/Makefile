OBJECT = OrQuery.o AndQuery.o NotQuery.o TextQuery.o main.o
EXE = main.exe

ALL: $(EXE)

$(EXE): $(OBJECT)
	g++ -Wall -g $^ -o $@

%.o: %.cpp
	g++ -Wall -g -c $< -o $@

clean:
	rm *.o *.exe