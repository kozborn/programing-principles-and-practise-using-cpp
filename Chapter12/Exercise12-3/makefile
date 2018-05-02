PROG = fltk-testing-bjarne
CC = g++
CPPFLAGS = -std=c++11
OBJS = main.o GUI.o Graph.o Simple_window.o Window.o
WITHOUT_MAIN = GUI.o Graph.o Simple_window.o Window.o
FLTK = fltk-config --ldflags

all : $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS) `$(FLTK)`

recompile: main.cpp
	$(CC) $(CPPFLAGS) -o $(PROG) main.cpp $(WITHOUT_MAIN) `$(FLTK)`

main.o:
	$(CC) -c $(CPPFLAGS) main.cpp

GUI.o:
	$(CC) -c $(CPPFLAGS) ../../GUI.cpp

Graph.o:
	$(CC) -c $(CPPFLAGS) ../../Graph.cpp

Simple_window.o:
	$(CC) -c $(CPPFLAGS) ../../Simple_window.cpp

Window.o:
	$(CC) -c $(CPPFLAGS) ../../Window.cpp

fltk:
	fltk-config --ldflags

clean:
	 rm -f $(OBJS) $(PROG)
