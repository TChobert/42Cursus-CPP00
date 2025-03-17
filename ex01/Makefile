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
SRCS += AddContactController.cpp
SRCS += AddContactUseCase.cpp
SRCS += ContactValidator.cpp
SRCS += InvalidInputDisplayer.cpp
SRCS += SearchContactController.cpp
SRCS += SearchContactUseCase.cpp

## INCLUDES ##

INCLUDES_DIR := .

INCLUDES += PhoneBook.hpp
INCLUDES += Contact.hpp
INCLUDES += AddContactController.hpp
INCLUDES += AddContactUseCase.hpp
INCLUDES += ContactDTO.hpp
INCLUDES += ContactValidator.hpp
INCLUDES += InvalidInputDisplayer.hpp
INCLUDES += SearchContactController.hpp
INCLUDES += SearchContactUseCase.hpp

## OBJECTS ##

OBJS := $(SRCS:.cpp=.o)

## RULES ##

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(OBJS) -o $@
	@echo "$(GREEN)Phonebook compiled!$(RESET)"

$(OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

## TEST DOMAIN ##

TEST_DOMAIN_NAME := tests_domain
TEST_DOMAIN_SRCS := tests_domain.cpp PhoneBook.cpp Contact.cpp ContactValidator.cpp
TEST_DOMAIN_OBJS := $(TEST_DOMAIN_SRCS:.cpp=.o)

tests_domain: $(TEST_DOMAIN_OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(TEST_DOMAIN_OBJS) -o $(TEST_DOMAIN_NAME)
	@echo "$(GREEN)Tests domain compiled! Run with ./$(TEST_DOMAIN_NAME)$(RESET)"

$(TEST_DOMAIN_OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

## TEST UI ##

TEST_UI_NAME := tests_UI
TEST_UI_SRCS := tests_UI.cpp AddContactController.cpp ContactValidator.cpp InvalidInputDisplayer.cpp PhoneBook.cpp AddContactUseCase.cpp Contact.cpp
TEST_UI_OBJS := $(TEST_UI_SRCS:.cpp=.o)

tests_UI: $(TEST_UI_OBJS)
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) $(TEST_UI_OBJS) -o $(TEST_UI_NAME)
	@echo "$(GREEN)Tests UI compiled! Run with ./$(TEST_UI_NAME)$(RESET)"

$(TEST_UI_OBJS): %.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDES_DIR) -c $< -o $@

## TEST GLOBAL ##

test: tests_domain tests_UI
	./$(TEST_DOMAIN_NAME)
	./$(TEST_UI_NAME)

## CLEAN ##
clean_tests:
	$(RM) $(TEST_DOMAIN_OBJS) $(TEST_DOMAIN_NAME) $(TEST_UI_OBJS) $(TEST_UI_NAME)

clean:
	$(RM) $(OBJS)

fclean: clean clean_tests
	$(RM) $(NAME)

re: fclean clean_tests all

.PHONY: all clean fclean re test tests_domain tests_UI