# Compilación principal
all: main

# Regla para compilar el programa principal
main: BrazoRobotico.o main.o
	g++ -o main BrazoRobotico.o main.o

# Compilar el archivo BrazoRobotico.cpp
BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

# Compilar el archivo main.cpp
main.o: main.cpp BrazoRobotico.h
	g++ -c main.cpp

# Limpiar los archivos compilados
clean:
	rm -f *.o main

# Probar el programa
test: main
	./main


