unsigned int faStr1(const char *str)
{
    	int i = 0;
	unsigned int counter = 0;
	bool log = false;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			if (str[i] >= '0' && str[i] <= '9')
			{
				while (str[i] != ' ')
				{
					if (str[i] == '\0')
						break;
					i++;
				}
			}
			else
			{
				while (str[i] != ' ')
				{
					if (str[i] >= '0' && str[i] <= '9' && log == false)
					{
						i++;
						log = true;
					}
					else
					{
						i++;
					}
				}
				if (log == false)
					counter++;
			}
			log = false;
		}
		i++;
	}
	return counter;
}
unsigned int faStr2(const char *str)
{
    int i = 0;
    unsigned int counter = 0;
    int log = 0;
    int uppercase_word = 0;
    while (str[i] != '\0')
    {
        if (log == 0 && str[i] >= 65 && str[i] <= 90)
        {
            log = 1;
            uppercase_word = 1;
        }
        else if (log == 1 && str[i] == ' ')
        {
            if (uppercase_word == 1) counter++;
            uppercase_word = 0;
            log = 0;
        }
        else if (log == 1 && str[i] != ' ' && uppercase_word == 1)
        {
            if (str[i] >= 65 && str[i] <= 90) uppercase_word = 0;
            if (str[i] > 122 || str[i] < 65) uppercase_word = 0;
        }
        i++;
    }
    if (log == 1 && uppercase_word == 1) 
	    counter++;
    return counter;
}
unsigned int faStr3(const char *str)
{
 int i = 0;
	double sum = 0;
	int kolvo = 0;
	int count_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
					break;
				count_word++;
				i++;
			}
			kolvo++;
		}
		else
		{
			i++;
		}
	}
	sum = count_word;
	sum = sum / double(kolvo);
	int itog = sum;
	if (sum - (float)itog >= 0.5)
		itog++;

	return itog;
}
