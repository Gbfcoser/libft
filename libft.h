/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: giborges <giborges@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:50:50 by giborges          #+#    #+#             */
/*   Updated: 2025/10/16 12:54:36 by giborges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdio.h>

int ft_memset(b);
void ft_memcpy(dest);
int ft_strlen(i);
int ft_toupper(c);
int ft_tolower(c);
char *ft_strdup(dup);
int ft_isprint(c);
int ft_isalpha(c);
int ft_isdigit(c);
int ft_isascii(c);
int ft_isanum(c);

#endif