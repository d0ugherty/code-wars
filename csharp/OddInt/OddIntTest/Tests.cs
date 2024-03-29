using NUnit.Framework;
using NUnit.Framework.Internal;

namespace OddInt.OddIntTest;

[TestFixture]
public class Tests
{
    [Test]
    public void Test()
    {
        Assert.That(Kata.find_it([20,1,-1,2,-2,3,3,5,5,1,2,4,20,4,-1,-2,5]), Is.EqualTo(5));
    }
}