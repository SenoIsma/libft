NAME = libft.a

INC_DIR = Includes/
OBJS_DIR = Objs/

FTPARTIE1_DIR = Partie_1/
FTPARTIE1 = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c

FTPARTIE2_DIR = Partie_2/
FTPARTIE2 = ft_itoa.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_substr.c ft_striteri.c

FTBONUS_DIR = Partie_bonus/
FTBONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_lstdelone.c

SRCS := $(addprefix $(FTPARTIE1_DIR),$(FTPARTIE1)) $(addprefix $(FTPARTIE2_DIR),$(FTPARTIE2)) $(addprefix $(FTBONUS_DIR),$(FTBONUS))

OBJS = $(addprefix $(OBJS_DIR),$(SRCS:.c=.o))

DEPS = $(OBJS:.o=.d)

CC = cc

CFLAGS = -Wall -Wextra -Werror -I${INC_DIR} -MMD

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

-include $(DEPS)