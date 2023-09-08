#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main()
{
    //создаём пустую очередь
    init_queue();
    //проверяем, что очередь пуста
    show_queue();
    //добавляем 1 элемент
    push_queue(1);
    //проверяем, что он добавлен
     show_queue();
    //добавляем еще 2 элемента
     push_queue(2);
     push_queue(3);
    //проверяем, что они в правильном порядке
     show_queue();
    //снимаем первый элемент
    printf("pop: %d\n",pop_queue());
    show_queue();
    //проверяем его значение и остаток очереди
    printf("pop: %d\n",pop_queue());
    show_queue();
    //делаем это же для оставшихся элементов
    printf("pop: %d\n",pop_queue());
    show_queue();

    // очередь опустошена полностью

    //снимаем элемент с пустой очереди, должны получить -1
    printf("pop: %d\n",pop_queue());
    //проверяем, что очередь пуста
    show_queue();
    return 0;
}
