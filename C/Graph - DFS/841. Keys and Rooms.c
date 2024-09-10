/* 841. Keys and Rooms
Difficulty: Medium
Submission Link: https://leetcode.com/problems/keys-and-rooms/submissions/1381350450/ */

typedef struct s
{
    int a[1001];
    int size;
}stack;
void push(stack* s,int n)
{
    s->a[s->size++]=n;
}
int pop(stack* s)
{
    int k=s->a[s->size-1];
    s->size--;
    return k;
}
bool canVisitAllRooms(int** rooms, int r, int* c){
    int *p=(int*)calloc((r+1),sizeof(int));
    stack *s=(stack*)malloc(sizeof(stack));
    s->size=0;
    for(int i=0;i<c[0];i++)
        push(s,rooms[0][i]);
    p[0]=1;
    while(s->size>0)
    {
        int k=pop(s);
        p[k]=1;
        for(int i=0;i<c[k];i++)
        {
            if(p[rooms[k][i]]==0)
                push(s,rooms[k][i]);  
        }  
    }
    for(int i=0;i<r;i++)
    {
        if(p[i]!=1)
           return 0; 
    } 
    return 1;
}