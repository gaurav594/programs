#include<stdio.h>
#include<malloc.h>
struct nodetype{
char board[3][3];
int turn;
struct nodetype *son;
struct nodetype *next;
}
typedef struct nodetype *NODEPTR;
void nextmove(char brd[][3],int looklevel,char player,char newbrd[][3])
{
NODEPTR ptree,best;
int i,j,value;
ptree=buildtree(brd,looklevel);
bestbranch(ptree,player,&best,&value);
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
newbrd[i][j]=best->board[i][j];
}
}
NODE buildtree(char brd[][3],int looklevel)
{
NODEPTR ptree;
int i,j;
tree=getnode();
for(i=0;i<3;++i)
{
for(j=0;j<3;++j)
{
ptree->board[i][j]=brd[i][j];
}
}
ptree->turn=1;
ptree->son=NULL;
ptree->next=NULL;
expand(ptree,0,looklevel);
return(ptree);
}
void expand(NODEPTR p,int plevel,int depth)
{
NODEPTR q;
if(plevel<depth){
q=generate(p->board);
p->son=q;
while(q!=null){
if(p->turn==1)
q->turn=-1;
else
q->turn=1;
	q->son=NULL;
	expand(p,plevel+1,depth);
	q=q->next;
	}
	}
}
void bestbranch(NODEPTR pnd,char player,NODEPTR *pbest,int *pvalue)
{
NODEPTR p,pbest2;
int val;
if(pnd->son==NULL)
{
*pvalue=evaluate(pnd->board,player);
*pbest=pnd;
}
else
{
p=pnd->son;
bestbranch(p,player,pbest,pvalue);
*pbest=p;
if(pnd.turn==-1)
*pvalue=-*pvalue;
p->next;
while(p!=NULL)
{
bestbranch(p,player,&pbest2,&val);
if(pnd->turn==-1)
{
val=-val;
}
if(val>*pvalue)
{
*pvalue=val;
*pbest=p;
}
p=p->next;
}
if(pnd->turn==-1)
*pvalue=-*pvalue;
}
}
NODEPTR getnode()
{
NODEPTR alloc;
alloc=(NODEPTR*)malloc(sizeof(NODEPTR));
return alloc();
}
int main()
{
getnode();
return 0;
}