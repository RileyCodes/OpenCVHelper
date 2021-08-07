#include "FileCapturer.h"



Mat FileCapturer::Capture()
{
	return imread(filePath, 0);
}
