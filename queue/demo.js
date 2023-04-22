function test2(){
    for(x in d){
        document.write(d[x]+"  ");
    }
    i=0;
    while(i<Array.length){
        document.write(a);
        i++;
    }
}
function test3(){
    a=prompt("Enter a number: ");
    document.write(a);
    if (a>=18 & a<=60){
        document.write("Go to Vote");
    }
    else if(a>=60){
        document.write("Go to vote with Preveliged");
    }
    else{
        document.write("No right to vote");
    }
}