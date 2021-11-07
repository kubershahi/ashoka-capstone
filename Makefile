
#  -g    adds debugging information to the executable file
#  -Wall turns on most, but not all, compiler warnings

CC = g++
# CFLAGS  = -g -Wall

nn: read_data.o utils.o nn.o
	$(CC) $(CFLAGS) read_data.o utils.o nn.o -o nn

read_data.o:	read_data.cpp read_data.hpp
	$(CC) $(CFLAGS) -c read_data.cpp

utils.o:	utils.cpp utils.hpp
	$(CC) $(CFLAGS) -c utils.cpp

nn.o: nn.cpp define.hpp read_data.hpp utils.hpp
	$(CC) $(CFLAGS) -c nn.cpp


# To start over from scratch, type 'make clean'. This removes the executable file, 
# as well as old .o objectfiles and *~ backup files:
clean: 
	$(RM) nn file *.o *~