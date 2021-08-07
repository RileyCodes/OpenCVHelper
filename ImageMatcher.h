#include "global.h"
#pragma once

#include "ImageCapturer.h"
#include "FileCapturer.h"


struct ImageMatchResult
{
	int x = -1;
	int y = -1;
	float score = 0.0;
};
class ImageMatcher
{
public:
	static bool MatchSift(FileCapturer& temp, FileCapturer&match, ImageMatchResult& result);
	static bool MatchORB(FileCapturer& temp, FileCapturer& match, ImageMatchResult& result);
};

