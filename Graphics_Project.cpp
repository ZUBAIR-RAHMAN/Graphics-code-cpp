#include<stdio.h>
#include<graphics.h>
#include <dos.h>
#include<conio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    printf("\n\t\t\t\t Zubair Rahman\n");
    printf("\n\t\t\t\t ID No:CSE1801013067\n\n\n\n");
    int driver,mode,choice,num, i,gr = DETECT, gm;
    float x,y,x1,y1,x2,y2,dx,dy,step;
    unsigned long int fact;

    while(1)
    {
        printf("1. Emoji\n");
        printf("2. National flag\n");
        printf("3. DDA\n");
        printf("4. Exit\n\n\n");
        printf("Proceed With Your Choice :  ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {

            int gd=DETECT,gm,x,y;
            initgraph(&gd,&gm,"");
            line(20,10,50,10);
            line(50,10,20,40);
            line(20,40,50,40);
            line(55,10,55,40);
            line(55,40,70,40);
            line(70,10,70,40);
            line(75,10,75,40);
            line(75,10,90,10);
            line(90,10,90,20);
            line(75,20,90,20);
            line(75,25,90,25);
            line(90,25,90,40);
            line(75,40,90,40);
            line(105,10,95,40);
            line(105,10,115,40);
            line(100,30,110,30);
            line(120,10,120,40);
            line(125,10,125,40);
            line(125,10,140,10);
            line(140,10,140,20);
            line(125,20,140,20);
            line(125,20,145,40);


            setcolor(BLUE);
            circle(275, 240, 55);
            setfillstyle(SOLID_FILL, BLUE);
            floodfill(275, 240, BLUE);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL, WHITE);

            fillellipse(285, 215, 2, 6);
            fillellipse(265, 215, 2, 6);

            ellipse(275, 250, 205, 335, 20, 9);
            ellipse(275, 250, 205, 335, 20, 10);
            ellipse(275, 250, 205, 335, 20, 11);

            getch();

            closegraph();

            return 0;
        }


        case 2:
        {

            int gd=DETECT,gm;
            initgraph(&gd,&gm,"");
            line(20,10,50,10);
            line(50,10,20,40);
            line(20,40,50,40);
            line(55,10,55,40);
            line(55,40,70,40);
            line(70,10,70,40);
            line(75,10,75,40);
            line(75,10,90,10);
            line(90,10,90,20);
            line(75,20,90,20);
            line(75,25,90,25);
            line(90,25,90,40);
            line(75,40,90,40);
            line(105,10,95,40);
            line(105,10,115,40);
            line(100,30,110,30);
            line(120,10,120,40);
            line(125,10,125,40);
            line(125,10,140,10);
            line(140,10,140,20);
            line(125,20,140,20);
            line(125,20,145,40);


            setbkcolor(WHITE);
            setcolor(WHITE);
            rectangle(150,40,450,180);
            setfillstyle(1,GREEN);
            floodfill(160,50,WHITE);
            setcolor(WHITE);
            rectangle(138,35,150,450);
            setfillstyle(1,WHITE);
            floodfill(140,40,WHITE);
            setcolor(WHITE);
            bar(130,450,160,460);
            setcolor(WHITE);
            circle(300,110,55);
            setfillstyle(1,RED);
            floodfill(320,120,WHITE);
            getch();
            closegraph();

            return 0;

        }
        break;


        case 3:
        {
            int gd=DETECT,gm,x,y;
            initgraph(&gd,&gm,"");
            line(20,10,50,10);
            line(50,10,20,40);
            line(20,40,50,40);
            line(55,10,55,40);
            line(55,40,70,40);
            line(70,10,70,40);
            line(75,10,75,40);
            line(75,10,90,10);
            line(90,10,90,20);
            line(75,20,90,20);
            line(75,25,90,25);
            line(90,25,90,40);
            line(75,40,90,40);
            line(105,10,95,40);
            line(105,10,115,40);
            line(100,30,110,30);
            line(120,10,120,40);
            line(125,10,125,40);
            line(125,10,140,10);
            line(140,10,140,20);
            line(125,20,140,20);
            line(125,20,145,40);



            cout<<"Enter the value of x1 and y1 :";
            cin>>x1>>y1;
            cout<<"Enter the value of x2 and y2 :";
            cin>>x2>>y2;

            dx=abs(x2-x1);
            dy=abs(y2-y1);

            if(dx>=dy)
                step=dx;
            else
                step=dy;

            dx=dx/step;
            dy=dy/step;

            x=x1;
            y=y1;

            i=1;
            while(i<=step)
            {
                putpixel(x,y,15);
                x=x+dx;
                y=y+dy;
                i=i+1;
                delay(100);
            }
            getch();
            closegraph();
            break;

        }

        }
    }
    return 0;
}
