all: compile run
setup:
	sudo apt update
	sudo apt install g++
compile:
	g++ main.cpp global.cpp Modules/traceback.cpp -o cstar.o
clean:
	rm cstar.o
run:
	./cstar.o Testscript.cst