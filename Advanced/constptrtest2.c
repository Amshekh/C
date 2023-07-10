int main(void)
{
	long m = 12, n = 23;
	
	long* p = &m;		// p is pointer to a long value.

	long** pp = &p;		// pp is pointer to a pointer
						// pointing to a long value.
	
	const long* pk = &m; // pk is pointer to a long value that is constant.

	long* const kp = &m; // kp is a constant pointer to a long a value.

	const long* const kpk = &m; // kpk is a constant pointer 
								// to a long value that is constant.

	*p = n;
	
	//*pk = n;			// compile-time error.
	pk = &n;

	*kp = n;
	//kp = &n;	        // compile-time error.
	
	//*kpk = n;			// compile-time error.
	//kpk = &n;			// compile-time error.
}













