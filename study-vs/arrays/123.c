#include <stdio.h>
#include <malloc.h>

void main()
{
	int N , *arr  ;
	//считала кол-во элементов 1<N<100 ;
	scanf("%d" , &N );
	//выдел€ю пам€ть под массив;
	arr= (int*)malloc(N * sizeof(int));
	
	//заполн€ю массив данными из консоли;
	for (int i = 0 ; i < N ; i++ )
	{   
		scanf("%d" , &arr[i] );
	}
    
	//вывожу четные элементы массива
	for (int i = 0; i < N; i += 2) {
		printf("%d " , arr[i]);
	}
	//освобождаем пам€ть
	free(arr);
	printf("\n");
	system("pause");
}