node * arama(node *head){

    system("cls");

    if(head==NULL){
        printf("list is empty\n");

    }
    else{

        char numara[20];
        printf("Aradiginiz kisinin numarasi: ");   scanf("%s",numara);

        node *temp = head;
        while(temp!=NULL){
            if(strcmp(temp->tel,numara)==0){
                printf("ad      :%s \n",temp->ad);
                printf("soyad   :%s \n",temp->soyad);
                printf("telefon no  :%s \n",temp->tel);
                
            }
            temp = temp->next;
        }
        
    }

    return head;
}
