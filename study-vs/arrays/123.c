#include <stdio.h>
#include <malloc.h>

void main()
{
	int N , *arr  ;
	//������� ���-�� ��������� 1<N<100 ;
	scanf("%d" , &N );
	//������� ������ ��� ������;
	arr= (int*)malloc(N * sizeof(int));
	
	//�������� ������ ������� �� �������;
	for (int i = 0 ; i < N ; i++ )
	{   
		scanf("%d" , &arr[i] );
	}
    
	//������ ������ �������� �������
	for (int i = 0; i < N; i += 2) {
		printf("%d " , arr[i]);
	}
	//����������� ������
	free(arr);
	printf("\n");
	system("pause");
}