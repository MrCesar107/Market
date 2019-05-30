all: compile

compile:
	cd export && gcc -o main main_menu.o welcome_menu.o gotoxy.o menu.o main.o catalogue.o file_io_module.o getch.o

main: main.o

menu: menu.o

getch: getch.o

gotoxy: gotoxy.o

file_io_module: file_io_module.o

welcome_menu: welcome_menu.o

main_menu: main_menu.o

catalogue: catalogue.o

gotoxy.o:
	cd src/core && gcc -c gotoxy.c && mv gotoxy.o ../../export

menu.o:
	cd src/core && gcc -c menu.c && mv menu.o ../../export

getch.o:
	cd src/core && gcc -c getch.c && mv getch.o ../../export

main.o:
	cd src/core && gcc -c main.c && mv main.o ../../export

welcome_menu.o:
	cd src/include && gcc -c welcome_menu.c && mv welcome_menu.o ../../export

main_menu.o:
	cd src/include && gcc -c main_menu.c && mv main_menu.o ../../export

catalogue.o:
	cd src/include && gcc -c catalogue.c && mv catalogue.o ../../export

file_io_module.o:
	cd src/core && gcc -c file_io_module.c && mv file_io_module.o ../../export
