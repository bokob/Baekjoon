// yohan5050의 코드
// 부호를 따로 받을 필요가 없다.
// 통째로 정수로 받을 수가 있다.

#include <cstdio>
int main() {
	bool neg=false;
	int num, ans=0;
	while(scanf("%d", &num)==1) {		
		if(num<0) neg=true;	
		if(neg) ans+=(num>=0 ? num*(-1) : num);	
		else ans+=num;
	}
	printf("%d\n", ans);
}
