/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:42:15 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/22 15:42:17 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/wait.h>
# include "libft.h"
# include "ft_printf.h"

/////stract 

typedef struct s_s
{
	int		input_fd;
	int		output_fd;
	char	**cmd1_split;
	char	**cmd2_split;
	int		checker1;
	int		checker2;
	char	*full_path;
	char	**paths;
	char	*path1;
	char	*path2;
	int		i;
	int		pipefd[2];
	char	*path;
	int		status2;
	int		status1;
	char	*argv2;
	char	*argv3;
	char	*argv1;
	char	*argv4;
	pid_t	pid1;
	pid_t	pid2;
}	t_s;

//error.c
void	error_children1_1(t_s *s);
void	error_children1_2(t_s *s);
void	error_children2_1(t_s *s);
void	error_children2_2(t_s *s);
void	error_children1_3(char **env);
void	error_children2_3(char **env);
void	check_input(t_s *s);

// open_files.c //for open and input and output files
int		open_input_file(char *file1);
int		open_output_file(char *file2);

// check_validation // for checking any validation  NEW { ft_check_end () }
void	check_validation(char *file1, char *file2);
void	ft_success_path(t_s *s, char *path1, char *path2);

void	fill_s(t_s *s, char **argv);
// new 
char	*ft_check_env(char **env);
void	ft_path_pass(t_s *s, char **env);
void	ft_en_ch_2(t_s *s, char **cmd2_split);
void	ft_en_ch_1(t_s *s, char **cmd1_split);
void	ft_en_ch_1(t_s *s, char **cmd1_split);
void	ft_s_cmd1_s(void);
void	ft_path_er(t_s *s);

// pipe.c // for working with pipe
void	create_pipe(t_s *s);

// free.c
void	free_split(char **arr);

// find_path.c // for find full cmd path
char	*find_path(t_s *s, char *cmd);

// ft_pipex.c
void	pipex(t_s *s, char **env);

#endif