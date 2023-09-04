// vi: set ts=4 sw=4 :
// vim: set tw=75 :

// games.h - list of supported game mods and their data

/*
 * Copyright (c) 2001-2013 Will Day <willday@hpgx.net>
 *
 *    This file is part of Metamod.
 *
 *    Metamod is free software; you can redistribute it and/or modify it
 *    under the terms of the GNU General Public License as published by the
 *    Free Software Foundation; either version 2 of the License, or (at
 *    your option) any later version.
 *
 *    Metamod is distributed in the hope that it will be useful, but
 *    WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with Metamod; if not, write to the Free Software Foundation,
 *    Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *    In addition, as a special exception, the author gives permission to
 *    link the code of this program with the Half-Life Game Engine ("HL
 *    Engine") and Modified Game Libraries ("MODs") developed by Valve,
 *    L.L.C ("Valve").  You must obey the GNU General Public License in all
 *    respects for all of the code used other than the HL Engine and MODs
 *    from Valve.  If you modify this file, you may extend this exception
 *    to your version of the file, but you are not obligated to do so.  If
 *    you do not wish to do so, delete this exception statement from your
 *    version.
 *
 */

 // This list is now kept in a separate file to facilitate generating the
 // list from game data stored in a convenient db.

// __MODARCH__ is defined as a UDL in game_support.cpp

#if defined _MSC_VER && _MSC_VER < 1900

#if defined(__x86_64__) || defined(__amd64__)
#  define __MODARCH__ "_amd64"
#else
#  define __MODARCH__ "_i386"
#endif

#endif

	{"action",            "ahl"__MODARCH__".so",          "ahl.dll",           "Action Half - Life"},
	{"ag",                "ag"__MODARCH__".so",           "ag.dll",            "Adrenaline Gamer Steam"},
	{"ag3",               "hl"__MODARCH__".so",           "hl.dll",            "Adrenalinegamer 3.x"},
	{"aghl",              "ag"__MODARCH__".so",           "ag.dll",            "Adrenalinegamer 4.x"},
	{"arg",               "arg"__MODARCH__".so",          "hl.dll",            "Arg!"},
	{"asheep",            "hl"__MODARCH__".so",           "hl.dll",            "Azure Sheep"},
	{"hcfrenzy",          "hcfrenzy.so",              "hcfrenzy.dll",      "Headcrab Frenzy" },
	{"bdef",              "../cl_dlls/server.so",     "../cl_dlls/server.dll", "Base Defense [Modification]" },
	{"bdef",              "server.so",                     "server.dll",        "Base Defense [Steam Version]" },
	{"bg",                "bg"__MODARCH__".so",           "bg.dll",            "The Battle Grounds"},
	{"bhl",               "none",                     "bhl.dll",           "Brutal Half-Life" },
	{"bot",               "bot"__MODARCH__".so",          "bot.dll",           "Bot"},
	{"brainbread",        "bb"__MODARCH__".so",           "bb.dll",            "BrainBread"},
	{"bumpercars",        "hl"__MODARCH__".so",           "hl.dll",            "Bumper Cars"},
	{"buzzybots",         "bb"__MODARCH__".so",           "bb.dll",            "BuzzyBots"},
	{"ckf3",              "none",                     "mp.dll",            "Chicken Fortress 3" },
	{"cs13",              "cs"__MODARCH__".so",           "mp.dll",            "Counter-Strike 1.3"},
	{"cstrike",           "cs"__MODARCH__".so",           "mp.dll",            "Counter-Strike"},
	{"csv15",             "cs"__MODARCH__".so",           "mp.dll",            "CS 1.5 for Steam"},
	{"czero",             "cs"__MODARCH__".so",           "mp.dll",            "Counter-Strike:Condition Zero"},
	{"dcrisis",           "dc"__MODARCH__".so",           "dc.dll",            "Desert Crisis"},
	{"dmc",               "dmc"__MODARCH__".so",          "dmc.dll",           "Deathmatch Classic"},
	{"dod",               "dod"__MODARCH__".so",          "dod.dll",           "Day of Defeat"},
	{"dpb",               "pb.i386.so",               "pb.dll",            "Digital Paintball"},
	{"dragonmodz",        "hl"__MODARCH__".so",           "mp.dll",            "Dragon Mod Z"},
	{"esf",               "hl"__MODARCH__".so",           "hl.dll",            "Earth's Special Forces"},
	{"existence",         "ex"__MODARCH__".so",           "existence.dll",     "Existence"},
	{"firearms",          "fa"__MODARCH__".so",           "firearms.dll",      "Firearms"},
	{"firearms25",        "fa"__MODARCH__".so",           "firearms.dll",      "Retro Firearms"},
	{"freeze",            "mp"__MODARCH__".so",           "mp.dll",            "Freeze"},
	{"frontline",         "front"__MODARCH__".so",        "frontline.dll",     "Frontline Force"},
	{"gangstawars",       "gangsta"__MODARCH__".so",      "gwars27.dll",       "Gangsta Wars"},
	{"gangwars",          "mp"__MODARCH__".so",           "mp.dll",            "Gangwars"},
	{"gearbox",           "opfor"__MODARCH__".so",        "opfor.dll",         "Opposing Force"},
	{"globalwarfare",     "gw"__MODARCH__".so",           "mp.dll",            "Global Warfare"},
	{"goldeneye",         "golden"__MODARCH__".so",       "mp.dll",            "Goldeneye"},
	{"hl15we",            "hl"__MODARCH__".so",           "hl.dll",            "Half-Life 1.5: Weapon Edition"},
	{"HLAinGOLDSrc",      "none",                     "hl.dll",            "Half-Life Alpha in GOLDSrc"},
	{"hlrally",           "hlr"__MODARCH__".so",          "hlrally.dll",       "HL-Rally"},
	{"holywars",          "hl"__MODARCH__".so",           "holywars.dll",      "Holy Wars"},
	{"hostileintent",     "hl"__MODARCH__".so",           "hl.dll",            "Hostile Intent"},
	{"ios",               "ios"__MODARCH__".so",          "ios.dll",           "International Online Soccer"},
	{"judgedm",           "judge"__MODARCH__".so",        "mp.dll",            "Judgement"},
	{"kanonball",         "hl"__MODARCH__".so",           "kanonball.dll",     "Kanonball"},
	{"monkeystrike",      "ms"__MODARCH__".so",           "monkey.dll",        "Monkeystrike"},
	{"MorbidPR",          "morbid"__MODARCH__".so",       "morbid.dll",        "Morbid Inclination"},
	{"movein",            "hl"__MODARCH__".so",           "hl.dll",            "Move In!"},
	{"msc",               "none",                     "ms.dll",            "Master Sword Continued" },
	{"ns",                "ns"__MODARCH__".so",           "ns.dll",            "Natural Selection"},
	{"nsp",               "ns"__MODARCH__".so",           "ns.dll",            "Natural Selection Beta"},
	{"oel",               "hl"__MODARCH__".so",           "hl.dll",            "OeL Half-Life"},
	{"og",                "og"__MODARCH__".so",           "og.dll",            "Over Ground"},
	{"ol",                "ol"__MODARCH__".so",           "hl.dll",            "Outlawsmod"},
	{"ops1942",           "spirit"__MODARCH__".so",       "spirit.dll",        "Operations 1942"},
	{"osjb",              "osjb"__MODARCH__".so",         "jail.dll",          "Open-Source Jailbreak"},
	{"outbreak",          "none",                     "hl.dll",            "Out Break"},
	{"oz",                "mp"__MODARCH__".so",           "mp.dll",            "Oz Deathmatch"},
	{"paintball",         "pb"__MODARCH__".so",           "mp.dll",            "Paintball"},
	{"penemy",            "pe"__MODARCH__".so",           "pe.dll",            "Public Enemy"},
	{"phineas",           "phineas"__MODARCH__".so",      "phineas.dll",       "Phineas Bot"},
	{"ponreturn",         "ponr"__MODARCH__".so",         "mp.dll",            "Point of No Return"},
	{"pvk",               "hl"__MODARCH__".so",           "hl.dll",            "Pirates, Vikings and Knights"},
	{"rc2",               "rc2"__MODARCH__".so",          "rc2.dll",           "Rocket Crowbar 2"},
	{"recbb2",            "recb"__MODARCH__".so",         "recb.dll",          "Resident Evil : Cold Blood" },
	{"retrocs",           "rcs"__MODARCH__".so",          "rcs.dll",           "Retro Counter-Strike"},
	{"rewolf",            "hl"__MODARCH__".so",           "gunman.dll",        "Gunman Chronicles"},
	{"ricochet",          "ricochet"__MODARCH__".so",     "mp.dll",            "Ricochet"},
	{"rockcrowbar",       "rc"__MODARCH__".so",           "rc.dll",            "Rocket Crowbar"},
	{"rspecies",          "hl"__MODARCH__".so",           "hl.dll",            "Rival Species"},
	{"scihunt",           "shunt.so",                 "shunt.dll",         "Scientist Hunt"},
	{"sdm",               "sdmmod"__MODARCH__".so",       "sdmmod.dll",        "Special Death Match"},
	{"Ship",              "ship"__MODARCH__".so",         "ship.dll",          "The Ship"},
	{"si",                "si"__MODARCH__".so",           "si.dll",            "Science & Industry"},
	{"snow",              "snow"__MODARCH__".so",         "snow.dll",          "Snow-War"},
	{"stargatetc",        "hl"__MODARCH__".so",           "hl.dll",            "StargateTC"},
	{"svencoop",          "hl"__MODARCH__".so",           "hl.dll",            "Sven Coop [Modification]" },
	{"svencoop",          "server.so",                "server.dll",        "Sven Coop [Steam Version]" },
	{"swarm",             "swarm"__MODARCH__".so",        "swarm.dll",         "Swarm"},
	{"tfc",               "tfc"__MODARCH__".so",          "tfc.dll",           "Team Fortress Classic"},
	{"thewastes",         "thewastes"__MODARCH__".so",    "thewastes.dll",     "The Wastes"},
	{"timeless",          "pt"__MODARCH__".so",           "timeless.dll",      "Project Timeless"},
	{"tod",               "hl"__MODARCH__".so",           "hl.dll",            "Tour of Duty"},
	{"trainhunters",      "th"__MODARCH__".so",           "th.dll",            "Train Hunters"},
	{"trevenge",          "trevenge.so",              "trevenge.dll",      "The Terrorist Revenge"},
	{"TS",                "ts"__MODARCH__".so",           "mp.dll",            "The Specialists"},
	{"tt",                "tt"__MODARCH__".so",           "tt.dll",            "The Trenches"},
	{"underworld",        "uw"__MODARCH__".so",           "uw.dll",            "Underworld Bloodline"},
	{"valve",             "hl"__MODARCH__".so",           "hl.dll",            "Half-Life Deathmatch"},
	{"vs",                "vs"__MODARCH__".so",           "mp.dll",            "VampireSlayer"},
	{"wantedhl",          "hl"__MODARCH__".so",           "wanted.dll",        "Wanted!"},
	{"wasteland",         "whl_linux.so",             "mp.dll",            "Wasteland"},
	{"weapon_wars",       "ww"__MODARCH__".so",           "hl.dll",            "Weapon Wars"},
	{"wizwars",           "mp"__MODARCH__".so",           "hl.dll",            "Wizard Wars"},
	{"wormshl",           "wormshl_i586.so",          "wormshl.dll",       "WormsHL"},
	{"zp",                "none",                     "mp.dll",            "Zombie Panic"},