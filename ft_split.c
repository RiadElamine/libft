/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 04:45:48 by relamine          #+#    #+#             */
/*   Updated: 2023/11/16 18:31:50 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static char **free_prevtb(char ** s1, int row)
{
    while(row >= 0)
    {
        free(s1[row]);
        row--;
    }
    free(s1);
    return 0;
}
static const char *skip_separator(const char *p, char c)
{
    while(*p && *p == c)
        p++;
    return p;
}

static int Rows(const char *s, char c)
{
    int nblignes;

    nblignes = 0;
    while(*s)
    {
        // skip separator
        s = skip_separator(s,c);
        //skip columns of row
        while(*s && *s != c)
            s++;
        //count rows
        if(*s == c || (*(s - 1) != c && *s == '\0'))
            nblignes++;
    }
    return nblignes;
}

static int column(const char *s, char c)
{
    int checkend;
    int number_colmns;

    checkend = 0;
    while(*s && checkend == 0)
    {
        number_colmns = 0;
        // skip separator
        s = skip_separator(s,c);
        //count size of one column in one row
        while(*s && *s != c)
        {
            number_colmns++;
            s++;
        }    
        //final of row
        if(*s == c || (*(s - 1) != c && *s == '\0'))
            checkend = 1;
    }
    return number_colmns;
}
static const char *add_items(char const *s,char c,char **s1,int row)
{
    int col;

    col = 0;
    s = skip_separator(s,c);
    while(*s && *s != c)
    {
        s1[row][col] = *s;
        s++;
        col++;
    }
    s1[row][col] = '\0';
    return s;
}
char **ft_split(char const *s, char c)
{
    int row_tabtwo;
    int nblignes2 ;
    int row;

    row_tabtwo = Rows(s, c);
    row = 0;
    //create two dimensional table
    char **s1 = malloc((row_tabtwo + 1 ) * sizeof(char *));
    if(!s1)
        return 0;
    while (row < row_tabtwo)
    {
        nblignes2 = column(s,c);
        //create one dimensional table in table of two dimenstional
        s1[row] = malloc((nblignes2 + 1 )* sizeof(char));
        if(!s1[row] )
            return free_prevtb(s1, row);
        //add items in table of one dimensional and skip him and return new string
        s = add_items(s,c,s1,row);
        row++;
    }
    s1[row_tabtwo] = NULL;
    return (s1);
}

// int main()
// {
//     // char const *s = ",1riadd,,,2hjjsf,,,,,,";
//     // char const *s = "split  ||this|for|me|||||!|";

//     // hadi fiha ghalat
//     // char const *s = "\0aa\0bbb";
//     // char const *s = "hello!";
//     // char const *s = "^^^1^^2a,^^^^3^^^^--h^^^^";
//     // char const *s = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
//     // char const *s = "      split       this for   me  !       ";
//     // char const *s = "          ";

//     // char c = '^';
//     // char **s1 = ft_split(s,c);
//     // if(s1)
//     // {
//     //     int w = 0;
//     //     while(s1[w])
//     //     {
//     //         printf("%s\n",s1[w]);
//     //         w++;
//     //     }
//     // }

  
// }


// int main()
// {
//     // char const *s = ",1riadd,,,2hjjsf,,,,,,";
//     // char const *s = "split  ||this|for|me|||||!|";

//     // hadi fiha ghalat
//     // char const *s = "\0aa\0bbb";
//     char const *s = "hello!      gfdgdfgdf     ";
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


