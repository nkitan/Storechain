CC = gcc
CFLAGS  = -lssl -lcrypto
TARGET = storechain

all: $(TARGET)
$(TARGET): $(TARGET).cpp
    $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp 
clean:
    $(RM) $(TARGET)
