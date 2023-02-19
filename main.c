#include <stdio.h>

#include <libprql_lib.h>

int main() {
    char *prql_query;
    prql_query = "from albums | select [album_id, title] | take 3";

    char sql_query[256];
    to_sql(prql_query, sql_query);

    printf("%s", sql_query);
    return 0;
}
