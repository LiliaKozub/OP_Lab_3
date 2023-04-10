class Point{
    int x;
    int y;
    int z;
public:
    Point();
    Point(int valueX, int valueY, int valueZ);
    ~Point();
    void SetPoint(int valueX, int valueY, int valueZ);
    int GetX();
    int GetY();
    int GetZ();
    bool isInFirstOctant();
};
