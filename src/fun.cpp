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
	int stroch = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			i++;
			while (str[i] != ' ')
			{
				if (str[i] >= 97 && str[i] <= 122)
				{
					i++;
				}
				else
				{
					i++;
					stroch = 1;
				}
			}
			if (stroch == 0)
			{
				counter++;
			}
		}
		else
		{
			while (str[i] != ' ')
			{
				if (str[i] == '\0')
					break;
				i++;
			}
		}
		stroch = 0;
		i++;
	}
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
