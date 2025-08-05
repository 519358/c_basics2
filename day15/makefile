CC = gcc
CFLAGS = -Wall -Wextra -O2
TARGET = $(patsubst %.c, %.exe, $(SRC))
SRC = err.c

# デフォルトターゲット
all: $(TARGET)

# 実行ファイル生成
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# 実行
run: $(TARGET)
	./$(TARGET)

# 掃除
clean:
	rm -f $(TARGET)