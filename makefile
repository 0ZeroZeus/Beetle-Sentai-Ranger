CC = g++

RMDIR = rm -rf

RM = rm -f

DEP_FLAGS = -MT $@ -MMD -MP -MF $(DEP_PATH)/s*.DEP_PATH

DIRECTIVES = -std=c++11 -Wall -Wextra -c -I $(HEADER_PATH)

LIBS = -lSDL2 -lSDL2_image -lSDL2_mixer -lSDL2_ttf -lm

HEADER_PATH = include

SRC_PATH = src

BIN_PATH = bin

DEP_PATH = dep

CPP_FILES = $(wildcard $(SRC_PATH)/*.cpp)

OBJ_FILES = $(addprefix $(BIN_PATH)/,$(notdir $(CPP_FILES:.cpp=.o)))

DEP_FILES = $(wildcard $(DEP_PATH)/*.d)

EXEC = JOGO

all: $(EXEC)

$(EXEC): $(OBJ_FILES)
	$(CC) -o $@ $^ $(LIBS)

$(BIN_PATH)/%.o: $(SRC_PATH)/%.cpp

ifeq ($(OS),Windows_NT)
	@if not exist $(DEP_PATH) @mkdir $(DEP_PATH)
	@if not exist $(BIN_PATH) @mkdir $(BIN_PATH)
else
	@mkdir -p $(DEP_PATH) $(BIN_PATH)
endif

	$(CC) $(DEP_FLAGS) -c -o $@ $< $(DIRECTIVES)

-include $(DEP_FILES)

clean:
	$(RMDIR) $(BIN_PATH) $(DEP_PATH)
	$(RM) $(EXEC)

.PRECIOUS: $(DEP_PATH)/%.d

.PHONY: debug clean release

print-%: ; @echo $* = $($*)

debug: DIRECTIVES += -ggdb -O0
debug: all

release: DIRECTIVES += -Ofast -mtune=native
release: all








