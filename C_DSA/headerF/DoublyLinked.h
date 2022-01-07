#include <stdio.h>
#include <stdlib.h>
#include <DataType.h>

void AddFront(DoublyLinked **head, int val){
    DoublyLinked *list = *head; 
    DoublyLinked *temp = (DoublyLinked*)malloc(sizeof(DoublyLinked));
    DoublyLinked **prev;
    temp->Next = NULL;
    temp->val = val;
    
    while(1){
        if(list == NULL)
            break;
        list = list->Next;
        prev = &list;
    }

    temp->Previous = *prev;
    printf("fuck you");
    list = temp;
    list->val = val; 
}

void createDoubleList(DoublyLinked **list, int size){
    *list = (DoublyLinked*)malloc(sizeof(DoublyLinked));
    int val;
    
    for(int i = 0; i < size; i++){
        printf("%dth, val", i);
        scanf("%d: \n", &val);
        AddFront(&list, val);
    }
}

void printDouble(DoublyLinked *list){
    while(list != NULL){
        printf("val: %d\n", list->val);
        list = list->Next;
    }
}

void printListBack(DoublyLinked *list){
   DoublyLinked *temp;
    while(temp = *list; temp != NULL; temp = temp->next){

    }
}