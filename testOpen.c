#include <stdio.h>

#include <comp421/yalnix.h>
#include <comp421/iolib.h>
#include "iolib.c"

/*
 * 
 */
int main()
{
    // TracePrintf(0, "Making new directory...\n");
    initFileStorage();
    Dummy("testing");
    // Open("a");
    // Create("a");
    void *buf = malloc(sizeof(char) * 10);
    Read(19, buf, sizeof(char) * 10);

    return (0);
}