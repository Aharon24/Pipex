/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:41:13 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/22 15:41:16 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error_children1_1(t_s *s)
{
	perror(s->argv1);
	if (s->pipefd[1] >= 0)
		close(s->pipefd[1]);
	free_split(s->cmd1_split);
	free_split(s->cmd2_split);
	exit(1);
}

void	error_children1_2(t_s *s)
{
	char	**res;

	res = ft_split(s->argv2, ' ');
	if (res[0] != NULL)
		perror(s->argv2);
	if (s->pipefd[1] >= 0)
		close(s->pipefd[1]);
	free_split(res);
	free_split(s->cmd1_split);
	free_split(s->cmd2_split);
	exit(127);
}

void	error_children2_1(t_s *s)
{
	perror(s->argv4);
	if (s->pipefd[0] >= 0)
		close(s->pipefd[0]);
	free_split(s->cmd2_split);
	free_split(s->cmd1_split);
	exit(1);
}

void	error_children2_2(t_s *s)
{
	perror(s->argv3);
	if (s->pipefd[0] >= 0)
		close(s->pipefd[0]);
	free_split(s->cmd2_split);
	free_split(s->cmd1_split);
	exit(127);
}
