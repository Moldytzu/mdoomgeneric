#include "doomgeneric.h"
#include <stdio.h>

void DG_Init()
{
	printf("init");
}

void DG_DrawFrame()
{
	printf("draw");
}

void DG_SleepMs(uint32_t ms)
{
	printf("sleep(%u)", ms);
}

uint32_t DG_GetTicksMs()
{
	return 0;
}

int DG_GetKey(int* pressed, unsigned char* doomKey)
{
}

void DG_SetWindowTitle(const char * title)
{
}

int main(int argc, char **argv)
{
    doomgeneric_Create(argc, argv);

    while (1)
    {
        doomgeneric_Tick();
    }

    return 0;
}
