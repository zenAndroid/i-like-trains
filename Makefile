CC = g++
CFLAGS = -Wall -std=c++17 -g -pthread


SRCS = Track.cpp Cell.cpp Train.cpp main.cpp


OBJS = $(SRCS:.cpp=.o)

# define the executable file 
MAIN = train

#
# The following part of the makefile is generic; it can be used to 
# build any executable just by changing the definitions above and by
# deleting dependencies appended to the file from 'make depend'
#

.PHONY: depend clean

all:    $(MAIN)
	@echo  train has been compiled

$(MAIN): $(OBJS) 
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

clean: 
	rm *.o train

v:
	vim Makefile
