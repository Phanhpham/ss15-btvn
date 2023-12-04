 #include<stdio.h>
// // int main(){


// // struct Book
// // {
// //     int id;
// //     char name[50];
// //     char author[20];
// //     int price;
// // };
// // struct Book book1 = {1, "harry porter", "j.k.rowling", 100};
// // struct Book book2 = {2, "lorf of the rings", "j.r.r.tolkien", 130};
// // struct Book book3 = {3, "aragon", "christopher paolini", 140};
// // struct Book book4 = {4," a song of ice and fire","george r.r .martin",200};

// // //  struct Sudent{
// // //     int id;
// // //     char name[50];
// // //      int age;
// // //     char phone[12];
// // //      char address[50];
// // //  };

// // // struct Student sv1 = {1, "Đuc cớp", 40, "098888888", "Bai rác"};
// // // // id của sv1,name của sv1......
// // // printf("mã sinh vien của sv1 la %d\n", sv1.id);
// // // printf("ten sv1 la %s\n", sv1.name);
// // // printf("sv1 ơ %s\n", sv1.address);

// // // struct Student sv2 = {2, "Truong tồn", 70, "099999999", "Gam cầu"};
// // // // id của sv2,name của sv2.....
// // // printf("mã sinh vien của sv2 la %d\n", sv2.id);
// // // printf("ten sv2 la %s\n", sv2.name);
// // // printf("sv2 ơ %s\n", sv2.address);
// // // struct Student sv3 = {3, "Thái em", 50, "123456789", "Chuông chó"};
// // // // id của sv3,name của sv3.....
// // // printf("sv3 hien tai dang %d tuoi \n", sv3, age);
// // // sv3.age = 90;
// // // printf("sv3 sau sinh nhat dang %d tuoi\n", sv3.age);
// // // printf("sv3 dang o %s\n", sv3.address);
// // // strcpy(sv3.address, "chuong lon");
// // // printf("sv3 sau khi chuyen nha, dang o &s\n", sv3.address);

// // // struct Book book1 = {
// // //     4,
// // //     "Eragon";
// // //     "Christopher paolini";
// // //     140
// // // };

// // // struct Book book2,book3;

// // // book2 = book1;
// // // memcpy(&book3,&book1,sizeof(struct Book));

// // // printf("Book 2's name = %s\n",book2.name);//eragon
// // // printf("Book 3's name = %s\n",book3.name);//eragon

// // struct Student {
// //     int id;
// //     char name[50];
// //     int age;
// //     char phone[12];
// //     struct Address address;
// // };

// // struct Student sv100;
// // sv100.id = 1;
// // strcpy(sv100.name,"sac don");
// // sv100.age = 67;
// // strcpy(sv100.phone,"097777777");
// // struct Address address = {"8","ABC","XYZ","LMN"};
// // sv100.address = address;

// // ("ward nam trong address nam trong sv100 = %s",sv100.address.ward);//ABC



// #include<stdio.h>
// struct student{
//     char name[50];
//     int age;
// };

// // function prototype 
// void display(struct students)
// return 0;
// }struct Student{
struct Student{
    int id;
    char name[50];
};

void displayStudent(struct Student *Student1){
    // struct Student student = {1,"Minh Hoang"};
    printf("Tên sinh vien la %s\n",(*Student1).name);
    printf("id sinh vien la %d\n",(*Student1).id);
}

int main(){
}

struct Student sv1 = {1,"Minh Hoang"};
struct Student sv2 = {2,"Truong Con"};
//
int a = 10;
int *pointerA = &a;
//
struct Student *pointerSv1 = &sv1;

printf("Sinh viên 1 có name = %s\n",(*pointersv1).name);
printf("Sinh viên 1 co id = %d\n",(*pointersv1).id);
displayStudent(&sv1);
return 0;
