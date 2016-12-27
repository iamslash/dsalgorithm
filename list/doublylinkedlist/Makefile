# 
CC  = c99
CXX = g++ -std=c++11

all: TAGS a.out

a.exe: a.o 
	$(CXX) $^ $(LDFLAGS) -o $@
a.out: a.o 
	$(CXX) $^ $(LDFLAGS) -o $@

%.o: %.cpp
	$(CXX)  -c $(CXXFLAGS) -o $@ $< -MMD
%.o: %.c
	$(CC)  -c $(CFLAGS) -o $@ $< 

TAGS:
	-@gtags
clean:
	-rm -f *.o
	-rm -f core GPATH GRTAGS GSYMS GTAGS
	-rm -f a.out

-include $(wildcard *.d)
