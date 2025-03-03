CXX = g++
CXXFLAGS = -fprofile-arcs -ftest-coverage -g
TARGET = Warui

all: $(TARGET)

$(TARGET): Warui.cc
		$(CXX) $(CXXFLAGS) Warui.cc -o $(TARGET)

clean:
	rm -f Warui *.gcno *.gcda *.gcov
