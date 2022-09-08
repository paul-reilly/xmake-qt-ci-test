#include <QCoreApplication>
#include <QString>

int main(int argc, char *argv[])
{
    auto qs = QString{ "Hello, world!" };
    printf("%s\n", qs.toStdString().c_str());
    return 0;
}
