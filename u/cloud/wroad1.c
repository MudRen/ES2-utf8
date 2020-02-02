// Room: /u/cloud/wroad1.c

inherit ROOM;

void create()
{
        set("short", "绮云镇街道");
        set("long", @LONG
东边青板石铺的路与向西的碎石小径在这里汇合。西面仿佛是座庄
院，似可听到曲乐声，却又分辨不清; 南面是家私塾。 
LONG
        );
        set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"bookstore",
  "west" : __DIR__"wroad0",
  "east" : __DIR__"wroad2",
]));
        set("outdoors", "cloud");

        setup();
        replace_program(ROOM);
}

