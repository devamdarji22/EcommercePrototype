#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct category {
	char name[50];
	int amount;
	struct category* nextSibling;
	struct category* nextChild;
	int productId;
};
struct category* start, * newNode, * ptr1, * ptr2, * ptr3, * ptr4, * ptr;
struct cart {
	int price;
	char nam[50];
	struct cart* nextItem;
	int flag;
	int quan;
	int productID;
};
struct cart *cartNewNode,*cartStart,*cartPtr,*cartPtr1;
struct myOrders {
	struct cart *order;
	struct myOrders* nextOrder;
};
struct myOrders* orderStart, *orderPtr, *newOrder;
int cartQuantity = 0;
int orderQuantity = 0;
void setUp() {
	int choice;
	printf("Menu\n1.Default Setup\n2.Custom Setup\n");
	scanf("%d", &choice);
	if (choice == 1) {
		char name[50];
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "HomePage");
		newNode->amount = NULL;
		newNode->productId = 0;
		start = newNode;
		ptr1 = start;
		//printf("%s\n", ptr1->name);

		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Category");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr1->nextChild = newNode;
		ptr1 = ptr1->nextChild;
		//printf("%s", ptr1->name);


		ptr2 = ptr1;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Electronics");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr2->nextChild = newNode;
		ptr2 = ptr2->nextChild;
		//printf("%s\n", ptr2->name);

		ptr3 = ptr2;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Mobile");
		newNode->amount = 8000;
		newNode->productId = 1;
		ptr3->nextChild = newNode;
		ptr3 = ptr3->nextChild;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "TV");
		newNode->amount = 20000;
		newNode->productId = 2;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Speaker");
		newNode->amount = 3000;
		newNode->productId = 3;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		ptr3->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Sports");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr2->nextSibling = newNode;
		ptr2 = ptr2->nextSibling;
		//printf("%s\n", ptr2->name);


		ptr3 = ptr2;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Badminton");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextChild = newNode;
		ptr3 = ptr3->nextChild;
		//printf("%s\n", ptr3->name);


		ptr4 = ptr3;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Badminton Racket");
		newNode->amount = 3000;
		newNode->productId = 4;
		ptr4->nextChild = newNode;
		ptr4 = ptr4->nextChild;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Badminton Shoes");
		newNode->amount = 2000;
		newNode->productId = 5;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Badminton KitBag");
		newNode->amount = 3000;
		newNode->productId = 6;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		ptr4->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Cricket");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);


		ptr4 = ptr3;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Bat");
		newNode->amount = 300;
		newNode->productId = 7;
		ptr4->nextChild = newNode;
		ptr4 = ptr4->nextChild;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Ball");
		newNode->amount = 100;
		newNode->productId = 8;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Stumps");
		newNode->amount = 500;
		newNode->productId = 9;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		ptr4->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Football");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);


		ptr4 = ptr3;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Football");
		newNode->amount = 1500;
		newNode->productId = 10;
		ptr4->nextChild = newNode;
		ptr4 = ptr4->nextChild;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Football Shoes");
		newNode->amount = 2000;
		newNode->productId = 11;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Football Shocks");
		newNode->amount = 300;
		newNode->productId = 12;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr4->nextSibling = newNode;
		ptr4 = ptr4->nextSibling;
		//printf("%s\n", ptr4->name);
		ptr4->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		ptr3->nextSibling = NULL;



		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "HomeFurniture");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr2->nextSibling = newNode;
		ptr2 = ptr2->nextSibling;
		//printf("%s\n", ptr2->name);
		
		ptr3 = ptr2;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Table");
		newNode->amount = 800;
		newNode->productId = 13;
		ptr3->nextChild = newNode;
		ptr3 = ptr3->nextChild;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Chair");
		newNode->amount = 200;
		newNode->productId = 14;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Sofa");
		newNode->amount = 3000;
		newNode->productId = 15;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->productId = 0;
		newNode->amount = NULL;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		ptr3->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr2->nextSibling = newNode;
		ptr2 = ptr2->nextSibling;
		//printf("%s\n", ptr2->name);
		ptr2->nextSibling = NULL;


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Cart");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr1->nextSibling = newNode;
		ptr1 = ptr1->nextSibling;
		//printf("%s\n", ptr1->name);


		ptr3 = ptr1;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Remove");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextChild = newNode;
		ptr3 = ptr3->nextChild;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "CheckOut");
		newNode->amount = NULL;
		newNode->productId = 0;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->productId = 0;
		newNode->amount = NULL;
		ptr3->nextSibling = newNode;
		ptr3 = ptr3->nextSibling;
		//printf("%s\n", ptr3->name);


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "MyOrders");
		newNode->productId = 0;
		newNode->amount = NULL;
		ptr1->nextSibling = newNode;
		ptr1 = ptr1->nextSibling;
		//printf("%s\n", ptr1->name);


		ptr3 = ptr1;
		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Back");
		newNode->productId = 0;
		newNode->amount = NULL;
		ptr3->nextChild = newNode;
		ptr3 = ptr3->nextChild;
		//printf("%s\n", ptr3->name);


		newNode = (struct category*)malloc(sizeof(struct category));
		strcpy(newNode->name, "Exit");
		newNode->productId = 0;
		newNode->amount = NULL;
		ptr1->nextSibling = newNode;
		ptr1 = ptr1->nextSibling;
		//printf("%s\n", ptr1->name);

		ptr1->nextSibling = NULL;
	}
}
void addToCart() {
	int quantity;
	printf("Enter Quantity\n");
	scanf("%d", &quantity);
	if (cartStart == NULL) {
		cartNewNode = (struct cart*)malloc(sizeof(struct cart));
		strcpy(cartNewNode->nam, ptr4->name);
		cartNewNode->price = ptr4->amount;
		cartNewNode->nextItem = NULL;
		cartStart = cartNewNode;
		cartQuantity++;
		cartStart->productID = ptr4->productId;
		cartStart->quan = quantity;
	}
	else {
		cartPtr1 = cartStart;
		//printf("#");
		while (cartPtr1->productID != ptr4->productId) {
			cartPtr1 = cartPtr1->nextItem;
			if (cartPtr1 == NULL)
				break;
		}
		if (cartPtr1 == NULL) {
			cartPtr1 = cartStart;
		}
		//printf("#");
		if (cartPtr1->productID == ptr4->productId) {
			cartPtr1->quan += quantity;
			//printf("#");
		}
		else {
			cartNewNode = (struct cart*)malloc(sizeof(struct cart));
			strcpy(cartNewNode->nam, ptr4->name);
			cartNewNode->price = ptr4->amount;
			cartNewNode->nextItem = cartStart;
			cartStart = cartNewNode;
			cartStart->quan = quantity;
			cartQuantity++;
		}
	}
	
	/*while (quantity--) {
		cartNewNode = (struct cart*)malloc(sizeof(struct cart));
		strcpy(cartNewNode->nam,ptr4->name);
		cartNewNode->price = ptr4->amount;
		if (cartQuantity == 0) {
			cartNewNode->nextItem = NULL;
			cartStart = cartNewNode;
			cartQuantity++;
		}
		else {
			cartNewNode->nextItem = cartStart;
			cartStart = cartNewNode;
			cartQuantity++;
		}
	}*/
}
void displayCart() {
	int srNo = 0;
	if (cartQuantity == 0) {
		printf("Cart is empty\n");
	}
	else {
		cartPtr = cartStart;
		printf("\t\tCART\nSr. No.\tName\t\tPrice(RS)\tQuantity\n");
		while (cartPtr != NULL) {
			printf("%d\t%s\t\t%d\t\t%d\n",++srNo, cartPtr->nam, cartPtr->price, cartPtr->quan);
			cartPtr = cartPtr->nextItem;
		}

		/*int count;
		cartPtr = cartStart;
		while (cartPtr != NULL) {
			cartPtr->flag = 0;
			cartPtr = cartPtr->nextItem;
		}
		cartPtr = cartStart;
		//count++;
		printf("\t\tCART\nName\t\tPrice(RS)\tQuantity\n");
		while (cartPtr != NULL) {
			if (cartPtr->flag == 0) {
				count = 1;
				cartPtr1 = cartPtr;
				cartPtr->flag = 1;
				while (cartPtr1 != NULL) {
					if (strcmp(cartPtr->nam, cartPtr1->nam)==0 && cartPtr1->flag == 0) {
						cartPtr1->flag = 1;
						count++;
					}
					cartPtr1 = cartPtr1->nextItem;
				}
				printf("%s\t\t%d\t\t%d\n", cartPtr->nam, cartPtr->price, count);
			}
			cartPtr = cartPtr->nextItem;
		}*/
	}
}
void checkOut() {
	if (cartQuantity == 0) {
		printf("Cart is empty\n");
	}
	else {
		newOrder = (struct myOrders*)malloc(sizeof(struct myOrders));
		newOrder->order = cartStart;
		orderQuantity++;
		cartStart = NULL;
		if (orderStart == NULL) {
			orderStart = newOrder;
			orderStart->nextOrder = NULL;
		}
		else {
			newOrder->nextOrder = orderStart;
			orderStart = newOrder;
		}
		printf("Your Order has been placed\n");
		cartQuantity = 0;
	}
}
void displayMyOrders() {
	if (orderStart == NULL) {
		printf("No orders placed\n");
	}
	else {
		orderPtr = orderStart;
		int orderNumber = 0;
		while (orderPtr != NULL) {
			orderNumber++;
			printf("\t\t%d ORDER\nName\t\tPrice(RS)\tQuantity\n", orderNumber);
			cartPtr = orderPtr->order;
			while (cartPtr != NULL) {
				printf("%s\t\t%d\t\t%d\n", cartPtr->nam, cartPtr->price, cartPtr->quan);
				cartPtr = cartPtr->nextItem;
			}
			orderPtr = orderPtr->nextOrder;
		}
	}
	/*else {
		orderPtr = orderStart;
		int orderNumber = 0;
		while (orderPtr != NULL) {
			orderNumber++;
			int count;
			cartPtr = orderPtr->order;
			while (cartPtr != NULL) {
				cartPtr->flag = 0;
				cartPtr = cartPtr->nextItem;
			}
			cartPtr = orderPtr->order;
			//count++;
			printf("\t\t%d ORDER\nName\t\tPrice(RS)\tQuantity\n",orderNumber);
			while (cartPtr != NULL) {
				if (cartPtr->flag == 0) {
					count = 1;
					cartPtr1 = cartPtr;
					cartPtr->flag = 1;
					while (cartPtr1 != NULL) {
						if (strcmp(cartPtr->nam, cartPtr1->nam) == 0 && cartPtr1->flag == 0) {
							cartPtr1->flag = 1;
							count++;
						}
						cartPtr1 = cartPtr1->nextItem;
					}
					printf("%s\t\t%d\t\t%d\n", cartPtr->nam, cartPtr->price, count);
				}
				cartPtr = cartPtr->nextItem;
			}
			orderPtr = orderPtr->nextOrder;
		}
	}*/
}
void removeCart() {
	int srno, count=0,removeQuantity;
	printf("Enter the Sr. number you want to remove\n");
	scanf("%d", &srno);
	if (srno > cartQuantity) {
		printf("Item do not exists\n");
	}
	else {
		cartPtr = cartStart;
		count++;
		//printf("#");
		while (count != srno) {
			cartPtr1 = cartPtr;
			cartPtr = cartPtr->nextItem;
			count++;
		}
		printf("Enter quantity of item you want to remove(MAX - %d)\n",cartPtr->quan);
		scanf("%d", &removeQuantity);
		if (removeQuantity > cartPtr->quan) {
			printf("You want to remove more number of items than added\n");
		}
		else if(removeQuantity==cartPtr->quan){
			cartPtr1->nextItem = cartPtr->nextItem;
			free(cartPtr);
		}
		else {
			cartPtr->quan -= removeQuantity;
		}
	}
}
void main() {
	setUp();
	ptr = start;
	int flag = 1;
	while (flag!=0) {
		int choice1,choice2,choice3,choice4,choice5,i,count1,count2,count3,count4,count5;
		printf("HomePage\n1.Category\n2.Cart\n3.My Orders\n4.Exit\n");
		scanf("%d", &choice1);
		ptr1 = start;
		ptr1 = ptr1->nextChild;
		count1 = 1;
		while (count1 != choice1) {
			ptr1 = ptr1->nextSibling;
			count1++;
		}
		switch (choice1) {
		case 1:
			choice2 = 1;
			while (choice2 != 0) {
				ptr2 = ptr1->nextChild;
				printf("Category\n1.Electronics\n2.Sports\n3.Home Furniture\n4.Back\n");
				scanf("%d", &choice2);
				count2 = 1;
				while (count2 != choice2) {
					ptr2 = ptr2->nextSibling;
					count2++;
				}
				switch (choice2) {
				case 1:
					choice3 = 1;
					while(choice3!=0){
						ptr3 = ptr2->nextChild;
						printf("Electronics\n1.Mobile\n2.TV\n3.Speaker\n4.Back\n");
						scanf("%d", &choice3);
						count3 = 1;
						while (count3 != choice3) {
							ptr3 = ptr3->nextSibling;
							count3++;
						}
						ptr4 = ptr3;
						switch (choice3) {
						case 1:
							printf("Mobile Phone\nPrice - 8000rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							while (choice4 != 0) {
								switch (choice4) {
								case 1:
									addToCart();

								case 2:
									choice4 = 0;
									break;
								}
							}
							break;
						case 2:
							printf("TV\nPrice - 20000rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							while (choice4 != 0) {
								switch (choice4) {
								case 1:
									addToCart();

								case 2:
									choice4 = 0;
									break;
								}
							}
							break;
						case 3:
							printf("Speaker\nPrice - 3000rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							while (choice4 != 0) {
								switch (choice4) {
								case 1:
									addToCart();

								case 2:
									choice4 = 0;
									break;
								}
							}
							break;
						case 4:
							choice3 = 0;
							break;
						}
					}
					break;
				case 2:
					choice3 = 1;
					while (choice3 != 0){
						ptr3 = ptr2->nextChild;
						printf("Sports\n1.Badminton\n2.Cricket\n3.Football\n4.Back\n");
						scanf("%d", &choice3);
						count3 = 1;
						while (count3 != choice3) {
							ptr3 = ptr3->nextSibling;
							count3++;
						}
						switch (choice3) {
						case 1:
							choice5 = 1;
							while (choice5 != 0) {
								ptr4 = ptr3->nextChild;
								printf("Badminton\n1.Badminton Racket\n2.Badminton Shoes\n3.Badminton KitBag\n4.Back\n");
								scanf("%d", &choice5);
								count5 = 1;
								while (count5 != choice5) {
									ptr4 = ptr4->nextSibling;
									count5++;
								}
								switch (choice5) {
								case 1:
									printf("Badminton Racket\nPrice - 3000rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 2:
									printf("Badminton Shoes\nPrice - 2000rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 3:
									printf("Badminton KitBag\nPrice - 3000rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 4:
									choice5=0;
									break;
								}
							}
							
							break;
						case 2:
							choice5 = 1;
							while (choice5 != 0) {
								ptr4 = ptr3->nextChild;
								printf("Cricket\n1.Bat\n2.Ball\n3.Stumps\n4.Back\n");
								scanf("%d", &choice5);
								count5 = 1;
								while (count5 != choice5) {
									ptr4 = ptr4->nextSibling;
									count5++;
								}
								switch (choice5) {
								case 1:
									printf("Bat\nPrice - 300rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 2:
									printf("Ball\nPrice - 100rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 3:
									printf("Stumps\nPrice - 500rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 4:
									choice5 = 0;
									break;
								}
							}
							
							break;
						case 3:
							choice5 = 1;
							while (choice5 != 0) {
								ptr4 = ptr3->nextChild;
								printf("Football\n1.Football\n2.Football Shoes\n3.Shocks\n4.Back\n");
								scanf("%d", &choice5);
								count5 = 1;
								while (count5 != choice5) {
									ptr4 = ptr4->nextSibling;
									count5++;
								}
								switch (choice5) {
								case 1:
									printf("Football\nPrice - 1500rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 2:
									printf("Football Shoes\nPrice - 2000rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 3:
									printf("Shocks\nPrice - 300rs\n");
									printf("Menu\n1.Add to Cart\n2.Back\n");
									scanf("%d", &choice4);
									switch (choice4) {
									case 1:
										addToCart();

									case 2:
										break;
									}
									break;
								case 4:
									choice5 = 0;
									break;
								}
							}
							
							break;
						case 4:
							choice3 = 0;
							break;
						}
					}
					break;
				case 3:
					choice3 = 1;
					while (choice3 != 0) {
						ptr3 = ptr2->nextChild;
						printf("Home Furniture\n1.Table\n2.Chair\n3.Sofa\n4.Back\n");
						scanf("%d", &choice3);
						count3 = 1;
						while (count3 != choice3) {
							ptr3 = ptr3->nextSibling;
							count3++;
						}
						ptr4 = ptr3;
						switch (choice3) {
						case 1:
							printf("Table\nPrice - 800rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							switch (choice4) {
							case 1:
								addToCart();

							case 2:
								break;
							}
							break;
						case 2:
							printf("Chair\nPrice - 200rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							switch (choice4) {
							case 1:
								addToCart();

							case 2:
								break;
							}
							break;
						case 3:
							printf("Sofa\nPrice - 3000rs\n");
							printf("Menu\n1.Add to Cart\n2.Back\n");
							scanf("%d", &choice4);
							switch (choice4) {
							case 1:
								addToCart();

							case 2:
								break;
							}
							break;
						case 4:
							choice3=0;
						}
					}
					break;
				case 4:
					choice2 = 0;
				}
				
			}
			break;
		case 2:
			ptr2 = ptr1->nextChild;
			//printf("Cart\n");
			displayCart();
			printf("1.Remove\n2.CheckOut\n3.Back\n");
			scanf("%d", &choice2);
			switch (choice2) {
			case 1:
				removeCart();
				break;
			case 2:
				checkOut();
				goto myorder;
				break;
			case 3:
				break;
			}
			break;
		case 3:
		myorder:
			ptr2 = ptr1->nextChild;
			printf("MyOrders\n");
			displayMyOrders();
			printf("1.Back\n");
			scanf("%d", &choice2);
			switch (choice2) {
			case 1:
				break;
			}
			break;
		case 4:
			flag=0;
			break;
		}
	}
}