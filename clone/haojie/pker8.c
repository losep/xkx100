inherit __DIR__"shashou";

void create()
{
  ::create();
	set("level",8);
	set_name("紫衣杀手", ({"sha shou", "shashou", "zi", "ziyi"}));
	set("long", "他是七杀门的紫衣杀手。\n");
	set("qi", 2000);
	set("max_qi", 2000);
	set("jing", 2000);
	set("max_jing", 2000);
	set("neili", 3000);
	set("max_neili", 3000);
  set("combat_exp", 6000000);
  set("min_kill_exp", 4500000);
  set("base_level",230);
  set("special_level",250);
	set_skill("force",          query("base_level"));
	set_skill("taiji-shengong", query("special_level"));
	set_skill("unarmed",        query("base_level"));
	set_skill("taiji-quan",     query("special_level"));
	set_skill("dodge",          query("base_level"));
	set_skill("tiyunzong",      query("special_level"));
	set_skill("sword",          query("base_level"));
	set_skill("taiji-jian",     query("special_level"));
	set_skill("parry",          query("base_level")); 
	map_skill("force", "taiji-shengong");
	map_skill("unarmed", "taiji-quan");
	map_skill("dodge", "tiyunzong");
	map_skill("parry", "taiji-jian");
	map_skill("sword", "taiji-jian");
  create_family("七杀门", 11-query("level"), "杀手");
}