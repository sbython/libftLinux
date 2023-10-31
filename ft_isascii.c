int isascii(int c)
{
	if (c >> 7 == 0 )
       		return 1;
    	return 0;
}
