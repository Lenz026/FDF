CC = gcc
CFLAGS = -Iinclude -Wall
LDFLAGS = -lraylib -lwinmm -lgdi32 -lopengl32
SRC = $(wildcard src/*.c)
OUT = fdf.exe

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OUT)