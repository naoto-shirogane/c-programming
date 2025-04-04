/*  c8-8.c

    Rafael Bonilla
    April 3, 2025

    C Programming: A Modern Approach, Second Edition
    Chapter 8, Programming Project 8
    
    Modify Programming Project 7 so that it prompts for five quiz grades for each 
    of five students, then computes the total score and average score for each student,
    and the average score, high score, and low score for each quiz.
    
*/

#include <stdio.h>

int main(void)
{
    int rows, cols;

    int quiz_score, student_score,
    highest_quiz, lowest_quiz,
    total_student_score, 
    total_quiz_score;

    printf("How many students are there?: ");
    scanf("%d", &rows);

    printf("How many quizzes will each student have?: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("\n(%d students. %d quizzes.)\n\n", rows, cols);

    /* Gets and prints the student grades */

    for (int i = 0; i < rows; i++) {

        printf("Quiz grade for student n° %d: ", i + 1);

        for (int j = 0; j < cols; j++) {

            scanf("%d", &arr[i][j]);
        }
    }

    /* Computes and prints the student's average and total scores */

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            student_score = arr[i][j];            
            total_student_score += student_score;
        }

        printf("\n- Student number #%d:", i + 1);
        printf("\n\t- Total score: %d", total_student_score);
        printf("\n\t- Average score: %.2f\n", (float) total_student_score / rows);

        total_student_score = 0;
    }

    printf("\n-------------------------------------\n");

    /* Computes and prints the average quiz score */

    for (int j = 0; j < cols; j++) {

        lowest_quiz = arr[0][j]; /* Assumes that the lowest score is the first one we encounter */
        highest_quiz = 0;

        total_quiz_score = 0;

        for (int i = 0; i < rows; i++) {
            
            quiz_score = arr[i][j];

            lowest_quiz = quiz_score < lowest_quiz ? quiz_score : lowest_quiz;
            highest_quiz = quiz_score > highest_quiz ? quiz_score : highest_quiz;

            total_quiz_score += quiz_score;
        }

        printf("\n- Quiz #%d", j + 1);

        printf("\n\t- Average score: %.2f", (float) total_quiz_score / cols);

        printf("\n\t- Lowest quiz score: %d", lowest_quiz);
        printf("\n\t- Highest quiz score: %d\n",  highest_quiz);
    }

    printf("\n");
}    