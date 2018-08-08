/*
** hangman.h for hangman in /home/jeremy.elkaim/CPE_2016_stumper7/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Fri Jun  2 14:36:51 2017 jeremy elkaim
** Last update Fri Jun  2 16:55:22 2017 Filliat Etienne
*/

#ifndef HANGMAN_H_
# define HANGMAN_H_

# define INV_LIVES	"INvalid Lives size\n"
# define INV_FILE	"Invalid File\n"
# define BAD_ARGS	"Invalid Arguments\n"
# define ERROR		84
# define FAILURE	-1

int	parser(char **av);
int	my_strcmp(const char *str,const char *cmp);
int	check_valid_dico(const char *dico);
int	tries_nb(char *str);
char	*get_n_word(const char *dico, int nbr);
char	*choose_word(const char *dico, const int size);
char	*get_word(char *pathname);
char	*my_strncpy(char *dest, const char *src, int size);
void	my_putchar(const char c);
void	my_putstr(const char *str);
int	my_get_nbr(const char *str);
int	my_putnbr(int nb);
int	my_strlen(const char *str);
int	my_strlen_mod(const char *str);
int	count_words(const char *str);

#endif /* HANGMAN_H_ */
