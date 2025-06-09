alert(5%3);
alert(4**(1/2));
let s="hello" + "world";
alert(s);
alert(1+'2');
alert(1+2);
alert('1'+2+2); // 122 not 14
alert(1+2+'3'); //33 

/* only + operand does this */

alert(6-'2');
alert('6'/'2');

/*  '-' when used before any constant or variable changes it to its integer or abs value */

let apples="2";
let oranges="3";
alert(apples + oranges); // 23

alert(+apples + +oranges); // 5

let a,b,c;
a=b=c=4;
alert(a);
alert(b);
alert(c);
