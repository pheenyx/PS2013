CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		StandardFunctions.o

LIBS =

TARGET =	StandardFunctions

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
