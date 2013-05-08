CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		ExchangeRate.o

LIBS =

TARGET =	ExchangeRate

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
