all: compile

compile:
	cd export && gcc -o main main_menu.o welcome_menu.o gotoxy.o menu.o main.o catalogue.o

main: main.o

menu: menu.o

gotoxy: gotoxy.o

welcome_menu: welcome_menu.o

main_menu: main_menu.o

catalogue: catalogue.o

gotoxy.o:
	cd src/core && gcc -c gotoxy.c && mv gotoxy.o ../../export

menu.o:
	cd src/core && gcc -c menu.c && mv menu.o ../../export

main.o:
	cd src/core && gcc -c main.c && mv main.o ../../export

welcome_menu.o:
	cd src/include && gcc -c welcome_menu.c && mv welcome_menu.o ../../export

main_menu.o:
	cd src/include && gcc -c main_menu.c && mv main_menu.o ../../export

catalogue.o:
	cd src/include && gcc -c catalogue.c && mv catalogue.o ../../export