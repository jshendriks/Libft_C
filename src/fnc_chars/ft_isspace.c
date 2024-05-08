/* int ft_isspace(int c) 
   			- INPUT: 	int c an integer representing an ascii value
			- OUTPUT: 	int 
						1 if the input represents a space in ascii
						0 otherwise
*/

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\t')
		return (1);
	if (c == '\n' || c == '\r' || c == '\v')
		return (1);
	return (0);
}
