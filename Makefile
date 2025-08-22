CC = gcc
# LIBFT_DIR := R:/REPO\ rebuildls/old\ repos/libft
LIBFT_DIR = R:/REPO_rebuilds/old_repos/libft
LIBFT = $(LIBFT_DIR)/libft.a
CFLAGS = -Iinclude -I"$(LIBFT_DIR)" -Wall
LDFLAGS = -L"$(LIBFT_DIR)" -lft -lraylib -lwinmm -lgdi32 -lopengl32
SRC = $(wildcard src/*.c)
OUT = fdf.exe

DLLS = C:\msys64\mingw64\bin\libraylib.dll \
		C:\msys64\mingw64\bin\glfw3.dll

all: $(OUT)
	cp -u $(DLLS) .

# $(CC) $(CFLAGS) -o $@ $^ -L"$(LIBFT_DIR)" -lft $(LDFLAGS)

$(OUT): $(SRC) $(LIBFT)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OUT)
	rm -f $(notdir $(DLLS))
	$(MAKE) -C "$(LIBFT_DIR)" clean