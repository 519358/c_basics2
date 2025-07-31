CC=gcc
CFLAGS=-Wall -Wextra -std=c17 -Iinclude -g
LIB=-lcriterion
SRC=$(wildcard src/*.c)
OBJ=build/mathlib.o
TEST=$(wildcard test/*.c)
TARGET=build/mathlib.a

.PHONY=all test clean 

all:$(TARGET)

#ライブラリ作成のみ
$(TARGET):$(OBJ)
	ar rcs $@ -o $<

$(OBJ):$(SRC)
	$(CC) $(CFLAGS) -o $@ -c $<

#ライブラリ作成＋テスト
test: CFLAGS += -coverage
test: all $(TESTS) 
	$(CC) $(CFLAGS) $(TESTS) $(TARGET) $(LIBS) -o build/test_runner
	./build/test_runner


