/*This software prompts the user to enter total number of published centers, 
total number of registered voters, total number of null and void votes, total 
number of valid votes and total valid votes for each candidate. Afterward, 
it determines the candidate with the majority of votes and displays the results on the screen.

NOTE:For a candidate to be a majority winner the candidate total valid votes should be greater than majority.
*/ 
#include<iostream>
using namespace std;
int main(void)
{
system("color A");
cout<<"=============================== MALAWI ELECTORAL COMMISSION ===============================\n\n";
// Declare variables

long long int totalvalidvotesfor_Lazarouschakwera,
totalvalidvotesfor_Petermutharika,
totalvalidvotesfor_Peterkuwani,
majority, 
totalvalidvotes,
totalregisteredvotes, 
totalvotescast, 
total_nullandvoid,
published_Centers, 
total_Centers;

/*Get total published centers */
cout<<"Enter Total Published Centers:";
cin>>published_Centers;
cout<<"Enter Total Centers:";
cin>>total_Centers;
// Get the total number of registered votes
cout<<"Enter Total Registered Voters/Turnout Votes:";
cin>>totalregisteredvotes;
// Get the total number of votes casted
cout<<"Enter Total Votes Cast:";
cin>>totalvotescast;
// Get total number of Null_&_Void votes
cout<<"Enter Total Null & Void Votes/Invalid Votes:";
cin>>total_nullandvoid;
// Get total votes
cout<<"Enter Total Valid Votes:";
cin>>totalvalidvotes; 

//Get Total Valid Votes for Dr Lazarous Maccarty Chakwera
cout<<"Enter Total Valid Votes for Dr Lazarous Maccarty Chakwera:";
cin>>totalvalidvotesfor_Lazarouschakwera;
//Get Total Valid Votes for Peter Wa Mutharika
cout<<"Enter Total Valid Votes for Peter Wa Mutharika:";
cin>>totalvalidvotesfor_Petermutharika;
//Get Total Valid Votes for Peter Kuwani
cout<<"Enter Total Valid Votes for Peter Kuwani:";
cin>>totalvalidvotesfor_Peterkuwani;

majority=(totalvalidvotes/2)+1;
if(totalvalidvotesfor_Lazarouschakwera>majority){
cout<<"Cogratulations  Dr Lazarous Maccarty Chakwera  you're the winner of 2020 presidential Election\n\n";
} else if(totalvalidvotesfor_Petermutharika>majority){
cout<<"Congratulation Peter Wa Mutharika you're the winner of 2020 presidential Election\n\n";
} else if(totalvalidvotesfor_Peterkuwani>majority){
cout<<"Cogratulations Peter Kuwani you're the winner of 2020 presidential Election\n\n";
} 
else 
{
cout<<"No majority winner was found RUNOF may be required Thank you.\n\n";

cout<<"============================================================================================";
return 0;
}
}








