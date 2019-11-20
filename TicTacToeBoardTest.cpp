/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT */
TEST(TicTacToeBoardTest, sanity) {
	TicTacToeBoard board;
	ASSERT_TRUE(true);
}


TEST(TicTacToeBoardTest, initial_toggleTurnTest)
{
	TicTacToeBoard board;
	ASSERT_EQ(board.toggleTrun(), O);
}

TEST(TicTacToeBoardTest, fromOtoX_toggleTurnTest)
{
	TicTacToeBoard board;
	board.toggleTurn();
	ASSERT_EQ(board.toggleTrun(), X);
}

// comment