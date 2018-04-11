##
## Makefile for  in /home/mex/astekance/Live-Coding-Units-Tests/live_coding/TDD
## 
## Made by MextheGoodGuy
## Login   <maximilien.oteifeh-pfennig@epitech.eu>
## 
## Started on  Wed Apr 11 08:08:16 2018 MextheGoodGuy
## Last update Wed Apr 11 08:08:36 2018 MextheGoodGuy
##

CC		= gcc

NAME		= my_collection

TESTSDIR	= ./tests/

SRCSDIR		= ./sources/

CFLAGS		+= -W -Wall -Wextra

CPPFLAGS	+= -I includes/

TESTS		= $(SRCSDIR)my_collection.c \
		  $(TESTSDIR)tests.c \

SRCS		= $(SRCSDIR)my_collection.c \
		  $(SRCSDIR)main.c

TESTSOBJS	= $(TESTS:.c=.o)

OBJS		= $(SRCS:.c=.o)

LDFLAGS		= -lcriterion --coverage

all :		$(NAME)

$(NAME) :	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

tests_run :	$(TESTSOBJS)
		$(CC) -o units_tests $(TESTSOBJS) $(LDFLAGS)
		./units_tests

clean :
		$(RM) $(OBJS)
		$(RM) $(TESTSOBJS)
		$(RM) *.gcda
		$(RM) *.gcno

fclean :	clean
		$(RM) $(NAME)
		$(RM) ./units_tests

re : 		fclean all

.PHONY : 	all clean fclean re tests_run
