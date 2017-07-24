TARGET = lidarExample

SRC := src
INCLUDE = -Iinclude -I/usr/local/include/urg_cpp
CC = g++ -std=c++11
CFLAGS = -Wno-deprecated-declarations -fpermissive
LIBS = -pthread -lrt /usr/local/lib/liburg_cpp.a
AUX = $(SRC)/*.cpp

all: $(TARGET)

$(TARGET): $(TARGET).cpp $(AUX)
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp $(AUX) $(INCLUDE) $(LIBS) 
	
clean:
	$(RM) $(TARGET)
