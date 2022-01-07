   int val1, val2;
    for(int i = 0; i < pos1; i++)
        temp1 = temp1->Next;

    val1 = temp1->val;

    for(int i = 0; i < pos2; i++)
        temp2 = temp2->Next;

    val2 = temp2->val;

    temp1 = *list;

    for(int i = 0; i < pos1; i++)
        temp1 = temp1->Next;
    
    temp1->val = val2;

    **list = *temp1;

    temp1 = *list;
    
    for(int i = 0; i < pos2; i++)
        temp1 = temp1->Next;

    temp1->val = val1;

    **list = *temp1;