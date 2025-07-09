# === Variable principales ===

CC      := gcc
NAME    := softcity
BUILD   := build
BIN     := bin

CFLAGS  := -Wall -Wextra -Werror -Iinclude
LDFLAGS :=

# === Dossier source ===
INCLUDES := \
	-Isrc/mairie/include \
	-Isrc/commissariat/include \
	-Isrc/caserne/include \
	-Isrc/hopital/include \
	-Isrc/studio_ui/include \
	-Isrc/scripts/include \
	-Isrc/tribunal/include \
	-Isrc/citadelle/include \
	-Isrc/fonction_utilitaire/include

MODULES := \
	src/mairie/src \
	src/commissariat/src \
	src/caserne/src \
	src/hopital/src \
	src/studio_ui/src \
	src/scripts/src \
	src/tribunal/src \
	src/citadelle/src \
	src/fonction_utilitaire/src

# === ou ce trouve le main() ===
SRC := $(wildcard src/mairie/src/salon_commandement.c) \
	   $(foreach dir, $(MODULES), $(wildcard $(dir)/*.c))

OBJ := $(patsubst %.c, $(BUILD)/%.o, $(SRC))

# === Règles ===

.PHONY: all clean debug release run

all: $(BIN)/$(NAME)

$(BIN)/$(NAME): $(OBJ)
	@mkdir -p $(BIN)
	$(CC) $^ -o $@ $(LDFLAGS)

# Compilation de chaque .c en .o dans le dossier build/

$(BUILD)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

run: all
	./$(BIN)/$(NAME)

debug: CFLAGS += -g -DDEBUG
debug: clean all

release: CFLAGS += -O2
release: clean all

clean:
	rm -rf $(BUILD) $(BIN)
