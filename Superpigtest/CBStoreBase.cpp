/*
 *  CBStoreBase.h
 *  CloudBox Cross-Platform Framework Project
 *
 *  Created by Cloud on 2012/11/3.
 *  Copyright 2012 Cloud Hsu. All rights reserved.
 *
 */

#include "CBStoreBase.h"
#include "CBStoreManager.h"

CBNoneStore::CBNoneStore()
{
    
}
CBNoneStore::~CBNoneStore()
{
    
}
void CBNoneStore::buy(const string& buyProductTag)
{
    // none store always transit successful.
    SStoreManager.completeTransaction(const_cast<string&>(buyProductTag));
}

bool CBNoneStore::isCanBuy()
{
    return true;
}

void CBNoneStore::initialStore()
{
    // nothing to do
}

void CBNoneStore::releaseStore()
{
    // nothing to do
}

void CBNoneStore::restoreCompletedTransactions()
{
    
}