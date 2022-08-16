// #include <iostream>
// #include <cstdbool>
// #include <thread>
// using namespace std;


// float add(float a, float b) {
   
//    return a+b;
// }

// int mult(float a, float b) {

//    return a*b;
// }


// int main()
// {

//    float a, b, c;
//    char s = 'a';
//    bool is_greater;
//    is_greater = false;
// // getline(cin, a);
//    cout << "Enter a: ";
//    cin >> a ;
//       cout << "Enter b: ";
//    cin >> b;
//   cout << add(a, b) * mult(a, b)<< endl;
//   //cout << mult(a, b) << endl;

// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    string name;
//    cout<< "may i know u r name";
//    getline(cin,name);
//    cout<<"Welcom MR "<<name<<endl;
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    float b,h,a;
//    cout<<"enter base & height";
//    cin>> b>> h;
//    a=(b*h)/2;
//    cout<<"Area is "<<a<<endl;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//    int sum,n;
//    cout<<"enter n no";
//    cin>>n;
//    sum=n*(n+1)/2;
//    cout<<"sum of n terms "<<sum<<endl;
//    return 0;
// }


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//  int a,b,c;
//  float r1,r2;
//  cout<<"enter no for a,b,c";
//  cin>>a>>b>>c;
//  r1=(-b+sqrt(b*b-4*a*c))/(2*a);
//  r2=(-b-sqrt(b*b-4*a*c))/(2*a);
//  cout<<"root of Qua eq is "<<r1<<" "<<r2<<endl;
//  return 0;
// }

// #include <iostream>
// #include <cmath>
//  using namespace std;
// int main()
//  {
//    int v,u,a;
//    float speed;
//    cout<<"enter 3 no";
//    cin>>v>>u>>a;
//    speed=(v*v-u*u)/(2*a);
//    cout<<speed<<endl;
//    return 0;
//  }

// #include <iostream>
// using namespace std;

// int main()
// {
//    float radius;
//    float area;
//    cout<<"enter radius of the circle";
//    cin>>radius;
//    area=3.1425*radius*radius;
//    cout<<"Area of the circle is "<<area<<endl;
//    return 0;
// }

// #include <iostream>
// using namespace std;
// typedef float Basic_salary;
// typedef float Percentage_of_allowances;
// typedef float Percentage_of_deductions;
// typedef float Netsalary;
// int main()
// {
//    Netsalary ns;
//    Basic_salary bs;
//    Percentage_of_allowances pa;
//    Percentage_of_deductions pd;

//    cout<<"enter the values bs pa pd";
//    cin>>bs>>pa>>pd;
//    ns=bs+bs*pa/100-bs*pd/100;
//    cout<<"your netsalary is "<<ns<<endl;
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    int x,y;
//    cout<<"enter the no ";
//    cin>>x>>y;
//    if(x>y)
//    {
//       cout<<"max is "<<x<<endl;
//    }
//    else
//    {
//       cout<<"max is "<<y<<endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//    int roll;
//    cout<<"enter your roll no";
//    cin>>roll;
//    if (roll<1)
//    {
//       cout<<"invaild";
//    }
//    else
//    {
//       cout<<"vaild";
//    }
//    return 0;
// }


// #include <iostream>
// using namespace std;
// int main()
// {
//    int a,b,c;
//    cout<<"enter 2 no";
//    cin>>a>>b;
//    if (b==0)
//    {
//       cout<<"division by zero"<<endl;
//    }
//    else
//    {
//       c=a/b;
//       cout<<c<<endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//  int hour;
//  cout<<"enter hours";
//  cin>>hour;
//  if (hour>=9 && hour<=18)
//  {
//    cout<<"working hours";
//  } 
//  else
//  {
//    cout<<"leisure hours";
//  }
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"enter your age";
//   cin>>age;
//   if (age>=12 && age<=50)
//   {
//    cout<<"Young";
//   }
//   else
//   {
//    cout<<"not young";
//   }
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int age;
//   cout<<"enter age";
//   cin>>age;
//   if (age<=12 || age>=50)
//   {
//    cout<<"eligible";
//   }
//   else
//   {
//    cout<<"not eligible";
//   }
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a,b,c;
//   cout<<"enter a b c no";
//   cin>>a>>b>>c;
//   if (a>b && a>c)
//   {
//    cout<<a;
//   }
//   else if (b>c)
//    {
//       cout<<b;
//    }
//    else
//    {
//       cout<<c;
//    }
//  return 0;
// }

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     float d,r1,r2;
//     cout<<"enter the no ";
//     cin>>a>>b>>c;
//     d=b*b-4*a*c;
//     if (d==0)
//     {
//         cout<<"real and equal";
//         r1=(-b/(2*a));
//         cout<<endl<<r1;
//     }
//     else if(d>0)
//     {
//         cout<<"real and unequal";
//         r1=(-b+sqrt(d))/(2*a);
//         r2=(-b-sqrt(d))/(2*a);
//         cout<<endl<<r1;
//         cout<<endl<<r2;
//     }
//     else
//     {
//         cout<<"imaginary";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m1,m2,m3,total;
//     float avg;
//     cout<<"enter marks";
//     cin>>m1>>m2>>m3;
//     total=m1+m2+m3;
//     avg=total/3.0;
//     if (avg>=60)
//     {
//         cout<<"A"<<endl;
//     }
//     else
//     {
//         if (avg>=35 && avg<=60)
//         {
//             cout<<"B"<<endl;
//         }
//         else
//         {
//             cout<<"C"<<endl;
//         }
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//  int day;
//  cout<<"enter the day no";
//  cin>>day;
//  if (day==1)
//  {
//     cout<<"mon"<<endl;
//  }
//  else if(day==2)
//  {
//     cout<<"tue"<<endl;
//  } 
//  else if(day==3)
//  {
//     cout<<"wed"<<endl;
//  } 
//  else if(day==4)
//  {
//     cout<<"thu"<<endl;
//  }
//  else if(day==5)
//  {
//     cout<<"fri"<<endl;
//  }
//  else if(day==6)
//  {
//     cout<<"sat"<<endl;
//  }
//  else if(day==7)
//  {
//     cout<<"sun"<<endl;
//  }
//  else
//  {
//     cout<<"invailed";
//  }
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//  int month;
//  cout<<"enter the month no";
//  cin>>month;
//  if (month==1)
//  {
//     cout<<"jan"<<endl;
//  }
//  else if(month==2)
//  {
//     cout<<"feb"<<endl;
//  } 
//  else if(month==3)
//  {
//     cout<<"mar"<<endl;
//  } 
//  else if(month==4)
//  {
//     cout<<"apr"<<endl;
//  }
//  else if(month==5)
//  {
//     cout<<"may"<<endl;
//  }
//  else if(month==6)
//  {
//     cout<<"jun"<<endl;
//  }
//  else if(month==7)
//  {
//     cout<<"jul"<<endl;
//  }
//  else if(month==8)
//  {
//     cout<<"aug"<<endl;
//  }
//  else if(month==9)
//  {
//     cout<<"sep"<<endl;
//  }
//  else if(month==10)
//  {
//     cout<<"oct"<<endl;
//  }
//  else if(month==11)
//  {
//     cout<<"nov"<<endl;
//  }
//  else if(month==12)
//  {
//     cout<<"dec"<<endl;
//  }
//  else
//  {
//     cout<<"invailed";
//  }
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int day;
//     cout<<"enter day no";
//     cin>>day;
//     switch (day)
//     {
//     case 1: cout<<"mon";
//         break;
//     case 2: cout<<"tue";
//         break;
//     case 3: cout<<"wes";
//         break;
//     case 4: cout<<"thu";
//         break;
//     case 5: cout<<"fri";
//         break;
//     case 6: cout<<"sat";
//         break;
//     case 7: cout<<"sun";
//         break;            
//     default: cout<<"invailed";
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   //  int a=10,b=20,sum;
//     int a,b,sum;
//     cout<<"Enter 1 no ";
//     cin>>a;
//     cout<<"Enter 2 no ";
//     cin>>b;
//     sum=a+b;
//     cout<<"sum of two numbers "<<sum<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout<<"Mean\n";
//     cout<<"1. ADD\n"<<"2. SUB\n"<<"3. MUL\n"<<"4. DIV\n";
//     int option;
//     cout<<"enter your choice";
//     cin>>option;

//     int a,b,c;
//     cout<<"enter 2 no";
//     cin>>a>>b;
//     switch(option)
//     {
//         case 1: c=a+b;
//         cout<<c<<endl;
//            break;
//         case 2: c=a-b;
//         cout<<c<<endl;
//             break;
//         case 3: c=a*b;
//         cout<<c<<endl;
//            break;
//         case 4: c=a/b;
//         cout<<c<<endl;
//             break;    
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     float billamount;
//     float discount;

//     cout<<"enter bill amount: ";
//     cin>>billamount;
//     if (billamount>=500)
//     {
//         discount=billamount*20/100;
//     }
//     else if(billamount>=100 && billamount<500)
//     {
//         discount=billamount*10/100;
//     }
//      cout<<"Bill amount is: "<<billamount<<endl;
//      cout<<"discount amount is: "<<discount<<endl;
//      cout<<"Discounted amount is: "<<billamount-discount<<endl;
//     return 0; 
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int year;
//     cout<<"enter year";
//     cin>>year;

//     if(year%4==0)
//     {
//         if (year%100==0)
//         {
//             if (year%400==0)
//             {
//                 cout<<year<<"is a leap year";
//             }
//             else
//             {
//                 cout<<year<<"is not a leap year";
//             }
//         }
//         else
//         {
//             cout<<year<<"is a leap year";
//         }
//     }
//     else 
//     {
//         cout<<year<<"is a not leap year";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"enter n no";
//     cin>>n;
//     while (i<=n)
//     {
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i=1;
//     cout<<"enter n no";
//     cin>>n;
//     do
//     {
//         cout<<i<<endl;
//         i++;
//     } while (i<=n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout<<"enter n no";
//     cin>>n;
//     for (i=1; i<=n; i++)
//     {
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     for (; ;)
//     {
//         cout<<i<<endl;
//         i++;
//     }
//     return 0;
// } 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i=1,n;
//     cout<<"enter n no";
//     cin>>n;
//     for (; ;)
//     {
//         cout<<i<<endl;
//         i++;
//         if (i>=n)
//         break;
//     }
//     return 0;
// } 

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"enter n no";
//     cin>>n;
//     for ( i=1; i<=10; i++)
//     {
//         cout<<n<<"x"<<i<<"="<<i*n<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,sum=0;
//     cout<<"enter n no";
//     cin>>n;
//     for ( i=1; i<=n; i++)
//     {
//         sum+=i;
//         cout<<"sumN no is "<<i<<"= "<<sum<<endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n,i,fact=1;
//     cout<<"enter n no";
//     cin>>n;
//     for ( i=1; i<=n; i++)
//     {
//         fact*=i;
//         cout<<"factorial "<<i<<"= "<<fact<<endl;
//     }
    
//     return 0;
// }

