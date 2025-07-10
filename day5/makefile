CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

OBJDIR = build
SRCS = $(wildcard src/*.c)
OBJS = $(patsubst src/%.c,$(OBJDIR)/%.o,$(SRCS))
TARGET = demo.exe

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@

$(OBJDIR)/%.o: src/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

.PHONY: clean
clean:
	rm -rf $(OBJDIR) $(TARGET)
