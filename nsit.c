void main()
{
int i;
//clrscr();
for(i=1;i<6;i++)
{
    printf("%djj\n",i);
switch(i)
{
case 1:
case 2: printf("%d,",i++);break;
case 3: continue;
case 4: printf("%d,",i);
}
}
printf("%d",i);
getch();
}
