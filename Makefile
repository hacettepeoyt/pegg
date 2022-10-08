SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(subst .cpp,.o,$(SOURCES))

%.o: %.cpp
	g++ -c $(shell pkg-config --cflags sdl2) -std=c++17 $< -o $@

pegg: $(OBJECTS)
	g++ $(shell pkg-config --libs sdl2) $(OBJECTS) -o pegg
