INCDIR    := include
CXX       := g++
CXXFLAGS  += -Wall -std=c++11 -O2 #-g -O0
LD        := g++
LDFLAGS   := -lm 

AR	  = ar
ARFLAGS	  = -cvr #create,verbose,quick (don't check for replacement, otherwise use r instead)

all: testapp

testapp: testapp.o
	$(CXX) -o $@ $^ $(LDFLAGS)

testapp.o: testapp.cxx 
	$(CXX) $(CXXFLAGS) -c -o $@ $< $(INC_DIR)

%: %.o
	$(CXX) -o $@ $< $(LDFLAGS)

%.o: %.cxx 
	$(CXX) $(CXXFLAGS) -c -o $@ $< $(ROOTCFLAGS) $(INC_DIR)

clean:
	rm -f *~ *.o testapp

