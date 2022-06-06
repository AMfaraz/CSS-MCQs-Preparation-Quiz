/*
 * Question.h
 *
 *  Created on: Mar 13, 2022
 *      Author: Abdul Majeed Faraz
 */
#include <vector>
using namespace std;
#ifndef QUESTION_H_
#define QUESTION_H_



vector<string> question_vec(){
	vector<string> ques{"","Which is the world's largest continent? ","Largest country in the world by area is? ",
	"How many bones does a human body have? ","Which bear lives in the artic? ","Which Mughal Emporer built Taj Mahal? ",
	"Which province of Afghanistan is highest producer of opium ","Rainiest spot in the word ","Country with most natural gas reserves",
	"Most spoken language in the world ","First Railway line was laid in ","World freest economy in the world with lowest taxes",
	"World largest producer of Uranium","World's largest paper producer","First muslim woman judge in America","Largest animal in the world"};

	return ques;
}

vector<vector<string>> choices_vec(){
	vector<vector<string>> choices{{""},{"a: Asia ","b: Europe","c: Antartica","d: NOT"},{"a: China","b: USA","c: Russia","d: India"},
		{"a: 230","b: 206","c: 150","d: 199"},{"a: Sunbear","b: Polar bear","c: Grizzly bear","d: NOT"},{"a: Akbar","b: Jahangir","c: Shah Jahan","d: Humanyun"},
		{"a: Helmand","b: Ghazni","c: Kabul","d: Laghman"},{"a: Emei Shan","b: San Antonio de Ureca","c: Cherrapunji","d: Mawsynram"},
		{"a: Iran","b: Qatar","c: Russia","d: USA"},{"a: Arabic","b: Chinese","c: English","d: French"},{"a: India","b: USA","c: England","d: Japan"},
		{"a: HongKong","b: Taiwan","c: China","d: Japan"},{"a: Canada","b: Australia","c: Namibia","d: Kazakhstan"},{"a: USA","b: China","c: Japan","d: NOT"},
		{"a: Fatima Beevi","b: Ayesha Malik","c: Delaram Jahani","d: Sheila Abdus-Salaam"},{"a: Polar Bear","b: Elephant","c: Blue Whale","d: Colosal Squid"},};
	return choices;
}

vector<char> answers_vec(){
	vector<char> ans{' ','a','c','b','b','c','a','d','c','b','c','a','d','b','d','c'};
	return ans;

}

string welcome(){
	string Name;
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    *************";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    *TRIVIA GAME*";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t    *************";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t  ====================================";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t  =   Developed By :ASLA CREATORS    =";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t  ====================================";
		cout<<"\n\n";
		cout<<"\n \t\t\t\t\t\t\t\t\t      Please Enter Your Name : ";
		getline(cin,Name);
		cout<<"\n\n";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t       Welcome "<<Name<<"\n";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t This trivia game is for preparation of CSS exam";
		cout<<"\n\n\t\t\t\t\t\t\t\t\t\t Enter Any key ko continoue ";
		getch();
		system("cls");
		return Name;

}

void instructions(){
	cout<<"\t \t \t \t \t \t \t INSTRUCTIONS \n \n";
	cout<<"\t \t \t \t \t \t \t 1: 10 Random question will be shown each time you start the program. \n \n";
	cout<<"\t \t \t \t \t \t \t 2: For each question 4 options will be give as a, b. c. d. \n \n";
	cout<<"\t \t \t \t \t \t \t 3: Type in the correct character as a,b,c,d makesure it is lowercase. \n \n";
	cout<<"\t \t \t \t \t \t \t 4: You will have 3 chances once you answer 3 questions wrong it will over for you. \n \n";
	cout<<"\t \t \t \t \t \t \t 5: In the end how many questions you asnwered correctly will be shown. \n \n";
	cout<<endl<<"\t \t \t \t \t \t \t Press any key to continoue ";
	getch();
	system("cls");
}

void credits(){
	cout<<"\t \t \t \t \t \t \t \t Credits \n \n";
	cout<<"\t \t \t \t \t \t \t \t Created by: \n \n";
	cout<<"\t \t \t \t \t \t \t \t 21CS018 \n \n";
	cout<<"\t \t \t \t \t \t \t \t 21CS016 \n \n";
	cout<<"\t \t \t \t \t \t \t \t 21CS090 \n \n";
	cout<<"\t \t \t \t \t \t \t \t 21CS116 \n \n";
	cout<<endl<<"\t \t \t \t \t \t \t \t Press any key to continoue ";
	getch();
	system("cls");
}



#endif /* QUESTION_H_ */
