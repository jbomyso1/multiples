OBJS = mult.o
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -c -Wall $(DEBUG)
LFLAGS = -Wall $(DEBUG)

mult : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o mult

mult.o : mult.cpp
	$(CC) $(CFLAGS) mult.cpp

clean:
	\rm *.o *~ mult

