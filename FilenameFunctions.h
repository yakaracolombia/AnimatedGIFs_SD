#ifndef FILENAME_FUNCTIONS_H
#define FILENAME_FUNCTIONS_H

#define USE_SPIFFS

int enumerateGIFFiles(const char *directoryName, bool displayFilenames);
void getGIFFilenameByIndex(const char *directoryName, int index, char *pnBuffer);
int openGifFilenameByIndex(const char *directoryName, int index);
int initSdCard(int chipSelectPin);

bool fileSeekCallback(unsigned long position);
unsigned long filePositionCallback(void);
int fileReadCallback(void);
int fileReadBlockCallback(void * buffer, int numberOfBytes);

#endif
