# Define compiler and flags
CXX = g++
CXXFLAGS = -Wall -g -std=c++20
LDFLAGS =
LIBS =

INC_DIR = /opt/local/include # Change this to your include's directory
LIB_DIR = /opt/local/lib # Change this to the your lib directory
RAPIDJSON_LIB_DIR = /opt/local/include/rapidjson # Change this to the rapidjson library directory

# Add include paths
CXXFLAGS += -I$(INC_DIR)

# Add library search paths
LDFLAGS += -L$(LIB_DIR) -L$(RAPIDJSON_LIB_DIR)

# Add libraries
LIBS += -lcpr -lpthread

# Executable name
TARGET = main

# Source files
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) $(LIBS) -o $(TARGET)

# Compile step
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -rf $(TARGET) *.o *.dSYM
