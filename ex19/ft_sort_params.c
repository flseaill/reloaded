/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flseaill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 17:49:28 by flseaill          #+#    #+#             */
/*   Updated: 2017/01/11 18:02:40 by flseaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putstrnlen(char *str){
	int i;

	i = 0;
	while (str[i]){
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}

int		ft_strcmp(char *s1, char *s2){
	
}

void	ft_swap(char *a, char *b){
	char *c;

	*c = *a;
	*a = *b;
	*b = *c;
}

void	ft_sort_params(char **tab){
	int i;

	i = 0;
	while (*tab[i]){
		if (strcmp(*tab[i], *tab[i + 1]) < 0){
			ft_swap(*tab[i], *tab[i + 1];
			i = 0;
		}
		else
			i++;
	}
}

int		main(int argc, char **argv[]){
	argc = argc + 1;
	while (argv[ac]){
		ft_putstr(av[argc])
			argc++;
	}
	return (0);
}
