int Foo(bool isBar)
{
    if (isBar) {
        bar();
        return 1;
    }
    else
        return 0;

    int a=  0;
    int b=   a;




    int c=0;


    int d   =c;
    log(ERROR,"%s %d %s",
        a,
        b,
        c);
    switch(a ) {
        case 1:
            break;
        case 2 :
            break;
        case   3:
            break ;
        default: {
            break;
        }
    }

}
