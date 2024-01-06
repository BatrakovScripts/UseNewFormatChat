/*

	Использовать вместе с библиотекой #include <smmem>
	
	Пример:
	
	public Action:Command(client, args)
	{ 
		if(client)
		{
			if(args)
			{
				UseNewFormatChat(1);
			}
			else
			{
				UseNewFormatChat(0);
			}
		}
	}
*/



stock UseNewFormatChat(use)
{
	if(use)
	{
		WriteByte(0x697B4B, 0x01);
	}
	else
	{
		WriteByte(0x697B4B, 0x38);
	}
}