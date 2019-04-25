#include <iostream>
using namespace std;

struct VAR{
	float i;
};

struct LINE{//k*x+a
	float a, k;
	VAR* x;

	LINE(){}
	LINE(int a) : a(a), k(0), x(0) {}
	LINE(VAR& v) : a(0), k(1), x(&v) {}
};

LINE operator + (LINE A, LINE B){//assumes that A.x == 0 or B.x == 0 or A.x == B.x
	LINE R;
	R.a = A.a + B.a;
	R.k = A.k + B.k;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator - (LINE A, LINE B){//same as +
	LINE R;
	R.a = A.a - B.a;
	R.k = A.k - B.k;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator * (LINE A, LINE B){//assumes that A.x == 0 or B.x == 0
	LINE R;
	R.a = A.a * B.a;
	R.k = A.k * B.a + B.k * A.a;
	if(A.x) R.x = A.x;
	else R.x = B.x;
	return R;
}

LINE operator / (LINE A, LINE B){//assumes that B.x == 0
	LINE R;
	R.a = A.a / B.a;
	R.k = A.k / B.a;
	R.x = A.x;
	return R;
}

void operator == (LINE A, LINE B){
	LINE C = A - B;
	C.x->i = -C.a/C.k;
}

int main(){
    int a, b;
    a + b = 3
	int A = 3;
	VAR B;
	VAR C;
	VAR D;
	VAR E;

	//5 == (2 + (y-7)*4)/2;

	2 * A == C + D;
	B == C.i + D.i;
	B.i == 2 * E;
	B.i == 3 * D.i + E.i;

    cout <<"A = " << A << endl;
    cout <<"B = " << B.i << endl;
	cout <<"C = " << C.i << endl;
	cout <<"D = " << D.i << endl;
    cout <<"E = " << E.i << endl;

	//cout << z.i * 2 << endl;


    system("PAUSE");
	return 0;
}
