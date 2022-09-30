//
// Created by x0lotl on 9/29/22.
//

template<class T> int sizeOf(T x){
	x = 1;
	int k = 0;

	while (x) {
		x <<= 1;
		++k;
	}

	return k;
}