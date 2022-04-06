CXX = g++

CXX_FLAGS = -g -Wall -std=c++11

TARGET = project1

HEADERS = File.h Register.h src/Add.h src/And.h src/ArithShiftRight.h src/LogicalShiftRight.h src/LogicalShiftLeft.h src/Not.h src/Orr.h src/Subtract.h src/Xor.h src/Move.h
SRCS = File.cpp Register.cpp src/Add.cpp src/And.cpp src/ArithShiftRight.cpp src/LogicalShiftRight.cpp src/LogicalShiftLeft.cpp src/Not.cpp src/Orr.cpp src/Subtract.cpp src/Xor.cpp src/Move.cpp main.cpp

OBJECTS := $(patsubst %.cpp,%.o,$(SRCS))

.PHONY: default all clean

all: $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) $(CXX_FLAGS) $(OBJECTS) $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f src/*.o