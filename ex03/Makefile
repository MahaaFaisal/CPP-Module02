CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Fixed.cpp main.cpp bsp.cpp Point.cpp
NAME = bsp

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all