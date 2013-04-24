CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Collatz.o

LIBS =

TARGET =	Collatz

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
