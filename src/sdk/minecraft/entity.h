#pragma once

#include "../jvm.h"

class c_entity : public c_jobject
{
public:
	c_entity(jobject object_in);

	void set_sprinting(bool state);

};

