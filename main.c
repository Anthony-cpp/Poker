#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define WIN  if(scorescore[0]/4==0&&scorescore[1]/4!=0){ printf("%sの勝利!!\n",player);winnerwinner[0]+=1; }else if(scorescore[0]/4!=0&&scorescore[1]/4==0){ winnerwinner[1]+=1;printf("コンピューターの勝利!!\n");}else if(scorescore[0]/4>scorescore[1]/4){ printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}else if(scorescore[0]/4<scorescore[1]/4){ printf("コンピューターの勝利!!\n");winnerwinner[1]+=1; }else printf("引き分け\n");
int main(void)
{
	int aaa[50];
	int bbb[50];
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,aa=0,ab=0,ac=0,ad=0,ae=0,af=0,ag=0,ah=0,ai=0,aj=0,ak=0,al=0,am=0,an=0,ao=0,ap=0,aq=0,ar=0,as=.0,at=0,au=0,av=0,aw=0,ax=0,ay=0,az=0,axyz=0;
	int bb,bc,bd=0,be,bf,bg,bh,bi,bj,bk,bl,bm,bn,bo,bp,bq,br,bs,bt,bu,bv,bw,bx,by,bz,ca,cb,cc,cd,ce=-1,cf,cg,ch[10],ci,cj,ck;
	int tmp,aaaa,bbbb,test=1,testtest;
	int kaisuu,kaisuu2;
	int winner,winnerwinner[2]={0,0};
	int count=0;
	int score[10];
	int scorescore[2]={0,0};
	int scorescorescore[2];
	int cwww[5];
	char player[100];
	srand(time(NULL));
	system("COLOR 0A");
	for(;;){
		printf("\n");
	printf("       ■■■    ■■■■  ■■■    ■    ■  ■■■■  ■■■  \n");
	printf("       ■    ■  ■    ■  ■    ■  ■  ■    ■        ■    ■\n");
	printf("       ■■■    ■    ■  ■■■    ■■      ■■■■  ■■■  \n");
	printf("       ■        ■    ■  ■  ■    ■  ■    ■        ■  ■  \n");
	printf("       ■        ■■■■  ■    ■  ■    ■  ■■■■  ■    ■\n");
	printf("\n");
	printf("                  --- please push any bottun ---\n");
       getch(player);
	system("cls");
	printf(" ★役一覧★\n\n");
	printf("ノーペア  何も役がないこと\n\n");
	printf("ワンぺア  １組のカードの数字が同じ\n\n");
	printf("ツーペア  ２組のカードの数字がそれぞれ同じ\n\n");
	printf("スリーカード   ３枚のカードの数字が同じ\n\n");
	printf("ストレート  ５枚のカードの数字続いている※ただし１と１３はつながる\n\n");
	printf("フラッシュ  ５枚のカードの記号がすべて同じ\n\n");
	printf("フルハウス  ワンペアとスリーカードを合わせたもの\n\n");
	printf("フォーカード  ４枚のカードの数字が同じ\n\n");
	printf("ストレートフラッシュ  ストレートとフラッシュを合わせたもの\n\n");
	printf("ロイヤルストレートフラッシュ  スペードの１,スペードの１０,スペードの１１,スペードの１２,スペードの１３の５枚のカードを持っているとき\n\n");
	system("Pause");
	system("cls");
	printf("プレイヤーの名前を入力してください※ただしスペースは入れないでください\n");
	 scanf("%s",player);
	system("Pause");
	system("cls");
	for(testtest=0;testtest<5;testtest++){
		printf("%d回戦\n",testtest+1);
	if(strcmp(player,"CUBE")==0){
		printf("%sの番です\n",player);
		aaa[0]=2;
		aaa[1]=38;
		aaa[2]=42;
		aaa[3]=46;
		aaa[4]=50;
		c++;
		ap+=1;
		at+=1;
		al+=1;
		ax+=1;
}else if(strcmp(player,"テスト用ゲーム")==0){
		printf("%sの番です\n",player);
		aaa[0]=1;
		aaa[1]=37;
		aaa[2]=41;
		aaa[3]=45;
		aaa[4]=49;
		b++;
		ao+=1;
		as+=1;
		ak+=1;
		aw+=1;
}else if(strcmp(player,"player(仮)")==0){
		printf("%sの番です\n",player);
		aaa[0]=0;
		aaa[1]=1;
		aaa[2]=49;
		aaa[3]=50;
		aaa[4]=51;
		a++;
		b+=1;
		aw+=1;
		ax+=1;
		ay+=1;
}else if(strcmp(player,"コマンド")==0){
		printf("★コマンド一覧★\n");
		printf("「CUBE」 「テスト用ゲーム」 「player(仮)」\n ");
		printf("%sの番です\n",player);
		aaa[0]=0;
		aaa[1]=1;
		aaa[2]=2;
		aaa[3]=3;
		aaa[4]=51;
		a++;
		b+=1;
		c+=1;
		d+=1;
		ay+=1;

	}else{
		printf("%sの番です\n",player);
	for(bb=0;bb<5;bb++){
		bc=rand()%51;
		if(bc==0&&axyz){axyz++;aaa[bb]=0;ce++;}
   else if(bc==1&&a<1){a++; aaa[bb]=1;ce++;}
   else if(bc==2&&b<1){b++ ;aaa[bb]=2;ce++;}
   else if(bc==3&&c<1){c++; aaa[bb]=3;ce++;}
   else if(bc==4&&d<1){d++; aaa[bb]=4;ce++;}
   else if(bc==5&&e<1){e++; aaa[bb]=5;ce++;} 
   else if(bc==6&&f<1){f++; aaa[bb]=6;ce++;}
   else if(bc==7&&g<1){g++; aaa[bb]=7;ce++;}
   else if(bc==8&&h<1){h++; aaa[bb]=8;ce++;}
   else if(bc==9&&i<1){i++;aaa[bb]=9;ce++;}
   else if(bc==10&&j<1){j++;aaa[bb]=10;ce++;} 
   else if(bc==11&&k<1){k++;aaa[bb]=11;ce++;}
   else if(bc==12&&l<1){l++;aaa[bb]=12;ce++;}
   else if(bc==13&&m<1){m++;aaa[bb]=13;ce++;}
   else if(bc==14&&n<1){n++;aaa[bb]=14;ce++;}
   else if(bc==15&&o<1){o++;aaa[bb]=15;ce++;} 
   else if(bc==16&&p<1){p++;aaa[bb]=16;ce++;}
   else if(bc==17&&q<1){q++;aaa[bb]=17;ce++;}
   else if(bc==18&&r<1){r++;aaa[bb]=18;ce++;}
   else if(bc==19&&s<1){s++;aaa[bb]=19;ce++;}
   else if(bc==20&&t<1){t++;aaa[bb]=20;ce++;} 
   else if(bc==21&&u<1){u++;aaa[bb]=21;ce++;}
   else if(bc==22&&v<1){v++;aaa[bb]=22;ce++;}
   else if(bc==23&&w<1){w++;aaa[bb]=23;ce++;}
   else if(bc==24&&x<1){x++;aaa[bb]=24;ce++;}
   else if(bc==25&&y<1){y++;aaa[bb]=25;ce++;} 
   else if(bc==26&&z<1){z++;aaa[bb]=26;ce++;}
   else if(bc==27&&aa<1){aa++;aaa[bb]=27;ce++;}
   else if(bc==28&&ab<1){ab++;aaa[bb]=28;ce++;}
   else if(bc==29&&ac<1){ac++;aaa[bb]=29;ce++;}
   else if(bc==30&&ad<1){ad++;aaa[bb]=30;ce++;} 
   else if(bc==31&&ae<1){ae++;aaa[bb]=31;ce++;}
   else if(bc==32&&af<1){af++;aaa[bb]=32;ce++;}
   else if(bc==33&&ag<1){ag++;aaa[bb]=33;ce++;}
   else if(bc==34&&ah<1){ah++;aaa[bb]=34;ce++;}
   else if(bc==35&&ai<1){ai++;aaa[bb]=35;ce++;} 
   else if(bc==36&&aj<1){aj++;aaa[bb]=36;ce++;}
   else if(bc==37&&ak<1){ak++;aaa[bb]=37;ce++;}
   else if(bc==38&&al<1){al++;aaa[bb]=38;ce++;}
   else if(bc==39&&am<1){am++;aaa[bb]=39;ce++;}
   else if(bc==40&&an<1){an++;aaa[bb]=40;ce++;} 
   else if(bc==41&&ao<1){ao++;aaa[bb]=41;ce++;}
   else if(bc==42&&ap<1){ap++;aaa[bb]=42;ce++;}
   else if(bc==43&&aq<1){aq++;aaa[bb]=43;ce++;}
   else if(bc==44&&ar<1){ar++;aaa[bb]=44;ce++;}
   else if(bc==45&&as<1){as++;aaa[bb]=45;ce++;} 
   else if(bc==46&&at<1){at++;aaa[bb]=46;ce++;}
   else if(bc==47&&au<1){au++;aaa[bb]=47;ce++;}
   else if(bc==48&&av<1){av++;aaa[bb]=48;ce++;}
   else if(bc==49&&aw<1){aw++;aaa[bb]=49;ce++;}
   else if(bc==50&&ax<1){ax++;aaa[bb]=50;ce++;} 
   else if(bc==51&&ay<1){ay++;aaa[bb]=51;ce++;}
   else bb-=1;
	}}
	for(bk=0;bk<5;bk++){
    for(bl=bk+1;bl<5;bl++){
    if(aaa[bk]>aaa[bl]){
    tmp = aaa[bk];
    aaa[bk] =aaa[bl];
    aaa[bl] = tmp;}}}
 	for(bd=0;bd<5;bd++){
 	 printf("%d ",bd+1);
if(aaa[bd]%4==0) printf("ハートの");
if(aaa[bd]%4==1) printf("ダイヤの");
if(aaa[bd]%4==2) printf("スペードの");
if(aaa[bd]%4==3) printf("クローバーの");
printf("%d\n\n",aaa[bd]/4+1);
 	}
 	printf(" ");
bq=aaa[0]/4;
	br=aaa[1]/4;
	bs=aaa[2]/4;
	bt=aaa[3]/4;
	bu=aaa[4]/4;
	bm=aaa[1]-aaa[0];
	bn=aaa[2]-aaa[1];
	bo=aaa[3]-aaa[2];
	bp=aaa[4]-aaa[3];
	if(aaa[0]==2&&aaa[1]==38&&aaa[2]==42&&aaa[3]==46&&aaa[4]==50){printf(" ロイヤルストレートフラッシュ\n");score[0]=10;}
 else if((aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4)&&(bm==4&&bn==4&&bo==4&&bp==4)){printf(" ストレートフラッシュ\n"); score[0]=9;}
 else if((aaa[0]==0||aaa[0]==1||aaa[0]==2||aaa[0]==3)&&(aaa[1]==36||aaa[1]==37||aaa[1]==38||aaa[1]==39)&&(aaa[2]==40||aaa[2]==41||aaa[2]==42||aaa[2]==43)&&(aaa[3]==44||aaa[3]==45||aaa[3]==46||aaa[3]==47)&&(aaa[4]==48||aaa[4]==49||aaa[4]==50||aaa[4]==51)&&(aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4)){printf(" ストレートフラッシュ\n"); score[0]=9;}
 else if((bn<=3&&br==bs)&&(bo<=3&&bs==bt)&&(bp<=3&&bt==bu)){printf(" フォーカード\n");score[0]=8;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bo<=3&&bs==bt)){printf(" フォーカード\n");score[0]=8;}
 else if((bo<=3&&bs==bt)&&(bp<=3&&bt==bu)&&(bm<=3&&bq==br)){printf(" フルハウス\n");score[0]=7;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bp<=3&&bt==bu)){printf(" フルハウス\n");score[0]=7;}
 else if(aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4){printf(" フラッシュ\n");score[0]=6;}
 else if((bu-bt==1)&&(bt-bs==1)&&(bs-br==1)&&(br-bq==1)){printf("ストレート\n");score[0]=5;}
 else if((aaa[0]==0||aaa[0]==1||aaa[0]==2||aaa[0]==3)&&(aaa[1]==36||aaa[1]==37||aaa[1]==38||aaa[1]==39)&&(aaa[2]==40||aaa[2]==41||aaa[2]==42||aaa[2]==43)&&(aaa[3]==44||aaa[3]==45||aaa[3]==46||aaa[3]==47)&&(aaa[4]==48||aaa[4]==49||aaa[4]==50||aaa[4]==51)){printf("ストレート\n");score[0]=5;}
 else if((bq==br)&&(br==bs)){printf(" スリーカード\n");score[0]=3;}
 else if((br==bs)&&(bs==bt)){printf(" スリーカード\n");score[0]=3;}
 else if((bs==bt)&&(bt==bu)){printf(" スリーカード\n");score[0]=3;}
 else if((bq==br)&&(bs==bt)){printf(" ツーペア\n");score[0]=2;}
 else if((br==bs)&&(bt==bu)){printf(" ツーペア\n");score[0]=2;}
 else if((bq==br)&&(bt==bu)){printf(" ツーペア\n");score[0]=2;}
 else if(bq==br){printf(" ワンペア\n");score[0]=1;}
 else if(br==bs){printf(" ワンペア\n");score[0]=1;}
 else if(bs==bt){printf(" ワンペア\n");score[0]=1;}
 else if(bt==bu){printf(" ワンペア\n");score[0]=1;}
 else{ printf("ノーペア\n");score[0]=0;}
 for(br=0;br<5;br++){
 	printf("\n");
 	printf("%dのカード入れ替えますか？\n",br+1);
 	printf("1:はい 0;いいえ\n");
 	scanf("%d",&ch[br]);
 }
 for(br=0;br<5;br++){
 	if(ch[br]==1)aaa[br]=-1;
 }
 	for(bb=0;bb<5;bb++){
 		if(aaa[bb]!=-1)continue;
		bc=rand()%51;
		if(bc==0&&axyz){axyz++;aaa[bb]=0;ce++;}
   else if(bc==1&&a<1){a++; aaa[bb]=1;ce++;}
   else if(bc==2&&b<1){b++ ;aaa[bb]=2;ce++;}
   else if(bc==3&&c<1){c++; aaa[bb]=3;ce++;}
   else if(bc==4&&d<1){d++; aaa[bb]=4;ce++;}
   else if(bc==5&&e<1){e++; aaa[bb]=5;ce++;} 
   else if(bc==6&&f<1){f++; aaa[bb]=6;ce++;}
   else if(bc==7&&g<1){g++; aaa[bb]=7;ce++;}
   else if(bc==8&&h<1){h++; aaa[bb]=8;ce++;}
   else if(bc==9&&i<1){i++;aaa[bb]=9;ce++;}
   else if(bc==10&&j<1){j++;aaa[bb]=10;ce++;} 
   else if(bc==11&&k<1){k++;aaa[bb]=11;ce++;}
   else if(bc==12&&l<1){l++;aaa[bb]=12;ce++;}
   else if(bc==13&&m<1){m++;aaa[bb]=13;ce++;}
   else if(bc==14&&n<1){n++;aaa[bb]=14;ce++;}
   else if(bc==15&&o<1){o++;aaa[bb]=15;ce++;} 
   else if(bc==16&&p<1){p++;aaa[bb]=16;ce++;}
   else if(bc==17&&q<1){q++;aaa[bb]=17;ce++;}
   else if(bc==18&&r<1){r++;aaa[bb]=18;ce++;}
   else if(bc==19&&s<1){s++;aaa[bb]=19;ce++;}
   else if(bc==20&&t<1){t++;aaa[bb]=20;ce++;} 
   else if(bc==21&&u<1){u++;aaa[bb]=21;ce++;}
   else if(bc==22&&v<1){v++;aaa[bb]=22;ce++;}
   else if(bc==23&&w<1){w++;aaa[bb]=23;ce++;}
   else if(bc==24&&x<1){x++;aaa[bb]=24;ce++;}
   else if(bc==25&&y<1){y++;aaa[bb]=25;ce++;} 
   else if(bc==26&&z<1){z++;aaa[bb]=26;ce++;}
   else if(bc==27&&aa<1){aa++;aaa[bb]=27;ce++;}
   else if(bc==28&&ab<1){ab++;aaa[bb]=28;ce++;}
   else if(bc==29&&ac<1){ac++;aaa[bb]=29;ce++;}
   else if(bc==30&&ad<1){ad++;aaa[bb]=30;ce++;} 
   else if(bc==31&&ae<1){ae++;aaa[bb]=31;ce++;}
   else if(bc==32&&af<1){af++;aaa[bb]=32;ce++;}
   else if(bc==33&&ag<1){ag++;aaa[bb]=33;ce++;}
   else if(bc==34&&ah<1){ah++;aaa[bb]=34;ce++;}
   else if(bc==35&&ai<1){ai++;aaa[bb]=35;ce++;} 
   else if(bc==36&&aj<1){aj++;aaa[bb]=36;ce++;}
   else if(bc==37&&ak<1){ak++;aaa[bb]=37;ce++;}
   else if(bc==38&&al<1){al++;aaa[bb]=38;ce++;}
   else if(bc==39&&am<1){am++;aaa[bb]=39;ce++;}
   else if(bc==40&&an<1){an++;aaa[bb]=40;ce++;} 
   else if(bc==41&&ao<1){ao++;aaa[bb]=41;ce++;}
   else if(bc==42&&ap<1){ap++;aaa[bb]=42;ce++;}
   else if(bc==43&&aq<1){aq++;aaa[bb]=43;ce++;}
   else if(bc==44&&ar<1){ar++;aaa[bb]=44;ce++;}
   else if(bc==45&&as<1){as++;aaa[bb]=45;ce++;} 
   else if(bc==46&&at<1){at++;aaa[bb]=46;ce++;}
   else if(bc==47&&au<1){au++;aaa[bb]=47;ce++;}
   else if(bc==48&&av<1){av++;aaa[bb]=48;ce++;}
   else if(bc==49&&aw<1){aw++;aaa[bb]=49;ce++;}
   else if(bc==50&&ax<1){ax++;aaa[bb]=50;ce++;} 
   else if(bc==51&&ay<1){ay++;aaa[bb]=51;ce++;}
   else bb-=1;
	}
	for(bk=0;bk<5;bk++){
    for(bl=bk+1;bl<5;bl++){
    if(aaa[bk]>aaa[bl]){
    tmp = aaa[bk];
    aaa[bk] =aaa[bl];
    aaa[bl] = tmp;}}}
 	for(bd=0;bd<5;bd++){
if(aaa[bd]%4==0) printf("ハートの");
if(aaa[bd]%4==1) printf("ダイヤの");
if(aaa[bd]%4==2) printf("スペードの");
if(aaa[bd]%4==3) printf("クローバーの");
printf("%d\n",aaa[bd]/4+1);
 	}
 	printf(" ");
 	bq=aaa[0]/4;
	br=aaa[1]/4;
	bs=aaa[2]/4;
	bt=aaa[3]/4;
	bu=aaa[4]/4;
	bm=aaa[1]-aaa[0];
	bn=aaa[2]-aaa[1];
	bo=aaa[3]-aaa[2];
	bp=aaa[4]-aaa[3];
	if(aaa[0]==2&&aaa[1]==38&&aaa[2]==42&&aaa[3]==46&&aaa[4]==50){printf(" ロイヤルストレートフラッシュ\n");score[0]=10;}
 else if((aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4)&&(bm==4&&bn==4&&bo==4&&bp==4)){printf(" ストレートフラッシュ\n"); score[0]=9;}
  else if((aaa[0]==0||aaa[0]==1||aaa[0]==2||aaa[0]==3)&&(aaa[1]==36||aaa[1]==37||aaa[1]==38||aaa[1]==39)&&(aaa[2]==40||aaa[2]==41||aaa[2]==42||aaa[2]==43)&&(aaa[3]==44||aaa[3]==45||aaa[3]==46||aaa[3]==47)&&(aaa[4]==48||aaa[4]==49||aaa[4]==50||aaa[4]==51)&&(aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4)){printf(" ストレートフラッシュ\n"); score[0]=9;}
 else if((bn<=3&&br==bs)&&(bo<=3&&bs==bt)&&(bp<=3&&bt==bu)){printf(" フォーカード\n");score[0]=8;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bo<=3&&bs==bt)){printf(" フォーカード\n");score[0]=8;}
 else if((bo<=3&&bs==bt)&&(bp<=3&&bt==bu)&&(bm<=3&&bq==br)){printf(" フルハウス\n");score[0]=7;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bp<=3&&bt==bu)){printf(" フルハウス\n");score[0]=7;}
 else if(aaa[0]%4==aaa[1]%4&&aaa[1]%4==aaa[2]%4&&aaa[2]%4==aaa[3]%4&&aaa[3]%4==aaa[4]%4){printf(" フラッシュ\n");score[0]=6;}
 else if((bu-bt==1)&&(bt-bs==1)&&(bs-br==1)&&(br-bq==1)){printf(" ストレート\n");score[0]=5;}
 else if((aaa[0]==0||aaa[0]==1||aaa[0]==2||aaa[0]==3)&&(aaa[1]==36||aaa[1]==37||aaa[1]==38||aaa[1]==39)&&(aaa[2]==40||aaa[2]==41||aaa[2]==42||aaa[2]==43)&&(aaa[3]==44||aaa[3]==45||aaa[3]==46||aaa[3]==47)&&(aaa[4]==48||aaa[4]==49||aaa[4]==50||aaa[4]==51)){printf("ストレート\n");score[0]=4;}
 else if((bq==br)&&(br==bs)){printf(" スリーカード\n");score[0]=3;}
 else if((br==bs)&&(bs==bt)){printf(" スリーカード\n");score[0]=3;}
 else if((bs==bt)&&(bt==bu)){printf(" スリーカード\n");score[0]=3;}
 else if((bq==br)&&(bs==bt)){printf(" ツーペア\n");score[0]=2;}
 else if((br==bs)&&(bt==bu)){printf(" ツーペア\n");score[0]=2;}
 else if((bq==br)&&(bt==bu)){printf(" ツーペア\n");score[0]=2;}
 else if(bq==br){printf(" ワンペア\n");score[0]=1;}
 else if(br==bs){printf(" ワンペア\n");score[0]=1;}
 else if(bs==bt){printf(" ワンペア\n");score[0]=1;}
 else if(bt==bu){printf(" ワンペア\n");score[0]=1;}
 else{ printf("ノーペア\n");score[0]=0;}
 system("Pause");
 system("cls");
 for(bb=0;bb<5;bb++){
		bc=rand()%51;
		if(bc==0&&axyz){axyz++;bbb[bb]=0;ce++;}
   else if(bc==1&&a<1){a++; bbb[bb]=1;ce++;}
   else if(bc==2&&b<1){b++ ;bbb[bb]=2;ce++;}
   else if(bc==3&&c<1){c++; bbb[bb]=3;ce++;}
   else if(bc==4&&d<1){d++; bbb[bb]=4;ce++;}
   else if(bc==5&&e<1){e++; bbb[bb]=5;ce++;} 
   else if(bc==6&&f<1){f++; bbb[bb]=6;ce++;}
   else if(bc==7&&g<1){g++; bbb[bb]=7;ce++;}
   else if(bc==8&&h<1){h++; bbb[bb]=8;ce++;}
   else if(bc==9&&i<1){i++;bbb[bb]=9;ce++;}
   else if(bc==10&&j<1){j++;bbb[bb]=10;ce++;} 
   else if(bc==11&&k<1){k++;bbb[bb]=11;ce++;}
   else if(bc==12&&l<1){l++;bbb[bb]=12;ce++;}
   else if(bc==13&&m<1){m++;bbb[bb]=13;ce++;}
   else if(bc==14&&n<1){n++;bbb[bb]=14;ce++;}
   else if(bc==15&&o<1){o++;bbb[bb]=15;ce++;} 
   else if(bc==16&&p<1){p++;bbb[bb]=16;ce++;}
   else if(bc==17&&q<1){q++;bbb[bb]=17;ce++;}
   else if(bc==18&&r<1){r++;bbb[bb]=18;ce++;}
   else if(bc==19&&s<1){s++;bbb[bb]=19;ce++;}
   else if(bc==20&&t<1){t++;bbb[bb]=20;ce++;} 
   else if(bc==21&&u<1){u++;bbb[bb]=21;ce++;}
   else if(bc==22&&v<1){v++;bbb[bb]=22;ce++;}
   else if(bc==23&&w<1){w++;bbb[bb]=23;ce++;}
   else if(bc==24&&x<1){x++;bbb[bb]=24;ce++;}
   else if(bc==25&&y<1){y++;bbb[bb]=25;ce++;} 
   else if(bc==26&&z<1){z++;bbb[bb]=26;ce++;}
   else if(bc==27&&aa<1){aa++;bbb[bb]=27;ce++;}
   else if(bc==28&&ab<1){ab++;bbb[bb]=28;ce++;}
   else if(bc==29&&ac<1){ac++;bbb[bb]=29;ce++;}
   else if(bc==30&&ad<1){ad++;bbb[bb]=30;ce++;} 
   else if(bc==31&&ae<1){ae++;bbb[bb]=31;ce++;}
   else if(bc==32&&af<1){af++;bbb[bb]=32;ce++;}
   else if(bc==33&&ag<1){ag++;bbb[bb]=33;ce++;}
   else if(bc==34&&ah<1){ah++;bbb[bb]=34;ce++;}
   else if(bc==35&&ai<1){ai++;bbb[bb]=35;ce++;} 
   else if(bc==36&&aj<1){aj++;bbb[bb]=36;ce++;}
   else if(bc==37&&ak<1){ak++;bbb[bb]=37;ce++;}
   else if(bc==38&&al<1){al++;bbb[bb]=38;ce++;}
   else if(bc==39&&am<1){am++;bbb[bb]=39;ce++;}
   else if(bc==40&&an<1){an++;bbb[bb]=40;ce++;} 
   else if(bc==41&&ao<1){ao++;bbb[bb]=41;ce++;}
   else if(bc==42&&ap<1){ap++;bbb[bb]=42;ce++;}
   else if(bc==43&&aq<1){aq++;bbb[bb]=43;ce++;}
   else if(bc==44&&ar<1){ar++;bbb[bb]=44;ce++;}
   else if(bc==45&&as<1){as++;bbb[bb]=45;ce++;} 
   else if(bc==46&&at<1){at++;bbb[bb]=46;ce++;}
   else if(bc==47&&au<1){au++;bbb[bb]=47;ce++;}
   else if(bc==48&&av<1){av++;bbb[bb]=48;ce++;}
   else if(bc==49&&aw<1){aw++;bbb[bb]=49;ce++;}
   else if(bc==50&&ax<1){ax++;bbb[bb]=50;ce++;} 
   else if(bc==51&&ay<1){ay++;bbb[bb]=51;ce++;}
   else bb-=1;
	}
	for(bk=0;bk<5;bk++){
    for(bl=bk+1;bl<5;bl++){
    if(bbb[bk]>bbb[bl]){
    tmp = bbb[bk];
    bbb[bk] =bbb[bl];
    bbb[bl] = tmp;}}}
    bq=bbb[0]/4;
	br=bbb[1]/4;
	bs=bbb[2]/4;
	bt=bbb[3]/4;
	bu=bbb[4]/4;
	bm=bbb[1]-bbb[0];
	bn=bbb[2]-bbb[1];
	bo=bbb[3]-bbb[2];
	bp=bbb[4]-bbb[3];
	if(bbb[0]==2&&bbb[1]==38&&bbb[2]==42&&bbb[3]==48&&bbb[4]==50)score[test]=10;
 else if((bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4)&&(bm==4&&bn==4&&bo==4&&bp==4)) score[test]=9;
 else if((bbb[0]==0||bbb[0]==1||bbb[0]==2||bbb[0]==3)&&(bbb[1]==36||bbb[1]==37||bbb[1]==38||bbb[1]==39)&&(bbb[2]==40||bbb[2]==41||bbb[2]==42||bbb[2]==43)&&(bbb[3]==44||bbb[3]==45||bbb[3]==46||bbb[3]==47)&&(bbb[4]==48||bbb[4]==49||bbb[4]==50||bbb[4]==51)&&(bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4)) score[0]=9;
 else if((bn<=3&&br==bs)&&(bo<=3&&bs==bt)&&(bp<=3&&bt==bu)) score[test]=8;
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bo<=3&&bs==bt)) score[test]=8;
 else if((bo<=3&&bs==bt)&&(bp<=3&&bt==bu)&&(bm<=3&&bq==br)) score[test]=7;
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bp<=3&&bt==bu)) score[test]=7;
 else if(bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4) score[test]=6;
 else if((bu-bt==1)&&(bt-bs==1)&&(bs-br==1)&&(br-bq==1))score[test]=5;
 else if((bbb[0]==0||bbb[0]==1||bbb[0]==2||bbb[0]==3)&&(bbb[1]==36||bbb[1]==37||bbb[1]==38||bbb[1]==39)&&(bbb[2]==40||bbb[2]==41||bbb[2]==42||bbb[2]==43)&&(bbb[3]==44||bbb[3]==45||bbb[3]==46||bbb[3]==47)&&(bbb[4]==48||bbb[4]==49||bbb[4]==50||bbb[4]==51)) score[test]=4;
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)) score[test]=3;
 else if((br==bs)&&(bs==bt)) score[test]=3;
 else if((bs==bt)&&(bt==bu)) score[test]=3;
 else if((bq==br)&&(bs==bt)) score[test]=2;
 else if((br==bs)&&(bt==bu)) score[test]=2;
 else if((bq==br)&&(bt==bu)) score[test]=2;
 else if(bq==br) score[test]=1;
 else if(br==bs) score[test]=1;
 else if(bs==bt) score[test]=1;
 else if(bp==bu) score[test]=1;
 else  score[test]=0;
 if(score[test]==0){
 for(kaisuu=0;kaisuu<5;kaisuu++){bbb[kaisuu]=-1;}
 }
 for(bb=0;bb<5;bb++){
 		if(bbb[bb]!=-1)continue;
 				bc=rand()%51;
		if(bc==0&&axyz){axyz++;bbb[bb]=0;ce++;}
   else if(bc==1&&a<1){a++; bbb[bb]=1;ce++;}
   else if(bc==2&&b<1){b++ ;bbb[bb]=2;ce++;}
   else if(bc==3&&c<1){c++; bbb[bb]=3;ce++;}
   else if(bc==4&&d<1){d++; bbb[bb]=4;ce++;}
   else if(bc==5&&e<1){e++; bbb[bb]=5;ce++;} 
   else if(bc==6&&f<1){f++; bbb[bb]=6;ce++;}
   else if(bc==7&&g<1){g++; bbb[bb]=7;ce++;}
   else if(bc==8&&h<1){h++; bbb[bb]=8;ce++;}
   else if(bc==9&&i<1){i++;bbb[bb]=9;ce++;}
   else if(bc==10&&j<1){j++;bbb[bb]=10;ce++;} 
   else if(bc==11&&k<1){k++;bbb[bb]=11;ce++;}
   else if(bc==12&&l<1){l++;bbb[bb]=12;ce++;}
   else if(bc==13&&m<1){m++;bbb[bb]=13;ce++;}
   else if(bc==14&&n<1){n++;bbb[bb]=14;ce++;}
   else if(bc==15&&o<1){o++;bbb[bb]=15;ce++;} 
   else if(bc==16&&p<1){p++;bbb[bb]=16;ce++;}
   else if(bc==17&&q<1){q++;bbb[bb]=17;ce++;}
   else if(bc==18&&r<1){r++;bbb[bb]=18;ce++;}
   else if(bc==19&&s<1){s++;bbb[bb]=19;ce++;}
   else if(bc==20&&t<1){t++;bbb[bb]=20;ce++;} 
   else if(bc==21&&u<1){u++;bbb[bb]=21;ce++;}
   else if(bc==22&&v<1){v++;bbb[bb]=22;ce++;}
   else if(bc==23&&w<1){w++;bbb[bb]=23;ce++;}
   else if(bc==24&&x<1){x++;bbb[bb]=24;ce++;}
   else if(bc==25&&y<1){y++;bbb[bb]=25;ce++;} 
   else if(bc==26&&z<1){z++;bbb[bb]=26;ce++;}
   else if(bc==27&&aa<1){aa++;bbb[bb]=27;ce++;}
   else if(bc==28&&ab<1){ab++;bbb[bb]=28;ce++;}
   else if(bc==29&&ac<1){ac++;bbb[bb]=29;ce++;}
   else if(bc==30&&ad<1){ad++;bbb[bb]=30;ce++;} 
   else if(bc==31&&ae<1){ae++;bbb[bb]=31;ce++;}
   else if(bc==32&&af<1){af++;bbb[bb]=32;ce++;}
   else if(bc==33&&ag<1){ag++;bbb[bb]=33;ce++;}
   else if(bc==34&&ah<1){ah++;bbb[bb]=34;ce++;}
   else if(bc==35&&ai<1){ai++;bbb[bb]=35;ce++;} 
   else if(bc==36&&aj<1){aj++;bbb[bb]=36;ce++;}
   else if(bc==37&&ak<1){ak++;bbb[bb]=37;ce++;}
   else if(bc==38&&al<1){al++;bbb[bb]=38;ce++;}
   else if(bc==39&&am<1){am++;bbb[bb]=39;ce++;}
   else if(bc==40&&an<1){an++;bbb[bb]=40;ce++;} 
   else if(bc==41&&ao<1){ao++;bbb[bb]=41;ce++;}
   else if(bc==42&&ap<1){ap++;bbb[bb]=42;ce++;}
   else if(bc==43&&aq<1){aq++;bbb[bb]=43;ce++;}
   else if(bc==44&&ar<1){ar++;bbb[bb]=44;ce++;}
   else if(bc==45&&as<1){as++;bbb[bb]=45;ce++;} 
   else if(bc==46&&at<1){at++;bbb[bb]=46;ce++;}
   else if(bc==47&&au<1){au++;bbb[bb]=47;ce++;}
   else if(bc==48&&av<1){av++;bbb[bb]=48;ce++;}
   else if(bc==49&&aw<1){aw++;bbb[bb]=49;ce++;}
   else if(bc==50&&ax<1){ax++;bbb[bb]=50;ce++;} 
   else if(bc==51&&ay<1){ay++;bbb[bb]=51;}
   else bb-=1;
	}
		for(bk=0;bk<5;bk++){
    for(bl=bk+1;bl<5;bl++){
    if(bbb[bk]>bbb[bl]){
    tmp = bbb[bk];
    bbb[bk] =bbb[bl];
    bbb[bl] = tmp;
    }}}
    printf(" コンピューター\n");
		for(bd=0;bd<5;bd++){
if(bbb[bd]%4==0) printf("ハートの");
if(bbb[bd]%4==1) printf("ダイヤの");
if(bbb[bd]%4==2) printf("スペードの");
if(bbb[bd]%4==3) printf("クローバーの");
printf("%d\n",bbb[bd]/4+1);
 	}
 	printf(" ");
	bq=bbb[0]/4;
	br=bbb[1]/4;
	bs=bbb[2]/4;
	bt=bbb[3]/4;
	bu=bbb[4]/4;
	bm=bbb[1]-bbb[0];
	bn=bbb[2]-bbb[1];
	bo=bbb[3]-bbb[2];
	bp=bbb[4]-bbb[3];
	if(bbb[0]==2&&bbb[1]==38&&bbb[2]==42&&bbb[3]==46&&bbb[4]==50){printf("ロイヤルストレートフラッシュ\n");score[test]=10;}
 else if((bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4)&&(bm==4&&bn==4&&bo==4&&bp==4)){printf("ストレートフラッシュ\n");score[test]=9;}
 else if((bbb[0]==0||bbb[0]==1||bbb[0]==2||bbb[0]==3)&&(bbb[1]==36||bbb[1]==37||bbb[1]==38||bbb[1]==39)&&(bbb[2]==40||bbb[2]==41||bbb[2]==42||bbb[2]==43)&&(bbb[3]==44||bbb[3]==45||bbb[3]==46||bbb[3]==47)&&(bbb[4]==48||bbb[4]==49||bbb[4]==50||bbb[4]==51)&&(bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4)){printf("ストレートフラッシュ\n");score[test]=9;}
 else if((bn<=3&&br==bs)&&(bo<=3&&bs==bt)&&(bp<=3&&bt==bu)){printf("フォーカード\n"); score[test]=8;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bo<=3&&bs==bt)){printf("フォーカード\n"); score[test]=8;}
 else if((bo<=3&&bs==bt)&&(bp<=3&&bt==bu)&&(bm<=3&&bq==br)){printf("フルハウス\n");score[test]=7;}
 else if((bm<=3&&bq==br)&&(bn<=3&&br==bs)&&(bp<=3&&bt==bu)){printf("フルハウス\n");score[test]=7;}
 else if(bbb[0]%4==bbb[1]%4&&bbb[1]%4==bbb[2]%4&&bbb[2]%4==bbb[3]%4&&bbb[3]%4==bbb[4]%4){printf(" フラッシュ\n");score[test]=6;}
 else if((bu-bt==1)&&(bt-bs==1)&&(bs-br==1)&&(br-bq==1)){printf("ストレート\n");score[test]=5;}
 else if((bbb[0]==0||bbb[0]==1||bbb[0]==2||bbb[0]==3)&&(bbb[1]==36||bbb[1]==37||bbb[1]==38||bbb[1]==39)&&(bbb[2]==40||bbb[2]==41||bbb[2]==42||bbb[2]==43)&&(bbb[3]==44||bbb[3]==45||bbb[3]==46||bbb[3]==47)&&(bbb[4]==48||bbb[4]==49||bbb[4]==50||bbb[4]==51)){printf("ストレート\n");score[test]=5;}
 else if((bq==br)&&(br==bs)){printf("スリーカード\n");score[test]=3;}
 else if((br==bs)&&(bs==bt)){printf("スリーカード\n");score[test]=3;}
 else if((bs==bt)&&(bt==bu)){printf("スリーカード\n");score[test]=3;}
 else if((bq==br)&&(bs==bt)){printf("ツーペア\n");score[test]=2;}
 else if((br==bs)&&(bt==bu)){printf("ツーペア\n");score[test]=2;}
 else if((bq==br)&&(bt==bu)){printf("ツーペア\n");score[test]=2;}
 else if(bq==br){printf("ワンぺア\n");score[test]=1;}
 else if(br==bs){printf("ワンぺア\n");score[test]=1;}
 else if(bs==bt){printf("ワンぺア\n");score[test]=1;}
 else if(bt==bu){printf("ワンぺア\n");score[test]=1;}
 else{printf("ノーぺア\n"); score[test]=0;}
 printf("\n");
 printf(" %s\n",player);
  	for(bd=0;bd<5;bd++){
	if(aaa[bd]%4==0) printf("ハートの");
if(aaa[bd]%4==1) printf("ダイヤの");
if(aaa[bd]%4==2) printf("スペードの");
if(aaa[bd]%4==3) printf("クローバーの");
printf("%d\n",aaa[bd]/4+1);
 	}
 	printf("\n");
	bq=aaa[0]/4;
	br=aaa[1]/4;
	bs=aaa[2]/4;
	bt=aaa[3]/4;
	bu=aaa[4]/4;
	cf=bbb[0]/4;
	cg=bbb[1]/4;
	ck=bbb[2]/4;
	ci=bbb[3]/4;
	cj=bbb[4]/4;
	if(score[0]>score[1]){printf("%sの勝利!!\n",player);winnerwinner[0]+=1; }
else if(score[0]<score[1]){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;} 
else if(score[0]==0&&score[1]==0){
if(aaa[0]/4==0&&bbb[0]/4!=0){printf("%sの勝利!!\n",player);winnerwinner[0]+=1; }
else if(bbb[0]/4==0&&aaa[0]/4!=0){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1; }
else if(bu>cj){printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}
else if(bu<cj){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;}
else if(bu==cj){
	if(bq>cf){printf("%sの勝利!!\n",player);winnerwinner[0]+=1; }
else if(bq<cf){ printf("コンピューターの勝利!!\n");winnerwinner[1]+=1; }
}
}else if(score[0]==1&&score[1]==1){
	 if(bq==br) scorescore[0]=aaa[1];
else if(br==bs) scorescore[0]=aaa[2];
else if(bs==bt) scorescore[0]=aaa[3];
else if(bt==bu) scorescore[0]=aaa[4];
     if(cf==cg) scorescore[1]=bbb[1];
else if(cg==ck) scorescore[1]=bbb[2];
else if(ck==ci) scorescore[1]=bbb[3];
else if(ci==cj) scorescore[1]=bbb[4];
 WIN
}else if(score[0]==2&&score[1]==2){
	if((bq==br)&&(bs==bt)) scorescore[0]=aaa[3];
else if((br==bs)&&(bt==bu)) scorescore[0]=aaa[4];
else if((bq==br)&&(bt==bu)) scorescore[0]=aaa[4];
	if((cf==cg)&&(ck==ci)) scorescore[1]=bbb[3];
else if((cg==ck)&&(ci==cj)) scorescore[1]=bbb[4];
else if((cf==cg)&&(ci==cj)) scorescore[1]=bbb[4];
 WIN
}else if(score[0]==3&&score[1]==3){
	if((bq==br)&&(br==bs)) scorescore[0]=aaa[2];
else if((br==bs)&&(bs==bt)) scorescore[0]=aaa[3];
else if((bs==bt)&&(bt==bu)) scorescore[0]=aaa[4];
	if((cf==cg)&&(cg==ck)) scorescore[1]=bbb[2];
else if((cg==ck)&&(ck==ci)) scorescore[1]=bbb[3];
else if((ck==ci)&&(ci==cj)) scorescore[1]=bbb[4];
 WIN
}else if(score[0]==5&&score[1]==5){
	if(aaa[0]/4==0&&bbb[0]/4!=0){ printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}
else if(aaa[0]/4!=0&&bbb[0]/4==0){ printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;} 
else{
	scorescore[0]=aaa[4];
	scorescore[1]=bbb[4];
	WIN
}
}else if(score[0]==6&&score[1]==6){
	if(aaa[0]/4==0&&bbb[0]/4!=0){printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}
else if(aaa[0]/4!=0&&bbb[0]/4==0){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;} 
else{
	scorescore[0]=aaa[4];
	scorescore[1]=bbb[4];
	WIN
}
}
	else if(score[0]==7&&score[1]==7){
	if(aaa[0]/4==0&&bbb[0]/4!=0){printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}
else if(aaa[0]/4!=0&&bbb[0]/4==0){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;}
else{
	scorescore[0]=aaa[4];
	scorescore[1]=bbb[4];
	WIN
}}
else if(score[0]==8&&score[1]==8){
if((br==bs)&&(bs==bt)&&(bt==bu)) scorescore[0]=aaa[4];
else if((bq==br)&&(br==bs)&&(bs==bt)) scorescore[0]=bbb[3];
else if((cg==ck)&&(ck==ci)&&(ci==cj)) scorescore[0]=bbb[4];
else if((cf==cg)&&(cg==ck)&&(ck==ci)) scorescore[0]=bbb[3];
WIN
}else if(score[0]==9&&score[1]==9){
	if(aaa[0]/4==0&&bbb[0]/4!=0){printf("%sの勝利!!\n",player);winnerwinner[0]+=1;}
else if(aaa[0]/4!=0&&bbb[0]/4==0){printf("コンピューターの勝利!!\n");winnerwinner[1]+=1;}
else{
	scorescore[0]=aaa[4];
	scorescore[1]=bbb[4];
	WIN
}}
else printf("引き分け\n");
	system("Pause");
	system("cls");
a=0;b=0;c=0;d=0;e=0;f=0;g=0;h=0;i=0;j=0;k=0;l=0;m=0;n=0;o=0;p=0;q=0;r=0;s=0;t=0;u=0;v=0;w=0;x=0;y=0;z=0;aa=0;ab=0;ac=0;ad=0;ae=0;af=0;ag=0;ah=0;ai=0;aj=0;ak=0;al=0;am=0;an=0;ao=0;ap=0;aq=0;ar=0;as=0;at=0;au=0;av=0;aw=0;ax=0;ay=0;az=0;axyz=0;
	}
	printf("%s  %d  : コンピューター  %d  で",player,winnerwinner[0],winnerwinner[1]);
	if(winnerwinner[0]>winnerwinner[1]){printf("%sの勝利\n",player); printf("プレイヤーの名前入力画面で「コマンド」と入力して見てください。そうすると...\n");}
else if(winnerwinner[0]<winnerwinner[1]) printf("コンピューターの勝利\n");
else printf("引き分け\n");
	winnerwinner[0]=0;
	winnerwinner[1]=0;
	char player[100];
		printf("終わり\n");
		printf("---Thank you for playing---\n");
			system("Pause");
	system("cls");
	}
	
}