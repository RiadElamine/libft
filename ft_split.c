/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:45:48 by relamine          #+#    #+#             */
/*   Updated: 2023/11/15 22:25:31 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

const char *skip_separator(const char *p, char c)
{
    while(*p && *p == c)
    {
        p++;
    }
    return p;
}

int lenoftable(const char *s, char c)
{
    int nblignes;

    nblignes = 0;
    while(*s)
    {
        // skip separator
        s = skip_separator(s,c);
        //skip size of one string
        while(*s && *s != c)
        {
            s++;
        }
        //count len of words
        if(*s == c || (*(s - 1) != c && *s == '\0'))
        {
            nblignes++;
        } 
    }
    return nblignes;
}

int lenoftable2(const char *s, char c, int j)
{
    int nblignes3;
    int i;

    nblignes3 = 0;

    if(j == -1)
        return 0;
    while(*s && nblignes3 <= j)
    {
        i = 0;
        // skip separator
        s = skip_separator(s,c);
        //count size of one string
        while(*s && *s != c)
        {
            i++;
            s++;
        }    
        //count len of words
        if(*s == c || (*(s - 1) != c && *s == '\0'))
            nblignes3++;
    }
    return i;
}

char **ft_split(char const *s, char c)
{
    int row_tabtwo;
    int nblignes2 ;
    int row = 0;
    int col;

    row_tabtwo =lenoftable(s, c);
    
    //create two dimensional table
    char **s1 = malloc((row_tabtwo + 1 ) * sizeof(char *));
    if(!s1)
        return 0;

    while (row < row_tabtwo)
    {
        col = 0;
        nblignes2 = lenoftable2(s,c,row);

        //create one dimensional table in table of two dimenstional
        s1[row] = malloc((nblignes2 + 1 )* sizeof(char));
        if(!s1[row] )
            return 0;
        //add items in table of one dimensional
        s = skip_separator(s,c);
        while(*s && *s != c)
        {
            s1[row][col] = *s;
            s++;
            col++;
        }
        s1[row][col] = '\0';

        // //free table one dimensional
        // free(s2);
        row++;
    }

    return (s1);
}

// int main()
// {
//     // char const *s = ",1riadd,,,2hjjsf,,,,,,";
//     // char const *s = "split  ||this|for|me|||||!|";

//     // hadi fiha ghalat
//     // char const *s = "\0aa\0bbb";
//     char const *s = "hello!";
//     // char const *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
//     // char const *s = "      split       this for   me  !       ";
//     // char const *s = "          ";

//     char c = ' ';
//     char **s1 = ft_split(s,c);
//     if(s1)
//     {
//         int w = 0;
//         while(s1[w])
//         {
//             printf("%s\n",s1[w]);
//             w++;
//         }
//     }

   
// }


