build:
    mkdir -p obj/
	g++ -c -I inc/ src/cgattrib.cpp -o obj/cgattrib.o

clean:
	rm -rf obj/