# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++
CXXFLAGS = -Wall -g

# ****************************************************
# Targets needed to bring the executable up to date

all: main

main: straussen.o matrix.o 
	$(CXX) $(CXXFLAGS) straussen.o matrix.o -o main

straussen.o: straussen.cpp
	$(CXX) $(CXXFLAGS) -c straussen.cpp

matrix.o: matrix.cpp
	$(CXX) $(CXXFLAGS) -c matrix.cpp

claen: 
	rm -r *o 