/*
Recursion -> when a function calls itself until a specified condition is met.
Basic structure -> 

void f()
{
printf(1);
f();
}

void f()
{
printf(cut);
cut++;
}
f();

cut=0
f()
{
if(cut==4) // condition checker (base case)
return ;
print(cut) // this line gets terminated if (cut==4) 
cut++;
f()
}
main()
{
f();
}

*/
