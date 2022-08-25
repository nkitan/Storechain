CC = gcc
CFLAGS  = -lssl -lcrypto
TARGET = storechain
all: $(TARGET)
$(TARGET): $(TARGET).cpp
	$(CC) -o $(TARGET) $(TARGET).cpp $(CFLAGS)
clean:
	$(RM) $(TARGET)
