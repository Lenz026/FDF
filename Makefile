CC = gcc
CFLAGS = -Iinclude -Wall
LDFLAGS = -lraylib -lwinmm -lgdi32 -lopengl32
SRC = $(wildcard src/*.c)
OUT = fdf.exe

DLLS = C:\msys64\mingw64\bin\libraylib.dll \
		C:\msys64\mingw64\bin\glfw3.dll

all: $(OUT)
	cp $(DLLS) .

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OUT)
	rm -f $(notdir $(DLLS))