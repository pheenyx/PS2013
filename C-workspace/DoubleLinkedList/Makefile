CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		DoubleLinkedList.o

LIBS =

TARGET =	DoubleLinkedList

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
