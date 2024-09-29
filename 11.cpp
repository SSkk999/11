
using namespace std;
#include <iostream>
#include <cmath>


///111111111111111111111111111111111111111111111111111111111111111111
//double  ck (int sk, int  sd) {
//	int sds = 1;
//	int cs = 1;
//	for ( int  i = 0 ; i  < sd; i++)
//	{
//		
//		sds = sk * sk;
//		cs = sds;
//		if(sd == 2 ){
//			return sds;
//		}
//		sds = cs * sk;
//		pow(sk, sd);
//		
//	}
//	
//
//}
//
//int main()
//{
//	cout << ck(3, 9);
//
//
//}
////////////////22222222222222222222222222222222222222222222
//int ck(int sk, int  sd) {
//
//	int sds = 0;
//	int ss = 0;
//	int sw = 0;
//	ss = sk;
//	sw = sd;
//
//	if (sd > sk) {
//		swap(sk, sd);
//	}
//	for (int i = ss; i <= sw; i++)
//	{
//	
//			sds += i;
//	}
//
//	return sds;
//}
//
//
//
//	int main()
//	{
//		cout << ck(2, 10);
//		
//
//	}

/////////////////33333333333333333333333333333333333333333333333333333333333333333333333333333333333333


	//int ck( int  sd) {

	//	int sum = 0;
	//	
	//	
	//	for (int i = 1; i < sd; i++)
	//	{
	//		if (sd % i ==  0){
	//			sum += i;
	//		}


	//
	//		
	//	}

	//	return sum == sd ;
	//}

	//void mazick(int st) {
	//	for (int i = 1; i <= st; i++)
	//	{
	//		if (ck(i)) {
	//			cout << i << endl;
	//		}
	//		
	//	}
	//	
	//}



	//int main()
	//{
	//	int sdd;
	//	cin >> sdd;
	//	mazick(sdd);

	//}
	/////////////////////////////////44444444444444444444444444444444444444444444444

//void ck(int  sd, int t) {
//	switch (t)
//	{
//	case 1:
//	{
//		for (int i = 0; i < sd; i++)
//		{
//			cout << (char)6;
//		}
//		break;
//	}
//	case 2:
//	{
//		for (int i = 0; i < sd; i++)
//		{
//			cout << (char)4;
//		}
//		break;
//	}
//	case 3:
//	{
//		for (int i = 0; i < sd; i++)
//		{
//			cout << (char)3;
//		}
//		break;
//	}
//	case 4:
//	{
//		for (int i = 0; i < sd; i++)
//		{
//			cout << (char)5;
//		}
//		break;
//	}
//	}
//
//}
//
//void mazick(int st)
//{
//	switch (st)
//	{
//	case 1: {
//		int sd = 0;
//		cout << "sk:" << endl;
//		cin >> sd;
//		ck(sd, 1);
//		break;
//
//	}
//	case 2: {
//		int sd = 0;
//		cout << "sk:" << endl;
//		cin >> sd;
//		ck(sd, 2);
//		break;
//	}
//	case 3: {
//		int sd = 0;
//		cout << "sk:" << endl;
//		cin >> sd;
//		ck(sd, 3);
//		break;
//	}
//	case 4: {
//		int sd = 0;
//		cout << "sk:" << endl;
//		cin >> sd;
//		ck(sd, 4);
//		break;
//	}
//
//
//	}
//}
//
//
//
//	int main(){
//	int ss = 0;
//	cout << "1:pika\n 2:byba\n 3:chirva\n 4:xresta\n" << endl;
//	cin >> ss;
//	mazick(ss);
//	
//
//}
///////////////////////////////////////////////////////////55555555555555555555555555555555555555555555555555555555555
	//void se(int ww) {
	//	int s1 = 0;
	//	int s2 = 0;
	//	int s3 = 0;
	//	int s4 = 0;
	//	int s5 = 0;
	//	int s6 = 0;
	//	s1 = ww % 10;
	//	s2 = ww / 10 % 10;
	//	s3 = ww / 10 / 10 % 10;
	//	s4 = ww / 10 / 10 / 10 % 10;
	//	s5 = ww / 10 / 10 / 10 / 10 % 10;
	//	s6 = ww / 10 / 10 / 10 / 10 / 10 % 10;
	//	if (s1 + s2 + s3 == s4 + s5 + s6) {
	//		cout << "chasluve";
	//	}
	//	else {
	//		cout << "neshasluve";
	//	}




	//}

	//
	//
	//
	//int main() {
	//	int sd = 0;

	//	cout << "chas:" << endl;
	//	cin >> sd;
	//	se(sd);

	//}
	///////////////666666666666666666666666666666666666666666666666666666666666666666666666666


int key1(int ke){
	for (int i = 0;  i < ke;  i++)
	{
		i = i + 1;
			if (i = ke) {
			return i;
		}
	}



	}



























int main() {
	int key = 0;
	cout << "key:";
	cin >> key;
	cout << "key:" << key1(key);

}