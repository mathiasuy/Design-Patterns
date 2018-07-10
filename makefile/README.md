ARCHIVO MAKEFILE GENERICO PARA C++

SOURCES := $(wildcard src/*/*.cpp src/*.cpp *.cpp)
OBJECTS := $(subst .cpp,.o,$(SOURCES))
EXE := ejecutable
OBJDIR := obj
LIBS :=
INCLUDE := -I.
FLAGS :=
CC := g++
ejecutable: $(SOURCES)
	$(CC) -o $@ $^ $(INCLUDE) $(LIBS)

$(OBJDIR)/%.o: %.cpp
	$(CC) -o $@ -c $^ $(INCLUDE)
		
i:
	$(info $(SOURCES))
	$(info $(OBJECTS))
	
c:
	-rm $(EXE)
	-rm $(OBJECTS)

o:
	./ejecutable
