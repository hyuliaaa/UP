#include <iostream>
#include <cstring>
using namespace std;

struct Book
{
    char title[20];
    char author[20];
    double price;
};

void input(Book books[], int n)
{
    for(int i=0; i<n; i++)
    {
        //cin.ignore has to be in first place because after you hit enter if you dont have ci.igonre it is taken /n, that is why you aree not reaing your output corretly
        cin.ignore();
        cout<<"Enter title: ";
        cin.getline(books[i].title, 20);

        cout<<"Enter author: ";
        cin.getline(books[i].author,20);

        cout<<"Enter price: ";
        cin>>books[i].price;

    }
}

void sortByPrice(Book books[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(books[j].price>books[j+1].price)
            {
                Book temp;
                temp=books[j];
                books[j]=books[j+1];
                books[j+1]  =temp;
            }
        }
    }
}

void sortByTitle(Book books[],int n)
{
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(strcmp(books[i].title,books[j].title)<0) // sorts them starting from the lowest character which is a
            {
                Book temp;
                temp=books[j];
                books[j]=books[j+1];
                books[j+1]  =temp;
            }
        }
    }

}

void output(Book books[], int n)
{
    for(int i=0; i<n; i++)
    {
       cout<<"Book name:" <<books[i].title<<endl;
       cout<<"Book author:" <<books[i].author<<endl;
       cout<<"Book price: "<<books[i].price<<endl;
       cout<<endl;

    }
}

int main()
{
    cout<<"Enter n number of books: "<<endl;
    int n;
    cin>>n;

    Book *Books= new Book[n];
    input(Books,n);
    sortByTitle(Books,n);
    output(Books,n);





    return 0;
}



