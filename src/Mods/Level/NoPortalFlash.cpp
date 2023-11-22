#include "../../CrystalClient/CrystalClient.hpp"
#include <Geode/modify/PlayLayer.hpp>

using namespace CrystalClient;

class $modify(PlayLayer) {
    void lightningFlash(cocos2d::CCPoint uh, cocos2d::CCPoint cp, cocos2d::_ccColor3B color, float f1, float f2, int i1, bool b1, float f3) {
        if (!getSavedVar<bool>("no_portal_flash")) {
			PlayLayer::lightningFlash(uh, cp, color, f1, f2, i1, b1, f3);
		}
    }

	void lightningFlash(cocos2d::CCPoint cp, cocos2d::_ccColor3B color) {
        if (!getSavedVar<bool>("no_portal_flash")) {
			PlayLayer::lightningFlash(cp, color);
		}
    }
};