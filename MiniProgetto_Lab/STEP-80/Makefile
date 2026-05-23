TARGET := rubrica.exe

CC := gcc
CXX := g++

CPPFLAGS := -I./include
CFLAGS := -Wall -Wextra -O0
CXXFLAGS := -Wall -Wextra -O0 -std=c++11
LDFLAGS :=
LDLIBS :=

SRC_DIR := src
BUILD_DIR := build

C_SRCS := $(wildcard $(SRC_DIR)/*.c)
CPP_SRCS := $(wildcard $(SRC_DIR)/*.cpp)
SRCS := $(C_SRCS) $(CPP_SRCS)

ifeq ($(strip $(SRCS)),)
$(error Nessun file sorgente trovato in ./$(SRC_DIR))
endif

OBJS := $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%.o,$(C_SRCS))
OBJS += $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(CPP_SRCS))
DEPS := $(OBJS:.o=.d)

ifneq ($(strip $(CPP_SRCS)),)
LD := $(CXX)
else
LD := $(CC)
endif

.PHONY: all clean rebuild run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $(OBJS) -o $@ $(LDFLAGS) $(LDLIBS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(BUILD_DIR)
	$(CC) $(CPPFLAGS) $(CFLAGS) -MMD -MP -c $< -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(BUILD_DIR)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)

rebuild: clean all

run: all
	./$(TARGET)
