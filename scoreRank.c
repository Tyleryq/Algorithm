#include "stdio.h"
#include "stdlib.h"
/*4名同学参加了竞赛，且成绩均不相同。
甲：我成绩最好，乙成绩最差，丙排第三；
乙：我成绩最好，甲成绩最差，丙排第二，丁排第三；
丙：乙成绩最差，甲排第三；
丁：丙成绩最好，我成绩最差，乙排第二，甲排第三。
这4名同学每人仅说对了一个，请输出每人的成绩排序号。*/
int main()

{

    int m_condition,m_first_condit,m_second_condit,m_third_condit,m_forth_condit;

    int a,b,c,d;    //a,b,c,d分别代表名同学，并设名同学的成绩排名分别为1、2、3、4，则这个变量的取值范围均为1~4

 

    for ( a=1; a<=4; a++ )

    {

        for ( b=1; b<=4; b++ )

        {

            for( c=1; c<=4; c++ )

            {

                for( d=1; d<=4; d++ )

                {

                    //4名同学的成绩互不相同

                    m_condition =( a!=b )&&( a!=c )&&( a!= d )&&( b!=c )&&( b!=d )&&( c!=d );

 

                    m_first_condit = ((( a==1 )&&( b!=4 )&&( c!=3 )) || (( a!=1 )&&( b==4 )&&( c!=3 )) || ( a!=1 )&&( b!=4 )&&( c==3 ));

                    m_second_condit = ((( b==1 )&&( a!=4 )&&( c!=2 )&&( d!=3 )) || (( b!=1 )&&( a==4 )&&( c!=2 )&&( d!=3 )) || (( b!=1 )&&( a!=4 )&&( c==2 )&&( d!=3 )) ||(( b!=1 )&&( a!=4 )&&( c!=2 )&&( d==3 )) );

                    m_third_condit = ( (( b==4)&&( a!=3))||(( b!=4 )&&( a==3)) );

                    m_forth_condit = ((( c==1 )&&( d!=4 )&&( b!=2 )&&( a!=3 )) || (( c!=1 )&&( d==4 )&&( b!=2 )&&( a!=3 )) || (( c!=1 )&&( d!=4 )&&( b==2 )&&( a!=3 ))||(( c!=1 )&&( d!=4 )&&( b!=2 )&&( a==3 )));

 

                    if ( m_condition && m_first_condit && m_second_condit && m_third_condit && m_forth_condit )

                    {

                        printf("a=%d,b=%d,c=%d,d= %d\n",a,b,c,d );

                    }

                }

            }

        }

    }//end of for( a=1; a<=4; a++ )

 
    system("pause");
    return 0;

}