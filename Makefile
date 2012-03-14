#
# Nice makefile for the robot project
#

NAME=robot
CC=g++
OBJ_FILES=		main.o \
				robot.o
CFLAGS=-O2

all:	$(OBJ_FILES)
	$(CC) -o $(NAME) $(OBJ_FILES) $(LD_FLAGS)

clean:
	rm -rf $(OBJ_FILES) $(NAME)

%.o: %.cpp
	echo $(CC_CMD)
	$(CC_CMD)

#
# Rules
# #
CC_CMD = $(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

