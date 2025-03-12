##### VARIABLES #####

## COLORS ##

GREEN =\033[0;32m
YELLOW =\033[0;33m
RESET =\033[0m

## TARGET ##

NAME := phonebook

## COMPILATION ##

CC := g++

CFLAGS += -Wall
CFLAGS += -Wextra
CFLAGS += -Werror
CFLAGS += -std=c++98

ifeq ($(d), 1)
		CFLAGS += -g3
endif

ifeq ($(d), 2)
		CFLAGS += -fsanitize=address,undefined -g3
endif

## SOURCES ##

SRCS += main.cpp
SRCS += UserInterface.cpp
SRCS += PhoneBook.cpp
SRCS += Contact.cpp

## INCLUDES ##

INCLUDES_DIR := .

INCLUDES += PhoneBook.hpp
INCLUDES += Contact.hpp

## OBJECTS ##

OBJS := $(SRCS:.cpp=.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(OBJS) -o $@
	@echo "$(GREEN)Phonebook compiled!$(RESET)"

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

## TEST RULE ##

TEST_NAME := tests_domain
TEST_SRCS := tests_domain.cpp PhoneBook.cpp Contact.cpp
TEST_OBJS := $(TEST_SRCS:.cpp=.o)

tests_domain: $(TEST_OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(TEST_OBJS) -o $(TEST_NAME)
	@echo "$(GREEN)Tests compiled! Run with ./$(TEST_NAME)$(RESET)"

$(TEST_OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

test: tests_domain
	./$(TEST_NAME)

## CLEAN ##

clean_tests:
	$(RM) $(TEST_OBJS) $(TEST_NAME)

clean:
	$(RM) $(OBJS)

fclean: clean clean_tests
	$(RM) $(NAME)

re: fclean clean_tests all

.PHONY: all clean fclean re