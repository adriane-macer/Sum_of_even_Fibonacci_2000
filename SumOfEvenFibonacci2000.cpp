// Sum of all even in the Fibonacci sequence under 2000
#include <iostream>

long sumOfEven()
{
	long sum = 0;
	
	int first = 1;
	int second = 2;
	
	while(second < 2000)
	{
		if(second%2 ==0)
			sum += second;
		
		int tmp = first;
		first = second;
		second  += tmp;
	}
	return sum;
}

int main()
{
	std::cout<<sumOfEven()<<std::endl;
}

