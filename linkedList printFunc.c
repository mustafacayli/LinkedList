node * yazdir(node *head){
    system("cls");
    if(head==NULL){
        printf("list is empty");
    }

    else{
        node *temp = head;
        printf("kayitli kisiler\n");
        printf("--------------\n");
        while(temp!=NULL){
            printf("%s\t%s\t%s\n",temp->ad,temp->soyad,temp->tel);
            temp = temp->next;
        }
        printf("--------------\n\n");
    }

    return head;
}
