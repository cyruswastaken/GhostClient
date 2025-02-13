#pragma once
#include "entity.h" 

class c_minecraft : public c_jobject
{
public:
	c_minecraft(jobject object_in);

	static c_minecraft get_minecraft();
	c_entity get_local_player();
};