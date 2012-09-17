CC = g++
CFLAGS = -g -Wall -I inc/
ARGS = http://www.cats.com/ ../../monkey.html

BIN = bin/test
OBJ_FILES = obj/main.o obj/cgattrib.o
DEPS = inc/*.hpp
STYLECHECKER = ~/Documents/CppCheckStyle/CppCheckStyle

.PHONY : default memcheck clean

default : $(BIN)

bin : $(BIN) style

memcheck : $(BIN)
	valgrind --tool=memcheck --leak-check=yes --max-stackframe=5000000 \
		--show-reachable=yes $(BIN)

$(BIN) : $(OBJ_FILES) $(DEPS)
	@- mkdir -p bin
	$(CC) -o $@ $(OBJ_FILES) $(CFLAGS)

obj/%.o : src/%.cpp $(DEPS)
	@- mkdir -p obj
	$(CC) -c -o $@ $< $(CFLAGS)
	@ echo

style :
	$(STYLECHECKER) src/main.cpp $(DEPS)
	@ echo

clean :
	@ echo "Removing generated files"
	rm -rf obj
	rm -rf bin

