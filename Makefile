CC=clang
CFLAGS=-g -Wall -Wextra -std=c11 -pedantic -ggdb
EXE=program

SRCDIR = src
BUILDDIR = build
BINDIR = bin
TARGET = $(BINDIR)/$(EXE)

SRCS := $(wildcard $(SRCDIR)/*.c)
OBJS := $(SRCS:$(SRCDIR)/%.c=$(BUILDDIR)/%.o)

$(TARGET): $(OBJS)
	@mkdir -p $(BINDIR)
	$(CC) $(CFLAGS) $^ -o $@

$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BUILDDIR) $(BINDIR)

.PHONY: clean
