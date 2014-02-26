#include <fstream>
#include <cmath>

const double t1 = -1.0, t2 = -0.5, a = 1.0, b = 1.5;

const double function (double kx, double ky) {
    return 2*t1*cos(kx*a) + 2*t2*cos(ky*b);
}

int main() {
    std::ofstream datafile;
    datafile.open("dat");

    for (double kx = -5; kx < 5.1; kx += 0.1) {
    for (double ky = -5; ky < 5.1; ky += 0.1) {
        datafile << kx << "\t" << ky << "\t" << function(kx, ky) << "\n";
    }
    }

    datafile.close();

    return 0;
}
