#include "UserStory.h"

class SearchOponent : public UserStory{
public:
	void asA(){};

	void iWantTo(){};

	void inOrderTo(){
		ASSERT_TRUE(true);
	}
};

STORY(SearchOponent);
