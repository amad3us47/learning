# --- Configuration ---
CC = gcc
SDL2_DIR = C:/SDL2/i686-w64-mingw32

CFLAGS = -I$(SDL2_DIR)/include
LIBS = -L$(SDL2_DIR)/lib -lmingw32 -lSDL2main -lSDL2

# --- Rules ---
test: chip8.c
	$(CC) chip8.c -o chip8.exe $(CFLAGS) $(LIBS)

clean:
	del chip8.exe
