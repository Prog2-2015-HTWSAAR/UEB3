makefile:
DEL_LIST = *.o *.exe *stackdump

all: project_ueb_03 doc
clean:
	rm -f $(DEL_LIST)
build: project_ueb_03
	g++ -o ueb03 *.o
doc: 
	/Applications/Doxygen/doxygen doxyfile
rebuild: clean all
project_ueb_03: 
	g++ -c -Wall -pedantic *.cpp
