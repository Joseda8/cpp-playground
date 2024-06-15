# Define the compiler
CXX = g++

# Define the compiler flags
CXXFLAGS = -Wall -Wextra -std=c++17

# Define the target executable
TARGET = main

# Define the source files
SRCS = main.cpp \
       models/course/Course.cpp \
       models/student/Student.cpp

# Define the object files
OBJS = $(SRCS:.cpp=.o)

# Output directory
BUILD_DIR = build

# Default target
all: $(BUILD_DIR)/$(TARGET)

# Rule to link the object files to create the executable
$(BUILD_DIR)/$(TARGET): $(OBJS:%=$(BUILD_DIR)/%)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to compile the source files into object files
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to run the executable
run: $(BUILD_DIR)/$(TARGET)
	./$(BUILD_DIR)/$(TARGET)

# Rule to clean the build directory
clean:
	rm -rf $(BUILD_DIR)/*

# Phony targets
.PHONY: all run clean
