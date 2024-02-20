# run
.PHONY: run
run: build test

# build
.PHONY: build
build:
	@cmake -S . -B build && cmake --build build

# test
.PHONY: test
test:
	@cd ./build && ctest

# clean
.PHONY: clean
clean:
	@rm -rf ./build