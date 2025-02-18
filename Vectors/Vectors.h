#pragma once

#include <iostream>

namespace lmt
{
	class Vector2
	{
	public:
		Vector2() { x = 0; y = 0; }
		Vector2(double X, double Y) { x = X; y = Y; }

		//Basic
		Vector2 operator + (const Vector2& vector) const
		{
			return Vector2(x + vector.x, y + vector.y);
		}

		Vector2 operator - (const Vector2& vector) const
		{
			return Vector2(x - vector.x, y - vector.y);
		}

		Vector2 operator * (const Vector2& vector) const
		{
			return Vector2(x * vector.x, y * vector.y);
		}

		Vector2 operator / (const Vector2& vector) const
		{
			return Vector2(x / vector.x, y / vector.y);
		}

		//Comparison
		bool operator == (const Vector2& vector) const
		{
			if (x == vector.x && y == vector.y)
				return true;
			else
				return false;
		}
		bool operator != (const Vector2& vector) const
		{
			if (x != vector.x && y != vector.y)
				return true;
			else
				return false;
		}
		bool operator > (const Vector2& vector) const
		{
			if (x > vector.x && y > vector.y)
				return true;
			else
				return false;
		}
		bool operator < (const Vector2& vector) const
		{
			if (x < vector.x && y < vector.y)
				return true;
			else
				return false;
		}

		//Assignment
		Vector2& operator += (const Vector2& vector)
		{
			x += vector.x;
			y += vector.y;
			return *this;
		}

		Vector2& operator -= (const Vector2& vector)
		{
			x -= vector.x;
			y -= vector.y;
			return *this;
		}

		Vector2& operator *= (const Vector2& vector)
		{
			x *= vector.x;
			y *= vector.y;
			return *this;
		}

		Vector2& operator /= (const Vector2& vector)
		{
			x /= vector.x;
			y /= vector.y;
			return *this;
		}

		//Unary
		Vector2 operator - () const
		{
			return Vector2(-x, -y);
		}

		//Postfix
		Vector2& operator++ ()
		{
			x += 1;
			y += 1;
			return *this;
		}
		Vector2& operator-- ()
		{
			x -= 1;
			y -= 1;
			return *this;
		}

		double x = 0, y = 0;
	};

	std::ostream& operator<<(std::ostream& stream, const Vector2& vector)
	{
		stream << "(" << vector.x << ", " << vector.y << ")";
		return stream;
	}
}