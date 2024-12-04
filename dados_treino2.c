typedef struct  {
        int x;
        int y;
} Ponto ;

typedef struct {
        Ponto pt1;
        Ponto pt2;
        Ponto pt3;
} Triangulo ;

int main() {

    Triangulo t;
    printf("1° ponta do triangulo {x,y}: ");
    scanf("%d %d", &t.pt1.x, &t.pt1.y);
    printf("2° ponta do triangulo {x,y}: ");
    scanf("%d %d", &t.pt2.x, &t.pt2.y);
    printf("3° ponta do triangulo {x,y}: ");
    scanf("%d %d", &t.pt3.x, &t.pt3.y);

    printf("cantos do triangulo: {%d,%d} {%d,%d} {%d,%d}",t.pt1.x, t.pt1.y, t.pt2.x, t.pt2.y, t.pt3.x, t.pt3.y);
       return 0;
}
