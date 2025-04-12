#include<stdio.h>
#define P printf
#define MAX 100
int main(){
int choice,option;
int idly,dosa,pongal,poori,idiyappam,vada,bonda,tea,coffee,boost;
while(choice != 11)
{
  P("CEG CANTEEN FOOD MEANU...\n");
  P("1.IDLY\n");
  P("2.PLAIN DOSA\n");
  P("3.PONGAL\n");
  P("4.POORI\n");
  P("5.IDIYAPPAM\n");
  P("\n");
  P("SIDEDISHES...\n");
  P("6.VADA\n");
  P("7.BONDA\n");
  P("\n");
  P("SNACKS...\n");
  P("8.TEA\n");
  P("9.COFFEE\n");
  P("10.BOOST\n");
  P("\n");
  P("11.DISPLAY YOUR BILL\n");
  P("\n");
  P("ORDER YOUR FOOD : \n");
  scanf("%d",&choice);


  switch(choice)
  {
  case 1:
    P("HOW MANY IDLY:\n");
    scanf("%d",&idly);
    break;

  case 2:
    P("HOW MANY DOSA: \n");
    scanf("%d",&dosa);
    break;

  case 3:
       P("HOW MANY PONGAL: \n");
        scanf("%d",&pongal);
        break;

   case 4:
       P("HOW MANY POORI: \n");
        scanf("%d",&poori);
        break;

    case 5:
       P("HOW MANY IDIYAPPAM: \n");
        scanf("%d",&idiyappam);
        break;

    case 6:
       P("HOW MANY VADA: \n");
        scanf("%d",&vada);
        break;
        
    case 7:
           P("HOW MANY BONDA: \n");
        scanf("%d",&bonda);
        break;

    case 8:
           P("HOW MANY CUPS: \n");
            scanf("%d",&tea);
            break;

    case 9:
           P("HOW MANY CUPS: \n");
            scanf("%d",&coffee);
            break;

    case 10:
           P("HOW MANY CUPS: \n");
            scanf("%d",&boost);
            break;
  
      case 11:
      P("YOUR BILL\n");
  }
}
return 0;
}

