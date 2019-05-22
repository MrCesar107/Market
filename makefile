all: compile

compile:
	cd export && gcc -o main gotoxy.o menu.o main.o

main: main.o

menu: menu.o

gotoxy: gotoxy.o

gotoxy.o:
	cd src/core && gcc -c gotoxy.c && mv gotoxy.o ../../export

menu.o:
	cd src/core && gcc -c menu.c && mv menu.o ../../export

main.o:
	cd src/core && gcc -c main.c && mv main.o ../../export