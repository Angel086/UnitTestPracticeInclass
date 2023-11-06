/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, smoke_test)
{
    ASSERT_TRUE( 1 == 1 );
}
TEST(PasswordTest, single_letter_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}
TEST (PasswordTest, multi_letter_password){
	Password multi_pass ;
	int actual = multi_pass.count_leading_characters("AAA");
	ASSERT_EQ(3, actual);
}
TEST (PasswordTest, mix_password){
	Password mix_passwords;
	int actual = mix_passwords.count_leading_characters("AwAlop21qA");
	ASSERT_EQ(3, actual);
}