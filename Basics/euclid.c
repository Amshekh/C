static long GreatestDivisor(long first, long second)
{
	long third;
	
	while(third = first % second)
	{
		first = second;
		second = third;
	}

	return second;
}


long LeastMultiple(long first, long second)
{
	long third = GreatestDivisor(first, second);

	return first * second / third;
}


















