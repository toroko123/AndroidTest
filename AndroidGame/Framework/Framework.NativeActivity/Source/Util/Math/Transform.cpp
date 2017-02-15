#include "Transform.h"


namespace util {

	Transform::Transform()
	{
	}

	Transform::Transform(Vector3F _position, Vector3F _rotation, Vector3F _scale)
		:position(_position), rotation(_rotation), scale(_scale)
	{
	}

	void Transform::translate(Vector3F&& velocity)
	{
		this->position += velocity;
	}

	const Mat4& Transform::getWorldMat()
	{
		return world;
	}



}