CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		args3.o

LIBS =

TARGET =	args3

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
