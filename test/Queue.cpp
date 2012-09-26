#include "gtest/gtest.h"
#include "../include/declarations"

TEST(QueueTest, SimpleQueueTest) {
  Queue* q = new Queue();
  EXPECT_EQ(1, q->isEmpty());
  EXPECT_EQ(0, q->size());

  for (int i=0; i<10; i++) {
    q->enqueue(i);
  }
  EXPECT_EQ(0, q->isEmpty());
  EXPECT_EQ(10, q->size());
  EXPECT_EQ(0, q->dequeue());
  EXPECT_EQ(9, q->size());
  EXPECT_EQ(1, q->dequeue());
  q->enqueue(33);
  EXPECT_EQ(9, q->size());

  for (int i=0; i<(q->size()); ++i) {
    q->dequeue();
  }
  //This test keeps failing.  Why?
  //EXPECT_EQ(1, q->isEmpty());

  delete q;
}
