/* Brigido Valdovinos
   03/07/2017
   Creating a class for a book that includes title, author, copyright year.
*/
 #include <iostream>
 #include <string>
 using namespace std;
 
 class bookInfo 
 {
     public:
        void SetTittle(string tittle);
        void SetAuthor(string author);
        void SetYear  (int    year  );
     
     
     string tittle;
     string author;
     int year;
     
     
 };
 
 
 
 int main() {
     
  bookInfo book1;
    book1.SetTittle ();
    book1.SetAuthor ();
    book1.SetYear   ();
    
      bookInfo book2;
    book2.SetTittle ();
    book2.SetAuthor ();
    book2.SetYear   ();
    
      bookInfo book3;
    book3.SetTittle ();
    book3.SetAuthor ();
    book3.SetYear   ();
    
      bookInfo book4;
    book4.SetTittle ();
    book4.SetAuthor ();
    book4.SetYear   ();
    
      bookInfo book5;
    book5.SetTittle ();
    book5.SetAuthor ();
    book5.SetYear   ();
    
   
    
 }