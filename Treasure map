#include<iostream>
#include<string>
using namespace std;
void menu();
main(){
	string select;
	int i , j , m, n;
	int map_size, columns, rows;
	int ch;
		
	do{
		cout<<"request the map size between 5 to 9:\n"<<endl;	
			cin>>map_size;
			if(!(map_size>=5 && map_size <=9)){
		cout<<"Error!"<<endl;
		
	}
	}
			 
	
	while(!(map_size>=5 && map_size <=9));
	
	

do{

	cout<<"request a starting rows for the treasure location on map:\n";
	cin>>rows;
	if(!(rows>=0&& rows<map_size)){
	cout<<"Error!"<<endl;
	
}
}
	while(!(rows>=0&& rows<map_size));
	
    

do{

        cout<<"request a starting columns for the treasure location on map:\n";
       cin>>columns;
	   if(!(columns>=0&& columns<map_size)){
		cout<<"Error!"<<endl;
		
	}
	}
       while(!(columns>=0&& columns<map_size));
	
	 
	 
	 
	
	
 	for(int i=0; i<map_size; i++){
 		for(int j=0; j<map_size; j++){

 			       if(rows==i && columns==j)   {
 			       	cout<<"X";
					}    
					else
					cout<<"_";
		 }
		 cout<<endl;
	
	 }
	 
	 
	 do{
	 	menu();
	 	cout<<"Select:";
	 	cin>>ch;
	 
	 switch(ch){
	 	
	 	case 1:
	 		cout<<"Update treasurer coordinates: ";
	 		cin>>rows;
	 		cin>>columns;
	 		for(i=0; i<map_size; i++){
	 			for(j=0; j<map_size; j++){
	 				if (rows==i&& columns==j){
	 					cout<<"X";
					}
					else 
					cout<<"_";
				 }
				 cout<<endl;
			 }
			 break;
	 	case 2:
	 		do{
			cout<<"Request the horizontal offset:";
			cin>>m;
				
	 }	while( columns+m >= map_size || columns+m < 0 );
				
			for(i=0; i<map_size; i++){
				cout<<i;
				for(j=0; j<map_size; j++){

					if(rows==i &&  columns+m==j){
						cout<<"X";
					}
					else 
					cout<<"_";
				}
				cout<<endl;
			}
		
		columns=columns+m;
	 	break;
	 	case 3:
	 		do{
	 			cout<<"request the vertical offset:";
	 			cin>>n;
	 				}	
				 while((rows+n )<0 || (rows+n)>=(map_size));
	 			
			 for(i=0; i<map_size; i++){
			 	cout<<i;
				for(j=0; j<map_size; j++){
					if(rows+n==i && columns==j){
						cout<<"X";
					}
					else 
					cout<<"_";
				}
				cout<<endl;
			}
			
	 	rows=rows+n;	
	 	break;
	 	
	 	case 4:
	 	
	 		cout<<"Exist the program: ";
	 		ch=4;
	 		break; 
	 		
	 		
	 }
	 
}
while(ch!=4);
	 
	 
	 
	 
	 
	 
	}
void menu()
	{
	string select;
	cout<<"1. Update treasure coordinates:"<<endl;
	cout<<"2. shift X left or right :"<<endl;
	cout<<"3. shift X up and down :"<<endl;
	cout<<"4. Exit program:"<<endl;
	
		
}
