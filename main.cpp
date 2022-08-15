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

