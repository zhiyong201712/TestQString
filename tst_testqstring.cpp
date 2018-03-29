#include <QString>
#include <QtTest>

class TestQString : public QObject
{
    Q_OBJECT

public:
    TestQString();

private Q_SLOTS:
    void toUpper();
};

TestQString::TestQString()
{
}

void TestQString::toUpper()
{
    QString str = "Hello";
    QVERIFY(str.toUpper() == "HELLO");
    QVERIFY2(true, "Failure");
}

QTEST_APPLESS_MAIN(TestQString)

#include "tst_testqstring.moc"
