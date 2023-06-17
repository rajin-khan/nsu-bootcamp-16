#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    double triArea, ansTri, inRad, inArea, ansIn, outRad, outArea, ansOut, s;

    cin >> a >> b >> c;

    s = a+b+c;

    triArea = sqrt(((s-a)*(s-b)*(s-c))/s);

    inRad = (2*triArea)/(a+b+c);
    inArea = M_PI*inRad*inRad;

    outRad = (a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
    outArea = M_PI*outRad*outRad;

    ansIn = inArea;
    ansTri = triArea-inArea;
    ansOut = outArea-triArea;

    cout << fixed << setprecision(4) << ansOut << " " << ansTri << " " << ansIn << endl;

    return 0;
}