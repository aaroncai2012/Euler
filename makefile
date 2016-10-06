all : hello euler1 euler2 euler3 

clean : 
	rm *.exe


hello : hello.cpp
	g++ $^ -o $@.exe

euler1 : euler1.cpp
	g++ $^ -o $@.exe

euler2 : euler2.cpp
	g++ $^ -o $@.exe

euler3 : euler3.cpp
	g++ $^ -o $@.exe
