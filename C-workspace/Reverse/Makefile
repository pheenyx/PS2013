CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Reverse.o

LIBS =

TARGET =	Reverse

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
