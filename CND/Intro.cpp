#include<iostream>
#include<string>
#include<fstream>
#include<istream>
#include<stdlib.h>
#include<stdio.h> 
#include"Header.h"

using namespace std;

string IntroSprites1[15] = { "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", " ", " ", "-", "-" };
string IntroSprites2[15] = { "|", " ", " ", " ", " ", " ", " ", " ", " ", "P", " ", "N", " ", "|" };
string IntroSprites3[15] = { "|", "C", " ", " ", " ", " ", " ", " ", " ", " ", " ", "T", "T", "|" };		
string IntroSprites4[15] = { "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-", "-" };

/*
class PlayerInfo {
public:
	int Health;
	int Strength;
	int Intelligence;
	int Defense;
	int Speech;
	int Trade;
	int Farming;
	int Wielding;

};


To use clases, type in PlayerInfo Jason, then Jason.Health = 30.
*/
int counter = 5;
int MoveIcebreeze(int Move, string IntroSprites1[11]) {
	if (IntroSprites1[11] == "P" || IntroSprites1[12] == "P") {
		cout << "----------------------------------------------------------------------------------------------------------" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|                                                                                                        |" << endl;
		cout << "|----------  ---                                                                                         |" << endl;
		cout << "|              |                                                                                         |" << endl;
		cout << "|              |                                                                                         |" << endl;
		cout << "|              |                                                                                         |" << endl;
		cout << "|              |                                                                                         |" << endl;
		cout << "----------------------------------------------------------------------------------------------------------" << endl;
	}

	return 0;
}

int MoveFIntroHome(int Move, bool ChoosingWorldOption) 
{
	
	
	
	//1 is Up. 2 is Right. 3 is Down. 4 is Left.		
	if (Move == 1) //Up
	{ 
		for (int A = 0; A <= 14; A++)  //Checking characters for player. First layer. Dooorway.
		{
			if (IntroSprites1[A] == "P") //Found player.
			{
				if (IntroSprites1[11] == "P" || IntroSprites1[12] == "P") //If player is at the door.
				{
					MoveIcebreeze(Move, IntroSprites1);
				}
				else { //If player is not at the door. Just walls.
					cout << "Game: That's a wall. You can't go up walls silly." << endl;
					for (int v = 0; v <= 14; v++) {
						cout << IntroSprites1[v];
						if (v == 14) 
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++) 
							{
								cout << IntroSprites2[v];
								if (v == 14) 
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++) 
									{
										cout << IntroSprites3[v];
										if (v == 14) 
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		for (int B = 0; B <= 14; B++) //Second layer.
		{
			if (IntroSprites2[B] == "P") //Found player
			{
				if (IntroSprites2[11] == "P") //Going to the door
				{
					IntroSprites1[11] == "P";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}//
						}
					}
				}
				else if (IntroSprites2[12] == "P")
				{
					IntroSprites1[12] == "P";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}//
						}
					}
				}
				else
				{
					cout << "Game: You can't go up the wall." << endl;
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}//
						}
					}
				}
			}
		}
		for (int C = 0; C <= 14; C++) 
		{
			if (IntroSprites3[C] == "P") 
			{
				if (IntroSprites2[C] == " ")
				{
					IntroSprites2[C] = "P";
					IntroSprites3[C] = " ";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}

											}
										}
									}
								}//
							}
						}
					}
				}
			}
		}
	}
	else if (Move == 2) //Right
	{
		for (int B = 0; B <= 14; B++) //Second layer.
		{
			if (IntroSprites2[B] == "P")
			{
				if (IntroSprites2[B + 1] == "N")
				{
					cout << "Game: That's the One Who Inspires. He doesn't want to talk to you anymore." << endl;
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites2[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites3[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites4[v];
						if (v == 14)
						{
							cout << "" << endl;
							ChoosingWorldOption = true;
						}
					}
				}
				else if (IntroSprites2[B + 1] == " ")
				{
					IntroSprites2[B + 1] = "P";
					IntroSprites2[B] = " ";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites2[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites3[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites4[v];
						if (v == 14)
						{
							cout << "" << endl;
							ChoosingWorldOption = true;
						}
					}
				}
			}
		}
		for (int C = 0; C <= 14; C++) 
		{
			if (IntroSprites3[C] == "P")
			{
				for (int b = 0; b <= 14; b++)
				{
					if (IntroSprites3[b] == "T")
					{
						cout << "Game: That's a table." << endl;
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites1[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites2[v];
									if (v == 14)
									{
										cout << "" << endl;
										for (int v = 0; v <= 14; v++)
										{
											cout << IntroSprites3[v];
											if (v == 14)
											{
												cout << "" << endl;
												for (int v = 0; v <= 14; v++)
												{
													cout << IntroSprites4[v];
													if (v == 14)
													{
														cout << "" << endl;
														ChoosingWorldOption = true;
													}
												}
											}
										}
									}
								}//
							}
						}
					}
					else if (IntroSprites3[C + 1] == " ")
					{
						IntroSprites3[C + 1] = "P";
						IntroSprites3[C] = " ";
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites1[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites2[v];
									if (v == 14)
									{
										cout << "" << endl;
										for (int v = 0; v <= 14; v++)
										{
											cout << IntroSprites3[v];
											if (v == 14)
											{
												cout << "" << endl;
												for (int v = 0; v <= 14; v++)
												{
													cout << IntroSprites4[v];
													if (v == 14)
													{
														cout << "" << endl;
														ChoosingWorldOption = true;
													}
												}
											}
										}
									}
								}//
							}
						}
					}
				}
			}
		}
	} 
	else if (Move == 3)
	{
		for (int B = 0; B <= 14; B++)
		{
			if (IntroSprites2[B] == "P") 
			{
				if (IntroSprites3[B] == "C")
				{
					cout << "Game: That's a chair." << endl;
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}//
						}
					}
				}
				else if (IntroSprites3[B] == " ") 
				{
					IntroSprites2[B] = " ";
					IntroSprites3[B] = "P";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}//
						}
					}

				}
			}
		}
		for (int C = 0; C <= 14; C++)
		{
			if (IntroSprites3[C] == "P")
			{
				cout << "Game: That's a walls." << endl;
				for (int v = 0; v <= 14; v++)
				{
					cout << IntroSprites1[v];
					if (v == 14)
					{
						cout << "" << endl;
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites2[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites3[v];
									if (v == 14)
									{
										cout << "" << endl;
										for (int v = 0; v <= 14; v++)
										{
											cout << IntroSprites4[v];
											if (v == 14)
											{
												cout << "" << endl;
												ChoosingWorldOption = true;
											}
										}
									}
								}
							}
						}//
					}
				}
			}
		}
	}
	else if (Move == 4)
	{
		for (int B = 0; B <= 14; B++)
		{
			if (IntroSprites2[B] == "P")
			{
				if (IntroSprites2[B - 1] == "|")
				{
					cout << "Game: That's a wall." << endl;
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
							for (int v = 0; v <= 14; v++)
							{
								cout << IntroSprites2[v];
								if (v == 14)
								{
									cout << "" << endl;
									for (int v = 0; v <= 14; v++)
									{
										cout << IntroSprites3[v];
										if (v == 14)
										{
											cout << "" << endl;
											for (int v = 0; v <= 14; v++)
											{
												cout << IntroSprites4[v];
												if (v == 14)
												{
													cout << "" << endl;
													ChoosingWorldOption = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (IntroSprites2[B - 1] == " ")
				{
					IntroSprites2[B - 1] = "P";
					IntroSprites2[B] = " ";
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites1[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites2[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites3[v];
						if (v == 14)
						{
							cout << "" << endl;
						}
					}
					for (int v = 0; v <= 14; v++)
					{
						cout << IntroSprites4[v];
						if (v == 14)
						{
							cout << "" << endl;
							ChoosingWorldOption = true;
						}
					}
				}
			}
		}
		for (int C = 0; C <= 14; C++)
		{
			if (IntroSprites3[C] == "P")
			{
				for (int b = 0; b <= 14; b++)
				{
					if (IntroSprites3[b] == "C")
					{
						cout << "Game: That's a chair." << endl;
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites1[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites2[v];
									if (v == 14)
									{
										cout << "" << endl;
										for (int v = 0; v <= 14; v++)
										{
											cout << IntroSprites3[v];
											if (v == 14)
											{
												cout << "" << endl;
												for (int v = 0; v <= 14; v++)
												{
													cout << IntroSprites4[v];
													if (v == 14)
													{
														cout << "" << endl;
														ChoosingWorldOption = true;
													}
												}
											}
										}
									}
								}//
							}
						}
					}
					else if (IntroSprites3[C - 1] == " ")
					{
						IntroSprites3[C - 1] = "P";
						IntroSprites3[C] = " ";
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites1[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites2[v];
									if (v == 14)
									{
										cout << "" << endl;
										for (int v = 0; v <= 14; v++)
										{
											cout << IntroSprites3[v];
											if (v == 14)
											{
												cout << "" << endl;
												for (int v = 0; v <= 14; v++)
												{
													cout << IntroSprites4[v];
													if (v == 14)
													{
														cout << "" << endl;
														ChoosingWorldOption = true;
													}
												}
											}
										}
									}
								}//
							}
						}
					}
				}
			}
		}
	}
	return Move;
	return ChoosingWorldOption;
}

int introHomeOptions(int IntroTalk1)
{
	if (IntroTalk1 == 3)
	{
		int OnceCounter = 1;
		for (int v = 0; v <= 14; v++)
		{
			cout << IntroSprites1[v];
			if (v == 14)
			{
				cout << "" << endl;
				for (int v = 0; v <= 14; v++)
				{
					cout << IntroSprites2[v];
					if (v == 14)
					{
						cout << "" << endl;
						for (int v = 0; v <= 14; v++)
						{
							cout << IntroSprites3[v];
							if (v == 14)
							{
								cout << "" << endl;
								for (int v = 0; v <= 14; v++)
								{
									cout << IntroSprites4[v];
									if (v == 14)
									{
										cout << "" << endl;
									}
								}
							}
						}
					}
				}
			}
		}
		int WorldOption;
		bool ChoosingWorldOption = true;
		while (ChoosingWorldOption = true)
		{
			int Move;
			ChoosingWorldOption = false;
			cout << "[1 - Move | 2 - Interact | 3 - Inventory]" << endl; //
			cin >> WorldOption;
			if (WorldOption == 1)
			{
				
				cout << "[1 - Up | 2 - Right | 3 - Down | 4 - Left]" << endl;
				cin >> Move;
				if (Move == 1)
				{
					MoveFIntroHome(Move, ChoosingWorldOption);
				}
				else if (Move == 2)
				{
					MoveFIntroHome(Move, ChoosingWorldOption);
				}
				else if (Move == 3)
				{
					MoveFIntroHome(Move, ChoosingWorldOption);
				}
				else if (Move == 4)
				{
					MoveFIntroHome(Move, ChoosingWorldOption);
				}
			}
			else if (WorldOption == 2)
			{
				int Interact;
			}
		}		
	}
	return IntroTalk1;
}



int introHome1(int IntroTalk1) 
{
	if (IntroTalk1 == 3) 
	{
		cout << "----------  --" << endl;
		cout << "|        P N |" << endl;
		cout << "|C         TT|" << endl;
		cout << "--------------" << endl;
		cout << "Game: Welcome to the game K R A T O S. Your purpose right now is to explore. You can take quests from NPCs, which has the letter N. They can be talked with. C is actually a chair. Two Ts means it is a table. Interact with the world!" << endl;
		introHomeOptions(IntroTalk1);
	}
	else if (IntroTalk1 == 1) 
	{		
		cout << "----------  --" << endl;
		cout << "|        P N |" << endl;
		cout << "|C         TT|" << endl;
		cout << "--------------" << endl;
		cout << "Game: Welcome to the game K R A T O S. Your purpose right now is to explore. You can take quests from NPCs, which has the letter N. They can be talked with. C is actually a chair. Two Ts means it is a table. Interact with the world!" << endl;
		introHomeOptions(IntroTalk1);
	}
	 
	else if (IntroTalk1 == 2 ) 
	{
		cout << "----------  --" << endl;
		cout << "|        P   |" << endl;
		cout << "|CN        TT|" << endl;
		cout << "--------------" << endl;
		cout << "Game: Welcome to the game K R A T O S. Your purpose right now is to explore. You can take quests from NPCs, which has the letter N. They can be talked with. C is actually a chair. Two Ts means it is a table. Interact with the world!" << endl;
	}
	return IntroTalk1;
}

int introHome2(int IntroTalk1, int IntroTalk1A) 
{
	
	if (IntroTalk1 == 1 && IntroTalk1A == 4) 
	{
		PlayerInfo Player;
		Player.Health = 100;
		Player.DMG = 5;
		PlayerInfo OWI;
		OWI.Defense = 10;
		OWI.Health = 10;
		OWI.DMG = 3;
		cout << "Game: The One Who Inspires is attacking you. Commence fighting." << endl;
		bool FightLoop1;
		FightLoop1 = true;
		bool Repeat2;
		Repeat2 = true;
		while (FightLoop1 == true && Repeat2 == true) 
		{
			Repeat2 = false;
			cout << "[1 - Run | 2 | Use Weapon | 3 - Inventory]" << endl;
			int FightingChoice;
			cin >> FightingChoice;
			if (FightingChoice == 1) 
			{
				cout << "----------  --" << endl;
				cout << "|        P N |" << endl;
				cout << "|C         TT|" << endl;
				cout << "--------------" << endl;
				FightLoop1 = false;
			}
			else if (FightingChoice == 2) 
			{
				cout << "Which weapon do you use? [1 - Knife | 2 - Recon]" << endl;
				int WeaponChoice;
				cin >> WeaponChoice;
				if (WeaponChoice == 1) 
				{
					if (OWI.Defense <= 0) 
					{
						OWI.Health = OWI.Health - Player.DMG;
						cout << "You dealt " << Player.DMG << ". OWI health: " << OWI.Health << endl;
						Player.Health = Player.Health - OWI.DMG;
						cout << "OWI dealt " << OWI.DMG << ". Your health: " << Player.Health << endl;
						if (OWI.Health <= 0) {
							cout << "Sweet victory taste like salt and blood. You killed the One Who Inspires." << endl;
							cout << "----------  --" << endl;
							cout << "|        P D |" << endl;
							cout << "|C         TT|" << endl;
							cout << "--------------" << endl;
							cout << "You killed a NPC. A dead NPC will not move, and it will be shown by the letter D, for dead." << endl;
							FightLoop1 = false;
						}
						else {
							Repeat2 = true;
						}
					}
					else {
						OWI.Defense = OWI.Defense - Player.DMG;
						if (OWI.Defense < 0) 
						{
							OWI.Defense = 0;
							cout << "You dealt " << Player.DMG << ". OWI armor: " << OWI.Defense << endl;
							Player.Health = Player.Health - OWI.DMG;
							cout << "OWI dealt " << OWI.DMG << ". Your health: " << Player.Health << endl;
							Repeat2 = true;
						}
						else {
							cout << "You dealt " << Player.DMG << ". OWI armor: " << OWI.Defense << endl;
							Player.Health = Player.Health - OWI.DMG;
							cout << "OWI dealt " << OWI.DMG << ". Your health: " << Player.Health << endl;
							Repeat2 = true;
						}
					}
				}
			}
		
		}
	}
	return IntroTalk1;
	return IntroTalk1A;
}









int main() 
{ //Main Function
	int IntroTalk1A;
	cout << "KRATOS [Press Enter to Continue]" << endl; //Beginning of game.
	std::cin.get();
	cout << "Unknown: Who, are you: ";
	string Name;
	cin >> Name;
	cout << "Unknown: Hello, " << Name << ". I am the One Who Inspires." << endl;
	std::cin.get();
	cout << "OWI: I found you laying on the doormat here." << endl;

	int IntroTalk1;
	cout << "Respond to the OWI:  [1 - I was sent by someone to give you a letter | 2 - I don't really know who you are. | 3 - Can I just go?]: " << endl; //ERROR
	cin >> IntroTalk1;
	if (IntroTalk1 == 1) 
	{ // Or is ||.
		//If you give him the letter.
		cout << "OWI: Interesting. Do you have the letter?" << endl;
		
		cout << "OWI: We must go immediately." << endl;
		bool IntroTalkLoop1 = true;
		IntroTalkLoop1 = true;
		bool Repeat1 = false;
		Repeat1 = true;
		while (IntroTalkLoop1 == true && Repeat1 == true) 
		{
			Repeat1 = false;
			cout << "[1 - Why? | 2 - Can I just stay here? | 3 - Alright. I won't question your reasoning. | 4 - I won't follow the order.]: "; //ERROR - Respond after he said we have to go immediately.
			cin >> IntroTalk1A;
			if (IntroTalk1A == 1) 
			{
			//If you asked why. 
				cout << "OWI: General Alexander Castellian of the Eleventh Era Corsairian Union demands us that we fight for Corsairia once more." << endl;
				Repeat1 = true;
			}
			else if (IntroTalk1A == 2) 
			{
			//If you ask if you can stay here.
				cout << "OWI: There is no time. We must go. Corsairia, our homeland is at stake." << endl;
				IntroTalkLoop1 = false;
				introHome1(IntroTalk1);
			}
			else if (IntroTalk1A == 3) 
			{
			 //If you agree to go.
				cout << "OWI: Alright. Let's go. Novum Globia Ordo." << endl;
				IntroTalkLoop1 = false;
				introHome1(IntroTalk1);
			}
			else if (IntroTalk1A == 4) //If you decide to reject the order
			{
				cout << "OWI: Then you are an enemy of the state, and must be dealt with." << endl;
				IntroTalkLoop1 = false;
				introHome2(IntroTalk1, IntroTalk1A);
			}
		}
		
	}
	else if (IntroTalk1 == 2) 
	{ //Lore if you ask you don't understand.
		cout << "OWI: Well, you see. The One Who Inspires isn't my real name. No, but I won't tell you my real name for unspecificed reasons..." << endl;
		int IntroTalk1B;
		bool Repeat3;
		Repeat3 = true;
		while (Repeat3 == true) 
		{
			Repeat3 = false;
			cout << "[1 - You can trust me, OWI. | 2 - Your name suck. | 3 - What are those unspecified reasons? | 4 - So... how's the weather? ]" << endl;
			cin >> IntroTalk1B;
			if (IntroTalk1B == 1) 
			{ //If you say "You can trust me."
				cout << "OWI: I can't. You are getting awfully strange. I think you're here to kill me." << endl;
				int IntroTalk1B1;
				cout << "[1 - Well if you think I would have killed you, why would you let me inside? | 2 - Maybe you shouldn't trust me. | 3 - Did you find any weapons in my backpack?]" << endl;
				cin >> IntroTalk1B1;
				if (IntroTalk1B1 == 1) 
				{ //If you ask why he didn't attack. He then says he follows Aegis.
					cout << "OWI: Aegis, Alligastium, and Areion descend from below, and wrote thee holy book. And they all had different opinions on helping thy enemy. 'Thou shall help thy enemy,' said Areion. 'Thou shall smite thy enemy,' said Alligasthium. 'Thou shall help thy enemy, only if thy does not know thine enemies,' said Aegis. You're luckly I follow Aegis' word." << endl;
				}
				else if (IntroTalk1B1 == 2) 
				{ //If you say that he shouldn't trust you.
					cout << "OWI: Yeah, but I trust you enough to hospitalize you." << endl;
				}
				else if (IntroTalk1B1 == 3) 
				{ //If you ask if he checked your backpack.
					cout << "OWI: Yes. But it is just a knife and a Recon. Nowadays people should be having them in their backpacks, or in their pockets." << endl;
					int IntroTalk1B1A;
					cout << "[1 - Well...why...should people always carry a knife and a gun? | 2 - Alright. I think we talked enough, can you just get me out of here?]" << endl;
					cin >> IntroTalk1B1A;
if (IntroTalk1B1A == 1)
{
	cout << "OWI: Don't you know there's a war on? Corsairia is being beseiged by multiple factions. The Insurgancy, the Prevant Ocolus, Ocolus iteself, even a coalition against us all! And we saved their hides! THEIR EMPIRES." << endl;
}
if (IntroTalk1B1A == 2) {
	cout << "OWI: Yes. You ought to go, it must have been a hour since you woken up." << endl;
	introHome1(IntroTalk1);
}
				}
			}
			else if (IntroTalk1B == 2)
			{
				cout << "OWI: I'm almost two century old. I can't really think of creative names to use." << endl;
				Repeat3 = true;
			}
			else if (IntroTalk1B == 3)
			{
				cout << "OWI: None of your business." << endl;
				Repeat3 = true;
			}
			else if (IntroTalk1B == 4)
			{
				cout << "OWI: Gloomy sunlight, soon to be a rainstorm." << endl;
				cout << "... ... ..." << endl;
				Repeat3 = true;
			}
		}

	}
	else if (IntroTalk1 == 3)
	{

		if (counter <= 5)
		{
			counter = counter - 1;
			cout << counter << endl;
			cout << "Alright. If you feel like you have rested enough, I'll let you go." << endl;
			introHome1(IntroTalk1);
		}
		else if (counter <= 0) {
			cout << "Testing" << endl;
		}
		else {

		}
	}
	return 0;
}





