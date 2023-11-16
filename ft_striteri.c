/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 00:02:44 by relamine          #+#    #+#             */
/*   Updated: 2023/11/12 12:22:01 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void ft_striteri(char *s, void (*f)(unsigned int,char *))
{
    unsigned int i;

    i = 0;
    if(!s)
        return ;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
// void f(unsigned int i, char *s)
// {
//     (void) i;
//     *s = *s + 1;
    
// }


// int main()
// {   
//     char s[] = "riad";
//     ft_striteri(s, f);
//     printf("%s\n", s);
// }