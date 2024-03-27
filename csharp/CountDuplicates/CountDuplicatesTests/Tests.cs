namespace CountDuplicates.CountDuplicatesTests;

[TestFixture]
public class Tests
{
    [SetUp]
    public void Setup()
    {
    }

    [Test]
    public void TestZeroDuplicates()
    {
        Assert.That(0,Is.EqualTo(Kata.CountDupes("")));
        Assert.That(0, Is.EqualTo(Kata.CountDupes("abcde")));
    }

    [Test]
    public void TestDuplicates()
    {
        Assert.That(2, Is.EqualTo(Kata.CountDupes("aabbcde")));
    }

    [Test]
    public void TestIgnoreCase()
    {
        Assert.That(2, Is.EqualTo(Kata.CountDupes("aabBcde")), "Ignore case");
    }

    [Test]
    public void TestNotAdjacent()
    {
        Assert.That(1, Is.EqualTo(Kata.CountDupes("Indivisibility")));
        Assert.That(2, Is.EqualTo(Kata.CountDupes("Indivisibilities")), "Characters may not be adjacent");
    }
}