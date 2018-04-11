##
## Makefile for  in /home/mex/astekance/Live-Coding-Units-Tests/sort_my_movies
## 
## Made by MextheGoodGuy
## Login   <maximilien.oteifeh-pfennig@epitech.eu>
## 
## Started on  Tue Apr 10 17:54:24 2018 MextheGoodGuy
## Last update Wed Apr 11 07:21:53 2018 MextheGoodGuy
##

CC		= gcc

NAME		= sort_my_collection

TESTSDIR	= ./tests/

SRCSDIR		= ./sources/

CFLAGS		+= -W -Wall -Wextra

CPPFLAGS	+= -I includes/

TESTS		= $(TESTSDIR)tests.c \
		  $(SRCSDIR)sort_my_movies.c

SRCS		= $(SRCSDIR)sort_my_movies.c \
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
