
#lines already present, making it convenient
COMPILER_OPTIONS := -g -O0 -m64 -Wall -Wextra -Wshadow -Werror -pedantic
CFLAGS := -std=c99 $(COMPILER_OPTIONS)
CXXFLAGS := -std=c++11 -Weffc++ $(COMPILER_OPTIONS)
LDFLAGS := -Wl,--no-as-needed -lm

#lines added by me!
CXX=g++

shape: shape.o
	$(CXX)  -o $@ $^ $(CXXFLAGS)
shape.o: shape.cpp
	$(CXX) -c $< $(CXXFLAGS)
	
stlqueue:stlqueue.o
	$(CXX) -o $@ $^
stlqueue.o: stlqueue.cpp
	$(CXX) -c $< $(CXXFLAGS)	

clean:
	rm *.o
