void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

void input(float *base,float *height)
{
    printf("enter the height of the triangle: ");
    scanf("%f",height);
    printf("enter the base of the traingle :");
    scanf("%f",base);

}

void find_area(float base , float height, float *area)
{
    *area=(base*height)/2;

}

void output(float base, float height, float area)
{
    printf("the are of triangle is :",area);
}

int main()
{
    float base ,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;

}