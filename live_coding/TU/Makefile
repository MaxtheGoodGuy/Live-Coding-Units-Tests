##
## Makefile for  in /home/mex/astekance/LCTU/strlen
## 
## Made by MextheGoodGuy
## Login   <maximilien.oteifeh-pfennig@epitech.eu>
## 
## Started on  Mon Apr  9 11:50:15 2018 MextheGoodGuy
## Last update Wed Apr 11 08:06:21 2018 MextheGoodGuy
##

CC		= gcc

NAME		= my_strlen

SRCSDIR		= ./sources/

TESTSDIR	= ./tests/

CFLAGS		+= -W -Wall -Wextra

TESTS		= $(TESTSDIR)tests.c \
		  $(SRCSDIR)my_strlen.c

SRCS		= $(SRCSDIR)main.c \
		  $(SRCSDIR)my_strlen.c

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
