/* Brigido Valdovinos
   03/07/2017
   Creating a class for five books that includes title, author, copyright year.
*/
 #include <iostream>
 #include <string>
 using namespace std;
 
 class bookInfo 
 {
        private:            //Private data members
        string Tittle;
        string Author;
        int Year;
     
     
     public:
        void SetTittle(string bookTittle);      //Mutator functions
        void SetAuthor(string bookAuthor);      //Setting the data
        void SetYear(int bookYear);

        string GetTittle () const;              //Accessor functions
        string GetAuthor () const;
        int GetYear () const;
        

 };
 
    void bookInfo::SetTittle(string bookTittle){        
        Tittle = bookTittle;
    }
        
    void bookInfo::SetAuthor(string bookAuthor){
        Author = bookAuthor;
    }
        
    void bookInfo::SetYear(int bookYear){
        Year = bookYear;
    }
        
    string bookInfo::GetTittle () const {       //Getting data that was saved to the functions.
        return Tittle;      }
    string bookInfo::GetAuthor () const {
        return Author;     }
    int bookInfo::GetYear () const {
        return Year;       }
 
 
 
 
        int main() {
     
     
    //Integers and strings for all the data for the five books.   
string book1Tittle;
string book1Author;
int book1Year;
    
string book2Tittle;
string book2Author;
int book2Year;
    
string book3Tittle;
string book3Author;
int book3Year;
    
string book4Tittle;
string book4Author;
int book4Year;
    
string book5Tittle;
string book5Author;
int book5Year;
     
                //User input for all data.
   cout<<"First book: Enter tittle, author, and published year:"<<endl;
   cin>>book1Tittle>>book1Author>>book1Year;
   cout<<endl;
   
   cout<<"Second book: Enter tittle, author, and published year:"<<endl;
   cin>>book2Tittle>>book2Author>>book2Year;
   cout<<endl;
   
   cout<<"Third book: Enter tittle, author, and published year:"<<endl;
   cin>>book3Tittle>>book3Author>>book3Year;
   cout<<endl;
   
   cout<<"Fourth book: Enter tittle, author, and published year:"<<endl;
   cin>>book4Tittle>>book4Author>>book4Year;
   cout<<endl;
   
   cout<<"Fifth book: Enter tittle, author, and published year:"<<endl;
   cin>>book5Tittle>>book5Author>>book5Year;
   cout<<endl; 


      bookInfo book1;
    book1.SetTittle(book1Tittle);
    book1.SetAuthor(book1Author);
    book1.SetYear(book1Year);

      bookInfo book2;
    book2.SetTittle (book2Tittle);
    book2.SetAuthor (book2Author);
    book2.SetYear   (book2Year);
    
      bookInfo book3;
    book3.SetTittle (book3Tittle);
    book3.SetAuthor (book3Author);
    book3.SetYear   (book3Year);
    
      bookInfo book4;
    book4.SetTittle (book4Tittle);
    book4.SetAuthor (book4Author);
    book4.SetYear   (book4Year);
    
      bookInfo book5;
    book5.SetTittle (book5Tittle);
    book5.SetAuthor (book5Author);
    book5.SetYear   (book5Year);
    

cout<<"Book 1:"<<endl;
cout<<book1.GetTittle()<<endl;
cout<<book1.GetAuthor()<<endl;
cout<<book1.GetYear()<<endl;
cout<<endl;

cout<<"Book 2:"<<endl;
cout<<book2.GetTittle()<<endl;
cout<<book2.GetAuthor()<<endl;
cout<<book2.GetYear()<<endl;
cout<<endl;

cout<<"Book 3:"<<endl;
cout<<book3.GetTittle()<<endl;
cout<<book3.GetAuthor()<<endl;
cout<<book3.GetYear()<<endl;
cout<<endl;

cout<<"Book 4:"<<endl;
cout<<book4.GetTittle()<<endl;
cout<<book4.GetAuthor()<<endl;
cout<<book4.GetYear()<<endl;
cout<<endl;

cout<<"Book 5:"<<endl;
cout<<book5.GetTittle()<<endl;
cout<<book5.GetAuthor()<<endl;
cout<<book5.GetYear()<<endl;
cout<<endl; 

 }