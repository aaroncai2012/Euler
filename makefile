all : hello fibonacci number

clean : 
	rm *.exe


hello : HelloWorld.cpp
	g++ $^ -o $@.exe

fibonacci : fibonacci.cpp
	g++ $^ -o $@.exe

number : number.cpp
	g++ $^ -o $@.exe
