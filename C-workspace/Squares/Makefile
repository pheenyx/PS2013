CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Squares.o

LIBS =

TARGET =	Squares

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
