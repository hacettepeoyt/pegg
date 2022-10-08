SOURCES := $(wildcard src/*.cpp)
OBJECTS := $(subst .cpp,.o,$(SOURCES))
CXXFLAGS := -O2 -Wall -Werror $$(pkg-config --cflags sdl2) $(CXXFLAGS)
LDFLAGS := $$(pkg-config --libs sdl2) $(LDFLAGS)

%.o: %.cpp
	g++ -c $(CXXFLAGS) -std=c++17 $< -o $@

pegg: $(OBJECTS)
	g++ $(LDFLAGS) $(OBJECTS) -o pegg
