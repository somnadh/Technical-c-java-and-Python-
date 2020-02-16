main()
{
int var=20; // scope of the local variable is within function or block
printf("%d",var); //outer block
{
int var=30; //Inner block
printf("%d",var);
}
}
