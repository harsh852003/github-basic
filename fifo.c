#include <stdio.h>
int main()
{
    int referenceString[10], pageFaults = 0, s, pages, frames;
    printf("\nEnter the number of Pages: ");
    scanf("%d", &pages);
    printf("\nEnter reference string values:\n");
    for (int i = 0; i < pages; i++)
    {
        printf("Value No. [%d]:\t", i + 1);
        scanf("%d", &referenceString[i]);
    }
    printf("\n What are the total number of frames: ");
    {
        scanf("%d", &frames);
    }
    int temp[frames];
    for (int i = 0; i < frames; i++)
    {
        temp[i] = -1;
    }
    for (int i = 0; i < pages; i++)
    {
        s = 0;
        for (int j = 0; j < frames; j++)
        {
            if (referenceString[i] == temp[j])
            {
                s++;
                pageFaults--;
            }
        }
        pageFaults++;
        if ((pageFaults <= frames) && (s == 0))
        {
            temp[i] = referenceString[i];
        }
        else if (s == 0)
        {
            temp[(pageFaults - 1) % frames] = referenceString[i];
        }
        printf("\n");
        for (int j = 0; j < frames; j++)
        {
            printf("%d\t", temp[j]);
        }
    }
    printf("\nTotal Page Faults: %d\n", pageFaults);
    return 0;
}
