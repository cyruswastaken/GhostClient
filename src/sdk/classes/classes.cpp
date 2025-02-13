#include "classes.h"
#include "../jvm.h"

void classes::load()
{
	minecraft_class = jvm::env->FindClass("ave");
	entity_class = jvm::env->FindClass("pk");
}