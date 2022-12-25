CC 		= gcc
OUT		= -o bin/libdsc.so
FLAGS 	= # -std=gnu99
CFLAGS 	= -fPIC -Wall -Wextra -fstack-protector
LDFLAGS	= -shared

OBJ		= build/linked_list.o

# COMPILER FLAGS
# * -std=gnu99			: gnu99 C standard (disabled)
# * -fPIC				: compile position indipendent code
# * -Wall				: enable all warnings
# * -Wextra				: enable extra warnings
# * -fstack-protector	: compile with stack protections
# * -shared				: compile as a shared object

output: $(OBJ)
	mkdir -p bin
	$(CC) $(OUT) $(FLAGS) $(CFLAGS) $(LDFLAGS) $(OBJ)

build/%.o: src/%.c src/%.h
	mkdir -p build
	$(CC) -c $< -o $@

clean:
	rm -r build/ bin/
