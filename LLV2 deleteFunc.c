node * sil(node *head){

    if(head==NULL){
        printf("list is empty\n");
    }

    else{
        char numara[20];

        printf("silencek kisinin numarasi: ");  scanf("%s",numara);

        if(head->next==NULL && strcmp(head->tel,numara)==0){
            free(head);
            head=NULL;
            printf("now list is empty\n");

        }
        else if(head->next!=NULL && strcmp(head->tel,numara)==0){
            node *temp = head->next;
            free(head);
            head = temp;

            printf("%s numarali kisi silindi\n",numara);
        }
        else{
            node *temp = head;
            node *temp2 = head;
            while(temp->next!=NULL){
                if(strcmp(temp->tel,numara)==0){
                    
                    temp2->next=temp->next;
                    free(temp);
                    printf("%s silindi\n",numara);
                    
                }
                temp2 = temp;
                temp = temp->next;
            }
            if(strcmp(temp->tel,numara)==0){
                    
                    temp2->next=NULL;
                    free(temp);
                    printf("%s numarali kisi silindi\n",numara);
                    
                }
        }
    }
    return head;
}
