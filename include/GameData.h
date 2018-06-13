#ifndef GAMEDATA
#define GAMEDATA

#define MAINMENU_BACKGROUND "assets/img/Menu/main_menu.png"
#define MAINMENU_PLAY_BUTTON_NOTPRESSED "assets/img/Menu/play_button_notpressed.png"
#define MAINMENU_PLAY_BUTTON_PRESSED "assets/img/Menu/play_button_pressed.png"
#define MAINMENU_EXIT_BUTTON_NOTPRESSED "assets/img/Menu/exit_button_notpressed.png"
#define MAINMENU_EXIT_BUTTON_PRESSED "assets/img/Menu/exit_button_pressed.png"
#define MAINMENU_OPTIONS_BUTTON_NOTPRESSED "assets/img/Menu/options_button_notpressed.png"
#define MAINMENU_OPTIONS_BUTTON_PRESSED "assets/img/Menu/options_button_pressed.png"
#define MAINMENU_CURSOR "assets/img/Menu/pointer.png"

#define MAINMENU_BACKGROUNDMUSIC_INTRO "assets/audio/Musics/TemadaFlorestaIntro.ogg"
#define MAINMENU_BACKGROUNDMUSIC_LOOP "assets/audio/Musics/TemadaFlorestaLoop.ogg"

#define OPTIONS_BACKGROUND "assets/img/Menu/options_menu.png"
#define OPTIONS_BACK_BUTTON_NOTPRESSED "assets/img/Menu/back_button_notpressed.png"
#define OPTIONS_BACK_BUTTON_PRESSED "assets/img/Menu/back_button_pressed.png"

#define PLATFORM_TYPE1 "assets/map/Platform.txt"
#define COLUMN_TYPE1 "assets/map/Column.txt"
#define COLUMN_TYPE2 "assets/map/Column2.txt"

#define HUD_ACID_ICON "assets/img/FristPlane/Acid.png"
#define HUD_ACID_COOLDOWN_ICON "assets/img/FristPlane/Acid_cooldown.png"
#define HUD_DASH_ICON "assets/img/FristPlane/Dash.png"
#define HUD_DASH_COOLDOWN_ICON "assets/img/FristPlane/Dash_cooldown.png"
#define HUD_SHIT_ICON "assets/img/FristPlane/Shit.png"
#define HUD_SHIT_COOLDOWN_ICON "assets/img/FristPlane/Shit_cooldown.png"
#define HUD_FLY_ICON "assets/img/FristPlane/Wings.png"
#define HUD_FLY_COOLDOWN_ICON "assets/img/FristPlane/Wings_cooldown.png"
#define HUD_HEALTHBAR "assets/img/FristPlane/Life.png"


#define PROTAGONIST_IDLE_ANIMATION "assets/img/Beetle/Fightpose.png"
#define PROTAGONIST_RUN_ANIMATION "assets/img/Beetle/Run_sprite_.png"
#define PROTAGONIST_JUMP_ANIMATION "assets/img/Beetle/Jump Beetle.png"
#define PROTAGONIST_SHITBALL_ANIMATION "assets/img/Beetle/PooAttack.png"
#define PROTAGONIST_ACID_ANIMATION "assets/img/Beetle/Acid.png"
#define PROTAGONIST_PUNCH_ANIMATION "assets/img/Beetle/Punch_spritesheet.png"
#define PROTAGONIST_DEATH_ANIMATION "assets/img/Beetle/Death.png"
#define PROTAGONIST_FLY_ANIMATION "assets/img/Beetle/Flying.png"
#define PROTAGONIST_GETHURT_ANIMATION "assets/img/Beetle/Dano.png"
#define PROTAGONIST_DEATH_SOUND "assets/audio/Sounds/Morrendo 2.wav"
#define PROTAGONIST_ACID_SOUND "assets/audio/Sounds/Acido.wav"
#define PROTAGONIST_PUNCH_SOUND "assets/audio/Sounds/Soco.wav"
#define PROTAGONIST_SHIT_SOUND "assets/audio/Sounds/Atirando Bosta 1 (Sem Efeitos).wav"

#define STAGE1_BACKGROUND "assets/img/Background/BG1.png"
#define STAGE1_TILESET "assets/img/Background/TitleSet1.png"
#define STAGE1_BACKGROUNDMUSIC_INTRO "assets/audio/Musics/TemadaFlorestaIntro.ogg"
#define STAGE1_BACKGROUNDMUSIC_LOOP "assets/audio/Musics/TemadaFlorestaLoop.ogg"

#define STAGE1_GROUND_ENEMY_IDLE_ANIMATION "assets/img/GroundEnemy1/Louva-God.png"
#define STAGE1_GROUND_ENEMY_RUN_ANIMATION "assets/img/GroundEnemy1/LouvaRun.png"
#define STAGE1_GROUND_ENEMY_PUNCH_ANIMATION "assets/img/GroundEnemy1/Punch Louvagod_spritesheet.png"
#define STAGE1_GROUND_ENEMY_JUMP_ANIMATION "assets/img/GroundEnemy1/Jumping.png"
#define STAGE1_GROUND_ENEMY_DEATH_ANIMATION "assets/img/GroundEnemy1/Enemy death.png"
#define STAGE1_GROUND_ENEMY_GETHURT_ANIMATION "assets/img/GroundEnemy1/Enemy hit.png"
#define STAGE1_GROUND_ENEMY_ATTACK_SOUND "assets/audio/Sounds/Ataque Louva-Deus 1.wav"

#define STAGE1_FLYING_ENEMY_IDLE_ANIMATION "assets/img/FlyingEnemy1/RedFly.png"
#define STAGE1_FLYING_ENEMY_ATTACK_ANIMATION "assets/img/FlyingEnemy1/AttackRed.png"
#define STAGE1_FLYING_ENEMY_DEATH_ANIMATION "assets/img/FlyingEnemy1/RedGodDeath.png"
#define STAGE1_FLYING_ENEMY_BULLET_ANIMATION "assets/img/FlyingEnemy1/FireRed.png"

#define STAGE1_BOSS_IDLE_ANIMATION "assets/img/Grande Sapo.png"
#define STAGE1_BOSS_BACKGROUND "assets/img/Background/Boss1.png"
#define STAGE1_BOSS_BACKGROUNDMUSIC_INTRO "assets/audio/Musics/TemaBossIntro.ogg"
#define STAGE1_BOSS_BACKGROUNDMUSIC_LOOP "assets/audio/Musics/TemaBossLoop.ogg"


class Protagonist;

class GameData{
	public:
		GameData();
		~GameData();
		static bool playerVictory;
		static Protagonist* Player;

};
#endif
