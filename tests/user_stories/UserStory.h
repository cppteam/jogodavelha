#ifndef USER_STORY_H_
#define USER_STORY_H_

#include <gtest/gtest.h>

class UserStory{
public:
	virtual void asA() = 0;
	virtual void iWantTo() = 0;
	virtual void inOrderTo() = 0;

};

#define STORY(story) TEST(story ## Story, story ## Test){UserStory* us = new story(); us->asA(); us->iWantTo(); us->inOrderTo(); delete us;}

#endif
