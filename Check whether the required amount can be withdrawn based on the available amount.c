#include <stdio.h>
int main()
{
    int num;
    int choice;
    int tot = 0;
    int res = 1;
    while (res){
        printf("1.Add amount \n");
        printf("2. Withdraw amount: \n");
        printf("3. To End\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the amount to add: ");
            scanf("%d",&num);
            tot+=num;
            printf("Your balance is:%d\n",tot);
            break;
            
            case 2:
            printf("Enter the amount to add: ");
            scanf("%d",&num);
            if (tot>num){
            tot-=num;
            printf("you have withdrawed: %d\n",num);
            }
            else{
                printf("you have low balance..!!!\n");
            }
            printf("Your balance is:%d\n",tot);
            break;
            
            case 3:
            res = 0;
            break;
        }
        
    }
}
