COMPILER = gcc
COMPILER_FLAG = -std=c++98 -DLUCE_EXPORT -I/Include

all: ASSERT 

ASSERT:
	cd ./Source
	$(MAKE) build