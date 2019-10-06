#include<iostream>
using namespace std ;

main(){
	
	int size , row , col , s , add; 
	cout<<"\t\t\t\tTreasure Map\n\n " ;
	do{
		
	cout<<"\t\t Enter the map size between 5 and 9 inclusive \n\t\t ";
	cin>>size;
	
	if(size<5 || size>9 ){
		cout<<"\t\t Error : out of range \n\n" ;
	}
		
	}while( size<5 || size>9 ) ;
			
	do{

	cout<<"\t\t Enter location of X(row) :\n\t\t " ;
	cin>>row ;
	if(row>=size || row < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}
	
	}while( row>=size || row < 0 );
	
	do{

	cout<<"\t\t Enter location of X(col) :\n\t\t " ;
	cin>>col ;
	if( col>=size || col < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}
	
	}while( col>=size || col < 0 ) ;
		
	
	for(int i=0 ; i<size ; i++ ){
		cout<<i<<" " ;
		for(int j=0 ; j< size ; j++){
			if( i==row && j==col ){
				cout<<"X" ;					
			}
			else{
				cout<<"-" ;
			}
		}
		
		cout<<endl ;
	}
	
	do{

	cout<<"\n\t 1) Update treasure coordinates (row/coloumn) \n\t 2) Shift * left or right \n\t 3) Shift * up or down \n\t 4) Exit program \n\n" ;
	cout<<"\t " ;
	cin>>s ;
	
	switch (s) {
	
	case 1:
	
			do{

	cout<<"\t\t Enter location of X(row) :\n\t\t " ;
	cin>>row ;
	if(  row>=size || row < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}
	
	}while( row>=size || row < 0 );
	
	do{

	cout<<"\t\t Enter location of X(col) :\n\t\t " ;
	cin>>col ;
	if( col>=size || col < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}
	
	}while( col>=size || col < 0 ) ;
		
	for(int i=0 ; i<size ; i++ ){
		cout<<i<<" " ;	
		for(int j=0 ; j< size ; j++){
			if( i==row && j==col ){
				cout<<"X" ;					
			}
			else{
				cout<<"-" ;
			}
		}
		
		cout<<endl ;
	}
	
		
	break ;
		 
	case 2 :
		
	do{
	
	cout<<"\t\t shift X left or right (-ve for left and +ve for right) :\n\t\t " ;
	cin>>add ;
	
	if(col+add>=size || col+add < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}	
	
	}while( col+add>=size || col+add < 0 ) ;
		
	for(int i=0 ; i<size ; i++ ){
		cout<<i<<" " ;	
		for(int j=0 ; j< size ; j++){
			if( i==row && j==col+add ){
				cout<<"X" ;					
			}
			else{
				cout<<"-" ;
			}
		}
	
		cout<<endl ;
	}
	
		col = col + add ;		
	break ;

		 
	case 3 :
		
	do{
	
	cout<<"\t\t shift X up or down (-ve for up and +ve for down) :\n\t\t " ;
	cin>>add ;
	if( row+add>=size || row+add < 0 ){
		cout<<"\t\t Error : out of body \n\t\tTry Again \n" ;
	}	
	
	}while( row+add>=size || row+add < 0 ) ;
	
	for(int i=0 ; i<size ; i++ ){
		cout<<i<<" " ;	
		for(int j=0 ; j< size ; j++){
			if( i==row+add && j==col ){
				cout<<"X" ;					
			}
			else{
				cout<<"-" ;
			}
		}
		cout<<endl ;
	}
	row = row+add ;
	break;
	}
	
}while(s<4) ;

cout<<"Pleasure" ;
	
}
