/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahapetro <ahapetro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 15:41:47 by ahapetro          #+#    #+#             */
/*   Updated: 2025/06/22 15:41:49 by ahapetro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char **argv, char **env)
{
	t_s	s;

	if (argc != 5)
	{
		perror("Invalid arguments");
		return (1);
	}
	fill_s(&s, argv);
	create_pipe(&s);
	ft_path_pass(&s, env);
	pipex(&s, env);
	return (0);
}
