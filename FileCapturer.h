#pragma once
#include "ImageCapturer.h"

class FileCapturer : ImageCapturer
{
public:
	Mat Capture() override;
	string filePath;

	FileCapturer(string filePath)
	{
		this->filePath = filePath;
	}
};

