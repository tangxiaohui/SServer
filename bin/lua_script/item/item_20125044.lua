--方砖&傻馒魂魄礼包(联盟拿方砖，部落拿傻馒		

local item_group={
20234014,--方砖魂魄
20234010,--傻馒魂魄
}

function x001550_LuaCreateItem(player,item_data,config)
	return ResultCode_ResultOK
end

--添加到背包时候用，create之前，实际上这种道具没有创建实体，只是用来触发一段逻辑
function x001550_LuaAutoUse(player,config,count)
	return ResultCode_UnknownError
end

function x001550_LuaUseItem(player,item_data,config,target)

	if config:id() ~=20125044 then	
		return ResultCode_UnknownError
	end	
		
	--背包检查
	if player:BagLeftCapacity(ContainerType_Layer_ItemBag,1) == false then
		return ResultCode_BagIsFull
	end	
	
	if player:DelItemById(config:id(), 1, ItemDelLogType_DelType_UseItem, config:id()) == false then
		return ResultCode_CostItemNotEnough
	end
	
	local seed = player:GetCamp()+1
	player:AddItemByIdWithNotify(item_group[seed],20,ItemAddLogType_AddType_UseItem,config:id(),1)
	
	return ResultCode_ResultOK
end