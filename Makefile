# Compiler
CC = gcc

# Default values for day and task
day ?= 1
task ?= 1

# Path to the program
SRC = day$(day)/task$(task)/program.c
OUT = day$(day)/task$(task)/program.out

# Compile and run the selected program
run: $(OUT)
	@echo "Running $(OUT)..."
	@./$(OUT)

# Compile the selected program
$(OUT): $(SRC)
	@echo "Compiling $(SRC)..."
	@$(CC) $(SRC) -o $(OUT)

# Clean the compiled files
clean:
	rm -f day*/task*/program.out
