#include <iostream>
#include<string.h>
using namespace std;

struct essential
{
    int key;
    string commodity;
    int qty;
    int rate;
    essential *next;
};


struct hospital
{
    int key;
    string Hname;
    int Nbed;
    int Obed;
    int ICUbed;
    hospital *next;
};

class Qgoods
{
    struct essential *a[8];
   public:
       struct essential* setRate()
       {
           essential *mask=new essential;
           mask->commodity="N95 Mask\t\t   ";mask->key=1;mask->rate=15;
           essential *handgloves = new essential;
           handgloves->commodity="Hand Gloves\t\t   ";handgloves->key=2;handgloves->rate=2;
           essential *shield = new essential;
           shield->commodity="Face Shield\t\t   ";shield->key=3;shield->rate=30;
           essential *sanitizer=new essential;
           sanitizer->commodity="Sanitizer, 350mL\t   ";sanitizer->key=4;sanitizer->rate=100;
           essential *surface=new essential;
           surface->commodity="Surface Disinfectant, 300mL";surface->key=5;surface->rate=250;
           essential *oxi=new essential;
           oxi->commodity="Oximeter\t\t   ";oxi->key=6;oxi->rate=1000;
           essential *thermo=new essential;
           thermo->commodity="Digital Thermometer\t   ";thermo->key=7;thermo->rate=400;
           essential *vap=new essential;
           vap->commodity="Vaporizer\t\t   ";vap->key=8;vap->rate=250;

           essential *head=mask;

           mask->next=handgloves;handgloves->next=shield;shield->next=sanitizer;sanitizer->next=surface;surface->next=oxi;oxi->next=thermo;
           thermo->next=vap;vap->next=NULL;

           return head;
       }

       void disp(struct essential *b)
       {
           essential *show=b;
           while(show)
           {
           cout<<"\t\t\t\t\t"<<show->key<<"]\t";
           cout<<show->commodity<<"\t\t\t            \t";
           cout<<show->rate<<endl<<endl;
           show=show->next;
           }
        cout<<"  ";
        for(int p=0;p<200;p++)
        cout<<"*";
        cout<<endl;
        }

       void push(struct essential *f,int c)
       {
          a[c]=f;
       }

       void pop(int m)
       {
           int d=1;
           float amt;
           cout<<endl;
           cout<<endl<<"\t\t\t\t\t\t\t\t\t\t"<<"Commodity\t\t\t\tQuantity\t\t\tRate\t\t\tPrice"<<endl<<endl;
           cout<<"\t\t\t\t\t";for(int l=0;l<150;l++){cout<<"-";}cout<<endl;
           for(int h=0;h<m;h++)
           {
cout<<"\t\t\t\t\t\t|\t\t"<<d<<"]"<<"\t    "<<a[h]->commodity<<"\t\t|\t  "<<a[h]->qty<<"\t\t\t |       "<<a[h]->rate<<"\t\t|\t "<<(a[h]->rate)*(a[h]->qty)<<"\t|"<<endl;
            amt=amt+(a[h]->rate)*(a[h]->qty);
            d++;
           }
           cout<<endl<<"\t\t\t\t\t\t|\t\t\t   GST 5%:       \t\t\t|\t\t\t"<<0.05*amt<<"\t |";
           amt=(0.05*amt)+amt;
           cout<<endl<<endl<<"\t\t\t\t\t\t|\t\t\t   Total Amount: \t\t\t|\t\t\t"<<amt<<"\t |"<<endl;
           cout<<"\t";
        for(int p=0;p<200;p++)
        cout<<"-";
       }
}e;

class HospBed
{
     public:
    struct hospital* setv()
    {
     hospital *h1=new hospital;
     hospital *headv=h1;
     h1->key=1;h1->Hname="GMERS, Gotri                  ";h1->Nbed=25;h1->Obed=12;h1->ICUbed=7;
     hospital *h2=new hospital;
     h2->key=2;h2->Hname="Tricolour Hospital, Vadiwadi  ";h2->Nbed=20;h2->Obed=9;h2->ICUbed=3;
     hospital *h3=new hospital;
     h3->key=3;h3->Hname="SSG Hospital                  ";h3->Nbed=32;h3->Obed=17;h3->ICUbed=11;
     hospital *h4=new hospital;
     h4->key=4;h4->Hname="Bhailal Amin General Hospital ";h4->Nbed=19;h4->Obed=10;h4->ICUbed=2;

     h1->next=h2;h2->next=h3;h3->next=h4;h4->next=NULL;
     return headv;
    }

    struct hospital* sets()
    {
    hospital *h1=new hospital;
     hospital *heads=h1;
     h1->key=1;h1->Hname="District Hospital     ";h1->Nbed=20;h1->Obed=11;h1->ICUbed=5;
     hospital *h2=new hospital;
     h2->key=2;h2->Hname="Kapoor Hospital       ";h2->Nbed=14;h2->Obed=10;h2->ICUbed=2;
     hospital *h3=new hospital;
     h3->key=3;h3->Hname="Ayushman Care Hospital";h3->Nbed=35;h3->Obed=21;h3->ICUbed=12;
     hospital *h4=new hospital;
     h4->key=4;h4->Hname="Sheila Trauma Center  ";h4->Nbed=15;h4->Obed=8;h4->ICUbed=0;
     h1->next=h2;h2->next=h3;h3->next=h4;h4->next=NULL;
     return heads;
    }

    struct hospital* seto()
    {
     hospital *h1=new hospital;
     hospital *heado=h1;
     h1->key=1;h1->Hname="Government HQ Hospital  ";h1->Nbed=34;h1->Obed=18;h1->ICUbed=11;
     hospital *h2=new hospital;
     h2->key=2;h2->Hname="Medical College Hospital";h2->Nbed=25;h2->Obed=12;h2->ICUbed=5;
     hospital *h3=new hospital;
     h3->key=3;h3->Hname="Laidlaw Memorial School ";h3->Nbed=19;h3->Obed=9;h3->ICUbed=2;
     hospital *h4=new hospital;
     h4->key=4;h4->Hname="Nankem Hospital         ";h4->Nbed=21;h4->Obed=10;h4->ICUbed=6;
     h1->next=h2;h2->next=h3;h3->next=h4;h4->next=NULL;
     return heado;
    }

    struct hospital* setm()
    {
     hospital *h1=new hospital;
     hospital *headd=h1;
     h1->key=1;h1->Hname="Civil Hospital         ";h1->Nbed=27;h1->Obed=15;h1->ICUbed=8;
     hospital *h2=new hospital;
     h2->key=2;h2->Hname="Nazareth Hospital      ";h2->Nbed=19;h2->Obed=9;h2->ICUbed=4;
     hospital *h3=new hospital;
     h3->key=3;h3->Hname="Woodland Hospital      ";h3->Nbed=19;h3->Obed=11;h3->ICUbed=7;
     hospital *h4=new hospital;
     h4->key=4;h4->Hname="Military Hospital, NH44";h4->Nbed=36;h4->Obed=22;h4->ICUbed=15;
     h1->next=h2;h2->next=h3;h3->next=h4;h4->next=NULL;
     return headd;
    }

    void display(struct hospital *a)
    {
       hospital *show=a;
       while(show)
        {
            cout<<"\t\t\t\t\t\t\t"<<show->key<<"]";
            cout<<"\t"<<show->Hname;
             for(int i=0;i<15;i++)
                cout<<" ";
            cout<<show->Nbed;
            cout<<"\t\t\t";
            cout<<show->Obed;
             cout<<"\t\t\t";
            cout<<show->ICUbed<<endl<<endl;
            show=show->next;
        }
        cout<<"\t";
        for(int p=0;p<200;p++)
        cout<<"*";
    }
}t;

int main()
{
     int city,hosp,bed,recover,item,qty,count=0,wardno,age;
     string name,healthcon,blood;
    struct hospital* arr[4],*tmp;
    arr[0]=t.setv();
    arr[1]=t.sets();
    arr[2]=t.seto();
    arr[3]=t.setm();


    cout<<"\t\t\t\t\t\t\t\t\t\t\t\tCoFIGHT"<<endl<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t#HumHaarNahiManenge"<<endl<<endl;

    cout<<"Enter the patients name:                         ";
    cin>>name;
    cout<<"Enter the patients age:                          ";
    cin>>age;
    cout<<"Please specify any underlying health conditions: ";
    cin>>healthcon;

    cout<<endl<<"\t\t\t\t\t\t\t\t\t1]Hospitalization\t\t\t2]Home Isolation"<<endl;
    cout<<"Select the appropriate mode of recovery: ";
    cin>>recover;
    cout<<endl<<endl;
    if(recover==1)
    {
        cout<<"Kindly enter your blood group: ";
        cin>>blood;
    cout<<endl<<"\t\t\t\t\t\t\t1> Vadodara\t\t 2> Shahjahanpur\t\t 3> Ooty\t\t 4> Shillong"<<endl<<endl;
    cout<<"\t\tPress the appropriate button against your city: ";
    cin>>city;
    cout<<endl;

    switch(city)
    {
    case 1:                                                        //Vadodara
        {
            tmp=arr[0];
            cout<<"\t";
            for(int p=0;p<200;p++)
            cout<<"*";
            cout<<"\t\t\t\t\t\t\t\t\t\tHospital\t\t\t Normal Beds\t    Oxygen Beds\t\t     ICU Beds"<<endl<<endl;
            t.display(arr[0]);
            break;
        }
    case 2:                                                       //Shahjahanpur
        {
            tmp=arr[1];
            cout<<"\t";
            for(int p=0;p<200;p++)
            cout<<"*";
            cout<<"\t\t\t\t\t\t\t\t\t\tHospital\t\t Normal Beds\t    Oxygen Beds\t\t     ICU Beds"<<endl<<endl;
            t.display(t.sets());
            break;
        }
    case 3:                                                      //Ooty
        {
            tmp=arr[2];
            cout<<"\t";
            for(int p=0;p<200;p++)
            cout<<"*";
            cout<<"\t\t\t\t\t\t\t\t\t\tHospital\t\t  Normal Beds\t           Oxygen Beds\t\t     ICU Beds"<<endl<<endl;
            t.display(arr[2]);
            break;
        }
    case 4:                                                      //Shillong
        {
           tmp=arr[3];
           cout<<"\t";
           for(int p=0;p<200;p++)
           cout<<"*";
           cout<<"\t\t\t\t\t\t\t\t\t\tHospital\t\t  Normal Beds\t\t     Oxygen Beds\t     ICU Beds"<<endl<<endl;
           t.display(arr[3]);
           break;
        }
    }

            cout<<"\t\tSelect the hospital of your choice: ";
            cin>>hosp;
            cout<<endl;
            cout<<"\t\tPress 1 for Normal Bed\n\t\tPress 2 for Oxygen Bed\n\t\tPress 3 for ICU Bed     ";
            cin>>bed;

            for(int i=hosp-1;i>0;i--)
            {
              tmp=tmp->next;
            }
            //cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t";
            cout<<endl<<"\t\tName of the patient:          \t"<<name<<endl;
            cout<<"\t\tAge of the patient:           \t"<<age<<endl;
            cout<<"\t\tUnderlying Health conditions: \t"<<healthcon<<endl;
            cout<<"\t\tBlood group of the patient:   \t"<<blood<<endl<<endl<<"\t\t\t\t\t\t\t\t";
            switch(bed)
              {
                  case 1:
                    {
                          cout<<"You have booked a Normal Bed and "<<--tmp->Nbed<<" Normal beds now remain in "<<tmp->Hname<<endl;
                          break;
                    }
                  case 2:
                    {
                          cout<<"You have booked an Oxygen Bed and "<<--tmp->Obed<<" beds now remain in "<<tmp->Hname<<endl;
cout<<endl<<"Following are the positions for self-proning: "<<endl;
cout<<"\t\t\t\t\t\t\t\t"<<"1]  Start with lying on your belly\n"<<"\t\t\t\t\t\t\t\t"<<"2]  Lying on your right side\n"<<"\t\t\t\t\t\t\t\t";
cout<<"3]  Sitting up with your legs extended in front of you\n"<<"\t\t\t\t\t\t\t\t"<<"4]  Lying on the left side\n"<<"\t\t\t\t\t\t\t\t";
cout<<"5]  Go back to lying on your belly"<<endl<<endl;
cout<<"Note: It is recommended that one should not spend more than 30 minutes in each position"<<endl;
                          break;
                    }
                  case 3:
                    {
                          cout<<"You have booked an ICU Bed and "<<--tmp->ICUbed<<" beds now remain in "<<tmp->Hname<<endl;
                          break;
                    }

              }
    }

    else if(recover==2)
    {
        cout<<"Enter your ward number: ";
        cin>>wardno;
        essential *temp=e.setRate();
        cout<<endl<<"\t";
        for(int p=0;p<200;p++)
        cout<<"*";
        cout<<endl<<"\t\t\t\t\t\tCommodity             \t\t\t\t\t\tRate"<<endl<<endl;
      e.disp(e.setRate());
       int ans=1;
      while(ans==1)
      {
          temp=e.setRate();
          cout<<"Select the item you need: ";
          cin>>item;
          cout<<"\t\t\t\t\t\t\t\t"<<"Enter the quantity you need: ";
          cin>>qty;

          for(int v=item-1;v>0;v--)
          {
            temp=temp->next;
          }

          temp->qty=qty;

          if(temp->key==1 && qty>=100)
          {
              cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 100"<<endl;     //To stop Hoarding
              continue;
          }
          else if(temp->key==2 && qty>=50)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 50"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==3 && qty>=20)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 20"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==4 && qty>=25)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 25"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==5 && qty>=20)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 20"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==6 && qty>=4)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 4"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==7 && qty>=4)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 4"<<endl;     //To stop Hoarding
                     continue;
                  }
          else if(temp->key==8 && qty>=4)
                  {
                     cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tKindly enter a value less than 4"<<endl;     //To stop Hoarding
                     continue;
                  }

          e.push(temp,count);


          cout<<"\t\t\t\t\t\t\t\t"<<"Press 1 for continuing: ";
          cin>>ans;
          cout<<endl;
          count++;
      }
      cout<<"\t";
      for(int p=0;p<200;p++)
      cout<<"-";
      cout<<"\t\t\t\t\t\t\t\t\tPatient Name: "<<name<<"\t\t\t"<<"Patient Age:     \t"<<age<<endl<<"\t\t\t\t\t\t\t\tWard number : "<<wardno<<"\t\t\t";
      cout<<"Underlying Health concerns: "<<healthcon<<endl<<endl;
      e.pop(count);


    }
    return 0;
}
