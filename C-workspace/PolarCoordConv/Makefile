CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		PolarCoordConv.o

LIBS =

TARGET =	PolarCoordConv

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
