#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFishingRecord__Ff
// Address: 0x2fa8c0 - 0x2fa9fc
void CheckFishingRecord__Ff_0x2fa8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFishingRecord__Ff_0x2fa8c0");
#endif

    switch (ctx->pc) {
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8fcu: goto label_2fa8fc;
        case 0x2fa918u: goto label_2fa918;
        case 0x2fa934u: goto label_2fa934;
        case 0x2fa96cu: goto label_2fa96c;
        case 0x2fa9c8u: goto label_2fa9c8;
        case 0x2fa9d4u: goto label_2fa9d4;
        default: break;
    }

    ctx->pc = 0x2fa8c0u;

    // 0x2fa8c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2fa8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2fa8c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fa8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2fa8c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2fa8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2fa8cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2fa8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2fa8d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fa8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fa8d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2fa8d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fa8d8: 0xc08ca98  jal         func_232A60
    ctx->pc = 0x2FA8D8u;
    SET_GPR_U32(ctx, 31, 0x2FA8E0u);
    ctx->pc = 0x2FA8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8D8u;
            // 0x2fa8dc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x232A60u;
    if (runtime->hasFunction(0x232A60u)) {
        auto targetFn = runtime->lookupFunction(0x232A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8E0u; }
        if (ctx->pc != 0x2FA8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetSaveDataDungeon__Fv_0x232a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8E0u; }
        if (ctx->pc != 0x2FA8E0u) { return; }
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fa8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa8e4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA8E4u;
    {
        const bool branch_taken_0x2fa8e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8E4u;
            // 0x2fa8e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8e4) {
            ctx->pc = 0x2FA8F4u;
            goto label_2fa8f4;
        }
    }
    ctx->pc = 0x2FA8ECu;
    // 0x2fa8ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2FA8ECu;
    {
        const bool branch_taken_0x2fa8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA8ECu;
            // 0x2fa8f0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8ec) {
            ctx->pc = 0x2FA9E4u;
            goto label_2fa9e4;
        }
    }
    ctx->pc = 0x2FA8F4u;
label_2fa8f4:
    // 0x2fa8f4: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x2FA8F4u;
    SET_GPR_U32(ctx, 31, 0x2FA8FCu);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8FCu; }
        if (ctx->pc != 0x2FA8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA8FCu; }
        if (ctx->pc != 0x2FA8FCu) { return; }
    }
    ctx->pc = 0x2FA8FCu;
label_2fa8fc:
    // 0x2fa8fc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2fa8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa900: 0x24500014  addiu       $s0, $v0, 0x14
    ctx->pc = 0x2fa900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2fa904: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2fa904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2fa908: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fa90c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2fa90cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2fa910: 0xc0bdc7c  jal         func_2F71F0
    ctx->pc = 0x2FA910u;
    SET_GPR_U32(ctx, 31, 0x2FA918u);
    ctx->pc = 0x2FA914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA910u;
            // 0x2fa914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA918u; }
        if (ctx->pc != 0x2FA918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA918u; }
        if (ctx->pc != 0x2FA918u) { return; }
    }
    ctx->pc = 0x2FA918u;
label_2fa918:
    // 0x2fa918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa920: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2fa920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fa924: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fa928: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2fa92c: 0xc0be768  jal         func_2F9DA0
    ctx->pc = 0x2FA92Cu;
    SET_GPR_U32(ctx, 31, 0x2FA934u);
    ctx->pc = 0x2FA930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA92Cu;
            // 0x2fa930: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9DA0u;
    if (runtime->hasFunction(0x2F9DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F9DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA934u; }
        if (ctx->pc != 0x2FA934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapFloorInfo__16CDngFloorManagerFi_0x2f9da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA934u; }
        if (ctx->pc != 0x2FA934u) { return; }
    }
    ctx->pc = 0x2FA934u;
label_2fa934:
    // 0x2fa934: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA934u;
    {
        const bool branch_taken_0x2fa934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA934u;
            // 0x2fa938: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa934) {
            ctx->pc = 0x2FA944u;
            goto label_2fa944;
        }
    }
    ctx->pc = 0x2FA93Cu;
    // 0x2fa93c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA93Cu;
    {
        const bool branch_taken_0x2fa93c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa93c) {
            ctx->pc = 0x2FA94Cu;
            goto label_2fa94c;
        }
    }
    ctx->pc = 0x2FA944u;
label_2fa944:
    // 0x2fa944: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2FA944u;
    {
        const bool branch_taken_0x2fa944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA944u;
            // 0x2fa948: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa944) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA94Cu;
label_2fa94c:
    // 0x2fa94c: 0x82320017  lb          $s2, 0x17($s1)
    ctx->pc = 0x2fa94cu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    // 0x2fa950: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA950u;
    {
        const bool branch_taken_0x2fa950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA950u;
            // 0x2fa954: 0x3c0242c8  lui         $v0, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa950) {
            ctx->pc = 0x2FA960u;
            goto label_2fa960;
        }
    }
    ctx->pc = 0x2FA958u;
    // 0x2fa958: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2FA958u;
    {
        const bool branch_taken_0x2fa958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA958u;
            // 0x2fa95c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa958) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA960u;
label_2fa960:
    // 0x2fa960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2fa960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa964: 0xc0a248c  jal         func_289230
    ctx->pc = 0x2FA964u;
    SET_GPR_U32(ctx, 31, 0x2FA96Cu);
    ctx->pc = 0x2FA968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA964u;
            // 0x2fa968: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA96Cu; }
        if (ctx->pc != 0x2FA96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA96Cu; }
        if (ctx->pc != 0x2FA96Cu) { return; }
    }
    ctx->pc = 0x2FA96Cu;
label_2fa96c:
    // 0x2fa96c: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA96Cu;
    {
        const bool branch_taken_0x2fa96c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2FA970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA96Cu;
            // 0x2fa970: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa96c) {
            ctx->pc = 0x2FA988u;
            goto label_2fa988;
        }
    }
    ctx->pc = 0x2FA974u;
    // 0x2fa974: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x2fa974u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fa978: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x2fa978u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2fa97c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA97Cu;
    {
        const bool branch_taken_0x2fa97c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA97Cu;
            // 0x2fa980: 0x12082a  slt         $at, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa97c) {
            ctx->pc = 0x2FA98Cu;
            goto label_2fa98c;
        }
    }
    ctx->pc = 0x2FA984u;
    // 0x2fa984: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa988:
    // 0x2fa988: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2fa988u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2fa98c:
    // 0x2fa98c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FA98Cu;
    {
        const bool branch_taken_0x2fa98c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa98c) {
            ctx->pc = 0x2FA9A8u;
            goto label_2fa9a8;
        }
    }
    ctx->pc = 0x2FA994u;
    // 0x2fa994: 0x86230018  lh          $v1, 0x18($s1)
    ctx->pc = 0x2fa994u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2fa998: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x2fa998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fa99c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA99Cu;
    {
        const bool branch_taken_0x2fa99c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa99c) {
            ctx->pc = 0x2FA9A8u;
            goto label_2fa9a8;
        }
    }
    ctx->pc = 0x2FA9A4u;
    // 0x2fa9a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2fa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa9a8:
    // 0x2fa9a8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FA9A8u;
    {
        const bool branch_taken_0x2fa9a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9A8u;
            // 0x2fa9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9a8) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA9B0u;
    // 0x2fa9b0: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x2fa9b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x2fa9b4: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2fa9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2fa9b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FA9B8u;
    {
        const bool branch_taken_0x2fa9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9B8u;
            // 0x2fa9bc: 0x34620020  ori         $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9b8) {
            ctx->pc = 0x2FA9DCu;
            goto label_2fa9dc;
        }
    }
    ctx->pc = 0x2FA9C0u;
    // 0x2fa9c0: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x2FA9C0u;
    SET_GPR_U32(ctx, 31, 0x2FA9C8u);
    ctx->pc = 0x2FA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9C0u;
            // 0x2fa9c4: 0xa602000e  sh          $v0, 0xE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9C8u; }
        if (ctx->pc != 0x2FA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9C8u; }
        if (ctx->pc != 0x2FA9C8u) { return; }
    }
    ctx->pc = 0x2FA9C8u;
label_2fa9c8:
    // 0x2fa9c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa9cc: 0xc0677dc  jal         func_19DF70
    ctx->pc = 0x2FA9CCu;
    SET_GPR_U32(ctx, 31, 0x2FA9D4u);
    ctx->pc = 0x2FA9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9CCu;
            // 0x2fa9d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DF70u;
    if (runtime->hasFunction(0x19DF70u)) {
        auto targetFn = runtime->lookupFunction(0x19DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9D4u; }
        if (ctx->pc != 0x2FA9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddYarikomiMedal__16CUserDataManagerFi_0x19df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FA9D4u; }
        if (ctx->pc != 0x2FA9D4u) { return; }
    }
    ctx->pc = 0x2FA9D4u;
label_2fa9d4:
    // 0x2fa9d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FA9D4u;
    {
        const bool branch_taken_0x2fa9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9D4u;
            // 0x2fa9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9d4) {
            ctx->pc = 0x2FA9E0u;
            goto label_2fa9e0;
        }
    }
    ctx->pc = 0x2FA9DCu;
label_2fa9dc:
    // 0x2fa9dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fa9dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa9e0:
    // 0x2fa9e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fa9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fa9e4:
    // 0x2fa9e4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2fa9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fa9e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2fa9e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fa9ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2fa9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fa9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fa9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fa9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA9F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FA9F4u;
            // 0x2fa9f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FA9FCu;
}
