#include <stdio.h>

// Define a struct to store a user's name and age
struct Person {
    char name[50];
    int age;
};


// function to ask the user's name
void nameUser(char name[]) {
    printf("What\'s your name? \n");
    scanf("%s", name);
}
// function to ask the user's age
void ageUser(int *age) {
    printf("What\'s your age? \n");
    scanf("%d", age);
}

// This function will return a value instead of printing, so we can use the result elsewhere
// function to calculate the sum
int sumAge(struct Person people[], int users) {
    int sum = 0;
    int i;
    for (i = 0; i < users; i++) {
        sum += people[i].age;
    } return sum;
}
// function to calculate the average
float aveAge(struct Person people[], int users) {
        int sum = sumAge(people, users);
        return (float) sum / users;
    }


int main () {
    int users;
    int i = 0;
    int sum;
    float ave;

    printf("How many people are registering? \n");
    scanf("%d", &users);

    // create array to store all users
    struct Person people[users];

    while (i < users) {
        nameUser(people[i].name);
        ageUser(&people[i].age);
        i++;
    }

    printf("Users: \n");
    for (i = 0; i < users; i++) {
        printf("User: %s | Age: %d \n", people[i].name, people[i].age);
    }

    ave = aveAge(people, users);
    sum = sumAge(people, users);

    printf("Average age: %.2f \n", ave);
    printf("Sum of the ages: %d \n", sum);

    printf("Goodbye! It was nice to meet you! xx");

return 0;
}