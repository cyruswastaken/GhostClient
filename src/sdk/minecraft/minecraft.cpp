#include "minecraft.h"
#include "../classes/classes.h"


c_minecraft::c_minecraft(jobject object_in) : c_jobject(object_in)
{

}

c_minecraft c_minecraft::get_minecraft()
{
	static jmethodID get_minecraft_method = jvm::env->GetStaticMethodID(classes::minecraft_class, "A", "()Lave;");
	return c_minecraft(jvm::env->CallStaticObjectMethod(classes::minecraft_class, get_minecraft_method));
}

c_entity c_minecraft::get_local_player()
{
	static jfieldID the_player_field = jvm::env->GetFieldID(classes::minecraft_class, "h", "Lbew;");
	return c_entity(jvm::env->GetObjectField(this->cached_object, the_player_field));
}
