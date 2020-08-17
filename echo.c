//回音

#include <stdio.h>
#include <string.h>

int main(void)
{
	char food[] = "怎么办我说话有回音我好慌";
	char* ptr;
	
	for(ptr = food;ptr < food + strlen(food);ptr += 2)
	{
		puts(ptr);
	}
	return 0;
}