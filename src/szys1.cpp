#include<iostream.h>
#include<stdlib.h>
#include<time.h>
void boom()
{
    float x,y;
    int z,t;        //x,y�ֱ��ʾ����������������z���������Ӽ��˳�
    int first_num,second_num,third_num,fourth_num;
    srand(time(NULL));
    int n;
    float k;
    float d;//��������Ĵ�
    float daan[100];//������ȷ��
    int zq=0;//������ʾ��ȷ�𰸵ĸ���
    int cw=0;//������ʾ����𰸵ĸ���
    cout<<"��Ҫ�г����ٵ���ѧ��?"<<endl;
    cin>>n; 
    cout<<"********************************"<<endl;
    for(int i=0;i<n;i++)
    {
        z=rand()%4;
        first_num=rand()%10;
        second_num=rand()%10;
        third_num=rand()%10;
        fourth_num=rand()%10;
        if (second_num==1)
        {
            x=(float)first_num;
        }
        else if(first_num>second_num)
            {
                t=first_num;
                first_num=second_num;
                second_num=t;        
            }
            x=(float)first_num/second_num;
        if (fourth_num==1)
        {
            y=(float)third_num;
        }
        else if(third_num>fourth_num)
            {
                t=third_num;
                third_num=fourth_num;
                fourth_num=t;                
            }
            y=(float)third_num/fourth_num;
        z=rand()%4;
        switch(z)
        {
        case 0:
            cout<<i+1<<"�� "<<first_num<<"/"<<second_num<<"+"<<third_num<<"/"<<fourth_num<<"="<<"     ";
            daan[i+1]=x+y;
            break;
            
        case 1:
            cout<<i+1<<"�� "<<first_num<<"/"<<second_num<<"-"<<third_num<<"/"<<fourth_num<<"="<<"     ";        
            daan[i+1]=x-y;
            break;
        case 2:
            cout<<i+1<<"�� "<<first_num<<"/"<<second_num<<"*"<<third_num<<"/"<<fourth_num<<"="<<"     ";
            daan[i+1]=x*y;
            break;
        case 3:
            if(y!=0)
            {
            cout<<i+1<<"�� "<<first_num<<"/"<<second_num<<"��"<<third_num<<"/"<<fourth_num<<"="<<"     ";
            }
            else
            {
                i=i-1;
            }
            daan[i+1]=(float)x/y;
            break;
        }
        if((i+1)%3==0)
        {
            for(int c=0;c<=1;c++)
            {
                cout<<endl;
            }
        }
        if((i+1)==n)
        {
            cout<<endl;
        }
    }
    for(i=1;i<=n;i++)
    {
        cout<<"������:"<<endl;
        cout<<i<<"��";
        cin>>d;
        if(d==daan[i])
        {
            cout<<"��ϲ�����ش���ȷ��"<<endl;
            cout<<endl;
            zq=zq+1;
        }
        else
        {
            cout<<"�ش������ȷ��Ϊ��"<<"  "<<daan[i]<<endl;
            cout<<endl;
            cw=cw+1;
        }
    }
    k=(float)zq/n;
    cout<<"�ش���ȷ������Ϊ��"<<" "<<zq<<"��"<<endl;
    cout<<"�ش���������Ϊ��"<<" "<<cw<<"��"<<endl;
    cout<<"��ȷ��Ϊ��"<<" "<<k<<endl;
}
int main()
{
    boom();    
    int c;//c���������Ƿ����������
    cout<<"Ҫ���������𣿣�0������  1���˳���"<<endl;
    cin>>c;
    if(c==0)
    {
        cout<<endl;
        main();
    }
    else
    {
        cout<<endl;
        return 0;
    }
    
    return 0;
}