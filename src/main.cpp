#include <Geode/Geode.hpp>
#include <Geode/modify/CreatorLayer.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/binding/CreatorLayer.hpp>
#include <Geode/cocos/cocoa/CCObject.h>
using namespace geode::prelude;


class $modify(MyCreatorLayer, CreatorLayer) {
	bool init() {
		if (!CreatorLayer::init()) {
			return false;
		}

		log::info("1");
		auto TaleButton = CCMenuItemSpriteExtra::create(
			CCSprite::createWithSpriteFrameName("diffIcon_01_btn_001.png"),
			this,
			menu_selector(MyCreatorLayer::onTaleButton)
		);

		auto menu = this->getChildByID("top-right-menu");
		
		if (!menu) {
    		log::error("top-right-menu not found");
    		return true;
		}
		menu->addChild(TaleButton);

		TaleButton->setID("my-button"_spr);

		
		menu->updateLayout();

		TaleButton->setPositionY(TaleButton->getPositionY() - 40.f);
		
		return true;
	}

	void onTaleButton(CCObject*) {
		int backgroundColor = 2;
auto dialogLines = CCArray::create();
log::info("2");

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"<cg>Joe Metri Dash</c> was a man born in 1814",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He was an <cg> Entertainer</c> from Kingdom of Prussia",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He was also  the inspiration of<cg> Geometry Dash</c> ",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He had a square head and he was Joe Metri because it sounded like <cg>Geometry </c> ",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"In 1851 Great Grandfather of Robtop Topala inprisoned <cg>Joe Metri Dash </c> ",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He forced him to <cg>jump over spikes for entertairment</c>",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He forced him to <cg>jump over spikes for entertairment</c> in Italy Rome",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"The Shopkeeper",
	"Wasn't he also in <cg>Sweden, German Empire, Austria-Hungary And in other countries?</c>",
	29, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"<cy>Yes he was!</c>",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"Diamond Shopkeeper",
	"This is <cr>FAKE!</c>",
	48, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"The Shopkeeper",
	"<cr>SHUT UP! AND LET HIM CONTINUE!</c> Gosh",
	30, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"Diamond Shopkeeper",
	"<cx>OKAY!</c> Geez",
	48, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"The last stage of the show was <cy>The Nightmare</c>",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He completed it but he <cx>wasn't freed....</c>",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"RubRub",
	"He died around <cy>1881 of August</c> because he fell and spikes <cr>impaled him</c> the end.",
	28, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"The Shopkeeper",
	"Oh wow so he was tortured",
	5, 1.0f, false, ccWHITE
));

dialogLines->addObject(DialogObject::create(
	"The Shopkeeper",
	"It was cool to listen!",
	5, 1.0f, false, ccWHITE
));

DialogLayer* dialog = DialogLayer::createWithObjects(dialogLines, backgroundColor);
if (!dialog) {
    log::error("Dialog creation failed!");
    return;
}
dialog->updateChatPlacement(DialogChatPlacement::Center);

dialog->animateInRandomSide();
		dialog->addToMainScene();
	}
};


class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}


		auto InfoButton = CCMenuItemSpriteExtra::create(
			CCSprite::createWithSpriteFrameName("GJ_infoBtn_001.png"),
			this,
			menu_selector(MyMenuLayer::onInfoButton)
		);

		auto menu2 = this->getChildByID("right-side-menu");

		if (!menu2) {
    		log::error("top-right-menu not found");
    		return true;
		}
		menu2->addChild(InfoButton);


		InfoButton->setID("my-button-info"_spr);

		menu2->updateLayout();

		return true;
	}

	void onInfoButton(CCObject*) {
		FLAlertLayer::create("The Joe Metri Dash Tale", "This GD Has Joe Metri Dash Tale Mod Installed", "OK")->show();
	}
};