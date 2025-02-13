#pragma once
#include <jni/jni.h>

namespace classes
{
	void load();
	inline jclass minecraft_class = nullptr, entity_class = nullptr;
}