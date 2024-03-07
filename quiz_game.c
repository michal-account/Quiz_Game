#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_QUESTION 128
#define MAX_ANSWER 64
#define TOTAL_QUESTIONS 10

typedef struct {
    char question[MAX_QUESTION];
    char answerA[MAX_ANSWER];
    char answerB[MAX_ANSWER];
    char answerC[MAX_ANSWER];
    char correct_answer;
} quiz_question;

int main(void)
{
    quiz_question quiz[TOTAL_QUESTIONS];

    strcpy(quiz[0].question, "Which of the following is not a valid C variable name?");
    strcpy(quiz[0].answerA, "int number;");
    strcpy(quiz[0].answerB, "float rate;");
    strcpy(quiz[0].answerC, "int $main;");
    quiz[0].correct_answer = 'C';

    strcpy(quiz[1].question, "All keywords in C are in ____________");
    strcpy(quiz[1].answerA, "LowerCase letters");
    strcpy(quiz[1].answerB, "CamelCase letters");
    strcpy(quiz[1].answerC, "None of the mentioned");
    quiz[1].correct_answer = 'A';

    strcpy(quiz[2].question, "Which of the following is true for variable names in C?");
    strcpy(quiz[2].answerA, "It is not an error to declare a variable to be one of the keywords(like goto, static)");
    strcpy(quiz[2].answerB, "Variable names cannot start with a digit");
    strcpy(quiz[2].answerC, "Variable can be of any length");
    quiz[2].correct_answer = 'B';

    strcpy(quiz[3].question, "Which is valid C expression?");
    strcpy(quiz[3].answerA, "int my_num = 100000;");
    strcpy(quiz[3].answerB, "int my num = 1000;");
    strcpy(quiz[3].answerC, "int my_num = 100,000;");
    quiz[3].correct_answer = 'A';

    strcpy(quiz[4].question, "Which of the following cannot be a variable name in C?");
    strcpy(quiz[4].answerA, "volatile");
    strcpy(quiz[4].answerB, "true");
    strcpy(quiz[4].answerC, "export");
    quiz[4].correct_answer = 'A';

    strcpy(quiz[5].question, "Which of the following declaration is not supported by C language?");
    strcpy(quiz[5].answerA, "char *str;");
    strcpy(quiz[5].answerB, "String str;");
    strcpy(quiz[5].answerC, "float str = 3e2;");
    quiz[5].correct_answer = 'B';

    strcpy(quiz[6].question, "Which keyword is used to prevent any changes in the variable within a C program?");
    strcpy(quiz[6].answerA, "const");
    strcpy(quiz[6].answerB, "volatile");
    strcpy(quiz[6].answerC, "immutable");
    quiz[6].correct_answer = 'A';

    strcpy(quiz[7].question, "What is the result of logical or relational expression in C?");
    strcpy(quiz[7].answerA, "True or False");
    strcpy(quiz[7].answerB, "0 or 1");
    strcpy(quiz[7].answerC, "0 if an expression is false and any positive number if an expression is true");
    quiz[7].correct_answer = 'B';

    strcpy(quiz[8].question, "Where in C the order of precedence of operators do not exist?");
    strcpy(quiz[8].answerA, "None of the mentioned");
    strcpy(quiz[8].answerB, "Within a macro definition");
    strcpy(quiz[8].answerC, "Within conditional statements, if, else");
    quiz[8].correct_answer = 'A';

    strcpy(quiz[9].question, "What is an example of iteration in C?");
    strcpy(quiz[9].answerA, "for");
    strcpy(quiz[9].answerB, "do-while");
    strcpy(quiz[9].answerC, "all of the mentioned");
    quiz[9].correct_answer = 'C';

    double total_correct = 0;
    char answer;

    for (int i = 0; i < TOTAL_QUESTIONS; i++)
    {
        printf("Question %d: %s\n\n", (i+1), quiz[i].question);
        printf("A) %s\n", quiz[i].answerA);
        printf("B) %s\n", quiz[i].answerB);
        printf("C) %s\n", quiz[i].answerC);
        printf("\nEnter Answer (A, B, C): ");

        scanf(" %c", &answer);

        if (toupper(answer) == quiz[i].correct_answer)
        {
            total_correct++;
            printf("\n\nCorrect Answer!");
        }
        else
        {
            printf("\n\nIncorrect Answer!");
            printf("\n\nThe correct answer was %c.", quiz[i].correct_answer);
        }

        printf("\n\n\n");
    }

    printf("%d/%d questions answered correctly", (int) total_correct, TOTAL_QUESTIONS);

    printf(" (%.2f%%) \n\n", ((total_correct / TOTAL_QUESTIONS) * 100));
}
