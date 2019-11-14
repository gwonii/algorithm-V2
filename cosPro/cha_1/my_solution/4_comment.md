## 체크하기 

* 숫자 각 자릿수 변경하기 

```c++

long long solution(long long num) {
	num++;
	long long digit = 1;
	// 1의 자리 부터 num의 자릿수 까지 각 자릿수 확인하는 방법
    while (num / digit % 10 == 0) {
		num += digit;
		digit *= 10;
	}
	
	return num;
}


```