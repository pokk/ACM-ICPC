#include <iostream>
using namespace std;
int main()
{
    float hour=0,minute=0,m_angle=0,h_angle=0,angle=0,walk=(float)5/60;
    char a;
    while (cin>>hour>>a>>minute)
    {
        if (!hour && !minute)
            break;
        m_angle=minute*6;
        h_angle=(hour*30)+(walk*minute*6);
        angle=h_angle-m_angle;
        if (angle<0)
            angle*=-1;
        if (angle<=180)
            printf("%.3f\n",angle);
        else
            printf("%.3f\n",360-angle);
    }
}
