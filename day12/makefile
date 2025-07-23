main.exe : build/mathlib.a build/main.o
	gcc -Wall -Wextra -Iinclude -g -o main.exe build/main.o build/mathlib.a

build/mathlib.a :build/add.o build/devide.o
	ar rcs build/mathlib.a build/add.o build/devide.o

build/add.o : src/add.c
	gcc -Wall -Wextra -Iinclude -c src/add.c -o build/add.o 

build/devide.o : src/devide.c
	gcc -Wall -Wextra -Iinclude -c src/devide.c -o build/devide.o 

build/main.o : src/main.c
	gcc -Wall -Wextra -Iinclude -c src/main.c -o build/main.o 

