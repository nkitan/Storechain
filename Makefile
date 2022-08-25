# the compiler: gcc for C program, define as g++ for C++
CC = gcc
CFLAGS  = -lssl -lcrypto
 
# The build target 
TARGET = storechain
 
all: $(TARGET)
 
$(TARGET): $(TARGET).c
   $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).cpp
 
clean:
   $(RM) $(TARGET)
