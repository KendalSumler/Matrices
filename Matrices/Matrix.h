#pragma once
class Vector2D
{
	float x, y;
public:
	Vector2D Addition(const Vector2D &a)const
	{
		Vector2D tmp = Vector2D(x + a.x, y + a.y);
		return tmp;
	};
	Vector2D Subtraction(const Vector2D &b)const
	{
		Vector2D tmp = Vector2D(x - b.x, y - b.y);
		return tmp;
	};
	Vector2D Multiply(const Vector2D & mult)const
	{
		Vector2D tmp = Vector2D(x * mult.x, y * mult.y);
		return tmp;
	};
	Vector2D(float x2, float y2)
	{
		x = x2;
		y = y2;
	}
	bool operator == (const Vector2D & other)const
	{
		if (x == other.x, y == other.y)
		{
			return true;
		}
		return false;
	}
	//precondition:  must have another vector to add to
	//postcondition: a new vector is made/returned that is the sum of this vector and
	//the other vector
	Vector2D operator + (const Vector2D & other)const
	{
		Vector2D *tmp = new Vector2D(this->x + other.x, this->y + other.y);
		return *tmp;
	}
	Vector2D operator - (Vector2D & other)
	{
		Vector2D *tmp = new Vector2D(this->x - other.x, this->y - other.y);
		return *tmp;
	}
	Vector2D operator * (Vector2D & other)
	{
		Vector2D *tmp = new Vector2D(this->x * other.x, this->y * other.y);
		return *tmp;
	}
};
class Vector3D
{
	float x, y, z;
public:
	Vector3D() {};
	Vector3D Addition(const Vector3D &a)
	{
		Vector3D tmp = Vector3D(x + a.x, y + a.y, z + a.z);
		return tmp;
	};
	Vector3D Subtraction(const Vector3D &b)
	{
		Vector3D tmp = Vector3D(x - b.x, y - b.y, z - b.z);
		return tmp;
	};
	Vector3D ScalMult(float mult)
	{
		Vector3D tmp = Vector3D(x * mult, y * mult, z * mult);
		return tmp;
	};
	Vector3D(float x2, float y2, float z2)
	{
		x2 = x;
		y2 = y;
		z2 = z;
	}
	Vector3D operator == (Vector3D & other)
	{
		Vector3D * tmp = new  Vector3D(this->x == other.x, this->y == other.y, this->z == other.z);
		return *tmp;
	};
	Vector3D operator + (Vector3D & other)
	{
		Vector3D * tmp = new Vector3D(this->x * other.x, this->y * other.y, this->z * other.z);
		return *tmp;
	};
	Vector3D operator - (Vector3D & other)
	{
		Vector3D * tmp = new Vector3D(this->x - other.x, this->y - other.y, this->z * other.z);
		return *tmp;
	}
};
class Vector4D
{
	float x, y, z, w;
public:
	Vector4D() {};
	Vector4D Addition(const Vector4D &a)
	{
		Vector4D tmp = Vector4D(x + a.x, y + a.y, z + a.z,w + a.w);
		return tmp;
	};
	Vector4D Subtraction(const Vector4D &b)
	{
		Vector4D tmp = Vector4D(x - b.x, y - b.y, z - b.z,w -b.w);
		return tmp;
	};
	Vector4D ScalMult(float mult)
	{
		Vector4D tmp = Vector4D(x * mult, y * mult, z * mult, w * mult);
		return tmp;
	};
	Vector4D(float x2, float y2, float z2, float w2)
	{
		x2 = x;
		y2 = y;
		z2 = z;
		w2 = w;
	}
	bool operator == (Vector4D & yes)
	{
		if (x == yes.x && y == yes.y && z == yes.z && w == yes.w)
		{
			return true;
		}
		return false;
	};
	bool operator + (Vector4D & yes)
	{
		if (x + yes.x && y + yes.y && z + yes.z && w + yes.w)
		{
			return true;
		}
		return false;
	};
	bool operator - (Vector4D & yes)
	{
		if (x - yes.x && y - yes.y && z - yes.z && w - yes.w)
		{
			return true;
		}
		return false;
	}
};
