CC = gcc
CFLAGS = -Wall -Isrc

BIN_DIR = bin
OBJ_DIR = obj
SRC_DIR = src

GUI_DIR = $(SRC_DIR)/gui
STRUCTURES_DIR = $(SRC_DIR)/structures

TARGET = $(BIN_DIR)/snake
SOURCES = $(wildcard $(SRC_DIR)/*.c) $(wildcard $(GUI_DIR)/*.c) $(wildcard $(STRUCTURES_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
HEADERS = $(wildcard $(SRC_DIR)/*.h) $(wildcard $(GUI_DIR)/*.h) $(wildcard $(STRUCTURES_DIR)/*.h)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADERS)
	@mkdir -p $(dir $@)  # Create the intermediate directories
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

