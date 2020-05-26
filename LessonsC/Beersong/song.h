char* strings[] = {"бутылок", "бутылка", "бутылки"};

char * check_word(int i)
{
    if (i >= 11 && i <= 19)
        {
            return strings[0];
        }
    else if(i % 10 == 1)
        {
            return strings[1];
        }
    else if((i % 10) == 2 ||  (i % 10) == 3 || (i % 10) == 4)
        {
            return strings[2];
        }
    else
        {
            return strings[0];

        }

}
