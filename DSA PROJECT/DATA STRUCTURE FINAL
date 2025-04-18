#include<stdio.h>
#include<string.h>
#define P printf
#include<stdlib.h>
struct order{
    char item[20];
    int rate;
};
struct order Table[100];
int size=0;
void addList(char item[],int rate){
    strcpy(Table[size].item,item);
    Table[size].rate=rate;
    size++;
}
void printList(){
    printf("|----------------------------|\n");
    printf("| %-10s | %-13s |\n","ITEM","RATE");
    printf("|----------------------------|\n");
    for(int i=0;i<size;i++){
        printf("| %-10s |  ₹ %-10d |\n",Table[i].item,Table[i].rate);
    }
        printf("|----------------------------|\n");
}
void listofprice()
{
    P("CEG FOOD MENU PRICE LIST\n");
    P("|--------------------------|\n");
    P("| %-10s | %-11s |\n","FOOD","PRICE");
    P("|--------------------------|\n");
    P("| %-10s | %-13s |\n","ILDY" ,"₹10");
    P("| %-10s | %-13s |\n","PLAIN DOSA", "₹25");
    P("| %-10s | %-13s |\n","PONGAL", "₹30");
    P("| %-10s | %-13s |\n","POORI", "₹15");
    P("| %-10s | %-13s |\n","CHAPTHI", "₹15");
    P("| %-10s | %-13s |\n","VADA", "₹10");
    P("| %-10s | %-13s |\n","BONDA", "₹10");
    P("| %-10s | %-13s |\n","TEA", "₹10");
    P("| %-10s | %-13s |\n","COFFEE","₹15");
    P("| %-10s | %-13s |\n","BOOST","₹15");
    P("|--------------------------|\n");
    P("\n");
}
int bill(int choice)
{
    if (choice==1)
        return 10;
    if (choice== 2)
        return 25;
    if (choice== 3)
        return 30;
   if (choice==4)
        return 15;
    if (choice== 5)
        return 15;
   if (choice== 6)
        return 10;
   if (choice== 7)
        return 10;
   if (choice== 8)
        return 10;
    if (choice== 9)
        return 15;
    if (choice== 10)
        return 15;

}

int main(){
int choice,option,price=0;
int idly,dosa,pongal,poori,chapathi,vada,bonda,tea,coffee,boost=0;
while(choice != 11)
{
  P("|******************************************|\n");
  P("|... WELCOME TO CEG CANTEEN FOOD MEANU...  |\n");
  P("|                                          |\n");
  P("|   0.VIEW FOOD ITEMS PRICE LIST           |\n");
  P("|   1.IDLY                                 |\n");
  P("|   2.PLAIN DOSA                           |\n");
  P("|   3.PONGAL                               |\n");
  P("|   4.POORI                                |\n");
  P("|   5.CHAPTHI                              |\n");
  P("|                                          |\n");
  P("|   SNACKS...                              |\n");
  P("|   6.VADA                                 |\n");
  P("|   7.BONDA                                |\n");
  P("|   8.TEA                                  |\n");
  P("|   9.COFFEE                               |\n");
  P("|   10.BOOST                               |\n");
  P("|                                          |\n");
  P("|   11.DISPLAY YOUR BILL                   |\n");
  P("|                                          |\n");
  P("|******************************************|\n");
  P("ORDER YOUR FOOD : \n");
  scanf("%d",&choice);


  switch(choice)
  {
  case 0:
      listofprice();
      break;
  case 1:
    P("HOW MANY IDLY:\n");
    scanf("%d",&idly);
    option=(idly*bill(choice));
    addList("IDLY",option);
    price+=option;
    break;

  case 2:
    P("HOW MANY PLAIN DOSA: \n");
    scanf("%d",&dosa);
    option=(dosa*bill(choice));
    addList("PLAIN DOSA",option);
    price+=option;
    break;

  case 3:
       P("HOW MANY PLATE PONGAL: \n");
        scanf("%d",&pongal);
        option=(pongal*bill(choice));
        addList("PONGAL",option);
         price+=option;
        break;

   case 4:
       P("HOW MANY POORI: \n");
        scanf("%d",&poori);
        option=(poori*bill(choice));
        addList("POORI",option);
         price+=option;
        break;

    case 5:
       P("HOW MANY CHAPATHI: \n");
        scanf("%d",&chapathi);
        option=(chapathi*bill(choice));
        addList("CHAPATHI",option);
         price+=option;
        break;

    case 6:
       P("HOW MANY VADA: \n");
        scanf("%d",&vada);
         option=(vada*bill(choice));
         addList("VADA",option);
          price+=option;
         break;

    case 7:
           P("HOW MANY BONDA: \n");
           scanf("%d",&bonda);
         option=(bonda*bill(choice));
         addList("BONDA",option);
          price+=option;
        break;

    case 8:
           P("HOW MANY CUPS: \n");
            scanf("%d",&tea);
             option=(tea*bill(choice));
             addList("TEA",option);
              price+=option;
            break;

    case 9:
           P("HOW MANY CUPS: \n");
            scanf("%d",&coffee);
             option=(coffee*bill(choice));
             addList("COFFEE",option);
              price+=option;
            break;

    case 10:
           P("HOW MANY CUPS: \n");
            scanf("%d",&boost);
             option=(boost*bill(choice));
             addList("BOOST",option);
              price+=option;
            break;

      case 11:
      P("YOUR BILL\n");
      printList();
      P("TOTAL AMOUNT TO PAY : ₹ %d\n",price);
      P("PLEASE COLLECT YOUR FOOD AT DINE\n");
      P("THANK YOU , VIST AGAIN\n");
      P("HAVE A NICE DAY\n");
      exit(0);
  }
}
return 0;
}

