#include <stdio.h>

int main(void)
{
    int i, ticket_count, count=2;
    int H_b_ticket_count, H_n_ticket_count, F_b_ticket_count, F_n_ticket_count, S_b_ticket_count, S_n_ticket_count;
    char movie, ticket_type;

    H_b_ticket_count = H_n_ticket_count = F_b_ticket_count = F_n_ticket_count = S_b_ticket_count = S_n_ticket_count = 0;
    FILE *ptr;

    ptr = fopen("ticket.txt", "w");

    if(ptr == NULL)
    {
        printf("file can't be open");
        return -1;
    }

    for (i = 0; i < count; i++)
    {
        printf("Enter movie name (H/F/S): ");
        scanf(" %c", &movie);

        printf("Enter ticket type (B/N): ");
        scanf(" %c", &ticket_type);

        printf("Enter number of tickets: ");
        scanf("%d", &ticket_count);

        fprintf(ptr, "%c%c%d\n", movie, ticket_type, ticket_count);
        puts(""); // break line
    }

    fclose(ptr);

    puts(""); // break line
    

    FILE *ptr_r;

    ptr_r = fopen("ticket.txt", "r");
    
    if(ptr == NULL)
    {
        printf("file can't be open");
        return -1;
    }

    fscanf(ptr_r, " %c %c %d", &movie, &ticket_type, &ticket_count);
    while (!(feof(ptr_r)))
    {
        printf("%c %c %d\n", movie, ticket_type, ticket_count);
        fscanf(ptr_r, " %c %c %d", &movie, &ticket_type, &ticket_count);

        switch (movie)
        {
        case 'H':
            if (ticket_type == 'B')
            {
                H_b_ticket_count += ticket_count;
            }
            else if(ticket_type == 'N')
            {
                H_n_ticket_count += ticket_count;
            }
            
            break;
        case 'F':
            if (ticket_type == 'B')
            {
                F_b_ticket_count += ticket_count;
            }
            else if(ticket_type == 'N')
            {
                F_n_ticket_count += ticket_count;
            }
            break;
        case 'S':
            if (ticket_type == 'B')
            {
                S_b_ticket_count += ticket_count;
            }
            else if(ticket_type == 'N')
            {
                S_n_ticket_count += ticket_count;
            }
            break;
        default:
            break;
        }
    }

    printf("Harry Portor\n");
    printf("\tBalcony\t- %d\n", H_b_ticket_count);
    printf("\tNormal\t- %d\n", H_n_ticket_count);
    printf("Frozon-II\n");
    printf("\tBalcony\t- %d\n", F_b_ticket_count);
    printf("\tNormal\t- %d\n", F_n_ticket_count);
    printf("Sherlock Homes\n");
    printf("\tBalcony\t- %d\n", S_b_ticket_count);
    printf("\tNormal\t- %d\n", S_n_ticket_count);
    
    
    return 0;
}
