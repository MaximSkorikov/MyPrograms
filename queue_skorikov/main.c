#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    //������ ������ �������
    init_queue();
    //���������, ��� ������� �����
    show_queue();
    //��������� 1 �������
    push_queue(1);
    //���������, ��� �� ��������
     show_queue();
    //��������� ��� 2 ��������
     push_queue(2);
     push_queue(3);
    //���������, ��� ��� � ���������� �������
     show_queue();
    //������� ������ �������
    printf("pop: %d\n",pop_queue());
    show_queue();
    //��������� ��� �������� � ������� �������
    printf("pop: %d\n",pop_queue());
    show_queue();
    //������ ��� �� ��� ���������� ���������
    printf("pop: %d\n",pop_queue());
    show_queue();

    // ������� ���������� ���������

    //������� ������� � ������ �������, ������ �������� -1
    printf("pop: %d\n",pop_queue());
    //���������, ��� ������� �����
    show_queue();
    return 0;
}
