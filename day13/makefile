CC=gcc
CFLAGS=-Wall -Wextra -std=c17 -Iinclude -g
LIB=-lcriterion
SRC=$(wildcard src/*.c)
OBJ=$(patsubst src/%.c, build/%.o, $(SRC))
TEST=$(wildcard test/*.c)
TARGET=build/mathlib.a

.PHONY:all test coverage clean 

all:$(TARGET)

#ライブラリ作成のみ
$(TARGET):$(OBJ)
	ar rcs $@ $^

build/%.o:src/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

#ライブラリ作成＋テスト
test: CFLAGS += -coverage
test: all $(TEST) 
	$(CC) $(CFLAGS) $(TEST) $(TARGET) $(LIB) -o build/test_runner
	./build/test_runner


clean:
	rm -rf build *.gcda *.gcno *.gcov
