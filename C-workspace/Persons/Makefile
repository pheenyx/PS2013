CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		Persons.o

LIBS =

TARGET =	Persons

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
