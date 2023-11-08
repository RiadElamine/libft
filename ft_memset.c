/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:32 by relamine          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:44 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memset (void *voidptr, int value, size_t count)
{
    size_t i;
    unsigned char * charptr = (unsigned char *)voidptr;
    
    i = 0;
    while (i < count)
    {
        charptr[i] = (unsigned char)(value); 
        i++;
    }
    return (voidptr);
}


// int main () 
// {
//     char str[] =  "riaD";
//     int char2 = 1337;
//     size_t size =  sizeof(str);
    


//     printf("%s", str);

//     printf("\n");
//     ft_memset (str, char2, size);
    
//     int length = 0;
//     while(str[ length ]) {
//         printf( "%c ", str[ length]);
//         length++;
//     }

//     // printf("\n");
//     // #include <string.h>
//     // char str1[] =  "riad";
//     // int char1 = '0';
//     // size_t size1 =  sizeof(str1);
    
//     // memset (str1, char1, size1);
    
//     // int length1 = 0;
//     // while(str1[ length1]) {
//     //     printf( "%c ", str1[ length1]);
//     //     length1++;
//     // }
    
    
// }


// int main ()
// {

//     int char2 = 0;
    
//     printf("%d \n",char2);

 
//     ft_memset (&char2,5 ,2);
//     ft_memset (&char2,57,1);
//     printf( "%d \n",char2 );

// }

// 1 byte =  bite for (-)  128 (-) bits
// 1 byte =  255 (+)  bits

//char = 1 byte = 8bits
//int = 4byte (32bit 64bit)

