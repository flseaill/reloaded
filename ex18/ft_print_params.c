/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:42:44 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/11 17:48:45 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str){
	int i;

	i = 0;
	while (str[i]){
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str){
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
}


int		main(int argc, char *argv[]){
	argc = argc + 1;
	while (argv[ac]){
		ft_putstr(av[argc])
		argc++;
	}
	return (0);
}
