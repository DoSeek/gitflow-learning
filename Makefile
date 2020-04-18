CC=gcc
CXX=g++

CFLAGS +=
CXXFLAGS += -std=c++11

all:
	$(CXX) $(CXXFLAGS) main.cpp -o main
