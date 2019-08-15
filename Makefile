NAME = endgame

SRCS = src/main.c \
	src/mobs.c \
	src/print_molot.c \
	src/towers.c \
	src/waves.c \

OUT = main.o \
	mobs.o \
	print_molot.o \
	towers.o \
	waves.o \

INC = inc/a.h

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

SDL2 = -I ./Frameworks/SDL2.framework/Versions/A/Header -F ./Frameworks -framework SDL2 -rpath ./frameworks
SDL2M = -I inc/framework/SDL2_mixer.framework/Headers -rpath inc/framework -framework SDL2_mixer

all: install clean
install:
	@cp $(SRCS) .
	@cp $(INC) .
	@clang $(CFLAGS) -o $(NAME) -I $(INC) $(SRCS) ${SDL2} ${SDL2M} 
uninstall: clean
	@rm -rf $(NAME)
clean:
	@rm -rf a.h
	@rm -rf main.c mobs.c print_molot.c towers.c waves.c \
	@rm -rf main.o mobs.o print_molot.o towers.o waves.o \
reinstall: uninstall clean all