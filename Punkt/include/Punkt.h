//
// Created by hubert on 15.05.19.
//

#ifndef LAB08_PUNKT_H
#define LAB08_PUNKT_H


class Punkt
{
public:
	Punkt (int x, int y) : x_coord (x), y_coord (y)
	{};

	int getXCoord () const
	{
		return x_coord;
	}

	int getYCoord () const
	{
		return y_coord;
	}

	template<int T>
	int wsp () const
	{
		return (T == 0 ? x_coord : y_coord);
	}

	template<typename T>
	T static min (const T object_1, const T object_2)
	{
		return (object_1 < object_2 ? object_1 : object_2);
	}

	template<typename T>
	T static max (const T object_1, const T object_2)
	{
		return (object_1 > object_2 ? object_1 : object_2);
	}


protected:
	int x_coord;
	int y_coord;
};

bool operator< (const Punkt object_1, const Punkt object_2)
{
	if (object_1.getXCoord () < object_2.getXCoord ())
		return true;
	else if (object_1.getXCoord () > object_2.getXCoord ())
		return false;
	else
	{
		if (object_1.getYCoord () < object_2.getYCoord ())
			return true;
		else if (object_1.getYCoord () > object_2.getYCoord ())
			return false;
		else
			return true;
	}
}

int operator> (const Punkt object_1, const Punkt object_2)
{
	return (object_2 < object_1);
}

#endif //LAB08_PUNKT_H
