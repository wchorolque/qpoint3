#include <QString>
#include <QtTest>

class Point3Test : public QObject
{
    Q_OBJECT
    
public:
    Point3Test();
    
private Q_SLOTS:
    void testCase1();
    void testCase1_data();
};

Point3Test::Point3Test()
{
}

void Point3Test::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

void Point3Test::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

QTEST_APPLESS_MAIN(Point3Test)

#include "tst_point3test.moc"
