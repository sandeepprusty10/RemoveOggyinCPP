#include<iostream>
#include<string>
using namespace std;
int total=5;


void removeOggy(string names[5])
{
    int name;
    string base = "oggy";
    unsigned int len = base.size();
    int pointer;
    int removepointer;


    for(name=4;name>=0;name--)
    {
        if(names[name].size()>= len)
        {
           if((base.compare((names[name]).substr(0,len)))==0)
           {
               pointer=name;
               for(removepointer=pointer;removepointer<total-1;removepointer++)
               {
                   names[removepointer]= names[removepointer+1];
               }

               total=total-1;
           }
        }
    }
}

bool OggyIsRemoved(string names[5],int total)
{
    int name;
    int flag=0;
    string base = "oggy";
    int len = base.size();
    for(name=0;name<total;name++)
    {
        if((base.compare((names[name]).substr(0,len)))==0)
        {
            flag=1;
            break;
        }

    }

    if(flag==1)
        return false;
    else
        return true;

}
int main()
{
    string names[5]={ "nobita", "bheem", "oggy", "oggy cockroach", "ninja" };

    removeOggy(names);
    if(OggyIsRemoved(names,total))
    {
        cout<< "Passed!" << endl;
        return 0;
    }
    else
    {
        cout<< "Failed!" << endl;
        return 1;
    }
}
