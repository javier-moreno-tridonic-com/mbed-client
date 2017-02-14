/*
 * Copyright (c) 2015 ARM Limited. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
//CppUTest includes should be after your and system includes
#include "CppUTest/TestHarness.h"
#include "test_uriqueryparser.h"

TEST_GROUP(UriQueryParser)
{
    Test_UriQueryParser* parser;

    void setup()
    {
        parser = new Test_UriQueryParser();
    }

    void teardown()
    {
        delete parser;
    }
};

TEST(UriQueryParser, create)
{
    CHECK(parser != NULL);
}

TEST(UriQueryParser, test_query_string)
{
    parser->test_query_string();
}

TEST(UriQueryParser, test_query_param_count)
{
    parser->test_query_param_count();
}

TEST(UriQueryParser, test_uri_query_parameters)
{
    parser->test_uri_query_parameters();
}

