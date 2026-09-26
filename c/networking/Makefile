CC := cc

CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -Iinclude

SRC := $(shell find src -type f -name '*.c')
TEST_SRC := $(shell find tests -type f -name '*.c')

TEST_BIN := $(patsubst tests/%.c,build/tests/%,$(TEST_SRC))

.PHONY: test clean

test: $(TEST_BIN)
	@set -e; \
	for test in $(TEST_BIN); do \
		echo "==> $$test"; \
		./$$test; \
	done

build/tests/%: tests/%.c $(SRC)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $< $(SRC) -o $@

clean:
	rm -rf build
