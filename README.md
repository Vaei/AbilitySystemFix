# AbilitySystemFix
This fixes an engine bug where UAbilitySystemComponent uses blend out override if its >= 0 instead of >0, but it defaults to 0 and you can't change it, so it always has 0 blend out time.

You only need to inherit your own `UAbilitySystemComponent` from this one, or just use this one if not deriving. That's all. Now blend out for montages played via GAS will work.
