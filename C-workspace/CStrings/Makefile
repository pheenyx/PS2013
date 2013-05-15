CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		CStrings.o

LIBS =

TARGET =	CStrings

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
