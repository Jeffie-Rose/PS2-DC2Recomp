#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SaveMapInfo__Fi
// Address: 0x2c50c0 - 0x2c517c
void SaveMapInfo__Fi_0x2c50c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SaveMapInfo__Fi_0x2c50c0");
#endif

    switch (ctx->pc) {
        case 0x2c50d8u: goto label_2c50d8;
        case 0x2c50ecu: goto label_2c50ec;
        case 0x2c50f4u: goto label_2c50f4;
        case 0x2c5118u: goto label_2c5118;
        case 0x2c5120u: goto label_2c5120;
        case 0x2c512cu: goto label_2c512c;
        case 0x2c5138u: goto label_2c5138;
        case 0x2c5140u: goto label_2c5140;
        case 0x2c5158u: goto label_2c5158;
        default: break;
    }

    ctx->pc = 0x2c50c0u;

    // 0x2c50c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c50c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c50c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c50c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c50c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c50cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c50d0: 0xc064220  jal         func_190880
    ctx->pc = 0x2C50D0u;
    SET_GPR_U32(ctx, 31, 0x2C50D8u);
    ctx->pc = 0x2C50D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50D0u;
            // 0x2c50d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50D8u; }
        if (ctx->pc != 0x2C50D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50D8u; }
        if (ctx->pc != 0x2C50D8u) { return; }
    }
    ctx->pc = 0x2C50D8u;
label_2c50d8:
    // 0x2c50d8: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2c50d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2c50dc: 0x24451a18  addiu       $a1, $v0, 0x1A18
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x2c50e0: 0x2484d2c8  addiu       $a0, $a0, -0x2D38
    ctx->pc = 0x2c50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955720));
    // 0x2c50e4: 0xc049c18  jal         func_127060
    ctx->pc = 0x2C50E4u;
    SET_GPR_U32(ctx, 31, 0x2C50ECu);
    ctx->pc = 0x2C50E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C50E4u;
            // 0x2c50e8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ECu; }
        if (ctx->pc != 0x2C50ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50ECu; }
        if (ctx->pc != 0x2C50ECu) { return; }
    }
    ctx->pc = 0x2C50ECu;
label_2c50ec:
    // 0x2c50ec: 0xc064220  jal         func_190880
    ctx->pc = 0x2C50ECu;
    SET_GPR_U32(ctx, 31, 0x2C50F4u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50F4u; }
        if (ctx->pc != 0x2C50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C50F4u; }
        if (ctx->pc != 0x2C50F4u) { return; }
    }
    ctx->pc = 0x2C50F4u;
label_2c50f4:
    // 0x2c50f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c50f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2c50f8: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x2c50f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2c50fc: 0x3463c5b4  ori         $v1, $v1, 0xC5B4
    ctx->pc = 0x2c50fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50612);
    // 0x2c5100: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2c5100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c5104: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c5104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c5108: 0x14200017  bnez        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C5108u;
    {
        const bool branch_taken_0x2c5108 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5108u;
            // 0x2c510c: 0xa7839d1c  sh          $v1, -0x62E4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941980), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5108) {
            ctx->pc = 0x2C5168u;
            goto label_2c5168;
        }
    }
    ctx->pc = 0x2C5110u;
    // 0x2c5110: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5110u;
    SET_GPR_U32(ctx, 31, 0x2C5118u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5118u; }
        if (ctx->pc != 0x2C5118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5118u; }
        if (ctx->pc != 0x2C5118u) { return; }
    }
    ctx->pc = 0x2C5118u;
label_2c5118:
    // 0x2c5118: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5118u;
    SET_GPR_U32(ctx, 31, 0x2C5120u);
    ctx->pc = 0x2C511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5118u;
            // 0x2c511c: 0x24511a18  addiu       $s1, $v0, 0x1A18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5120u; }
        if (ctx->pc != 0x2C5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5120u; }
        if (ctx->pc != 0x2C5120u) { return; }
    }
    ctx->pc = 0x2C5120u;
label_2c5120:
    // 0x2c5120: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x2c5120u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5124: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5124u;
    SET_GPR_U32(ctx, 31, 0x2C512Cu);
    ctx->pc = 0x2C5128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5124u;
            // 0x2c5128: 0xa4431a1c  sh          $v1, 0x1A1C($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6684), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C512Cu; }
        if (ctx->pc != 0x2C512Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C512Cu; }
        if (ctx->pc != 0x2C512Cu) { return; }
    }
    ctx->pc = 0x2C512Cu;
label_2c512c:
    // 0x2c512c: 0x24511a18  addiu       $s1, $v0, 0x1A18
    ctx->pc = 0x2c512cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6680));
    // 0x2c5130: 0xc0b141c  jal         func_2C5070
    ctx->pc = 0x2C5130u;
    SET_GPR_U32(ctx, 31, 0x2C5138u);
    ctx->pc = 0x2C5134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5130u;
            // 0x2c5134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5070u;
    if (runtime->hasFunction(0x2C5070u)) {
        auto targetFn = runtime->lookupFunction(0x2C5070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5138u; }
        if (ctx->pc != 0x2C5138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDngMapNo__Fi_0x2c5070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5138u; }
        if (ctx->pc != 0x2C5138u) { return; }
    }
    ctx->pc = 0x2C5138u;
label_2c5138:
    // 0x2c5138: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5138u;
    SET_GPR_U32(ctx, 31, 0x2C5140u);
    ctx->pc = 0x2C513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5138u;
            // 0x2c513c: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5140u; }
        if (ctx->pc != 0x2C5140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5140u; }
        if (ctx->pc != 0x2C5140u) { return; }
    }
    ctx->pc = 0x2C5140u;
label_2c5140:
    // 0x2c5140: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2c5140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2c5144: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2c5144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2c5148: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x2c5148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2c514c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c514cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5150: 0xc064220  jal         func_190880
    ctx->pc = 0x2C5150u;
    SET_GPR_U32(ctx, 31, 0x2C5158u);
    ctx->pc = 0x2C5154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5150u;
            // 0x2c5154: 0xa7829d1c  sh          $v0, -0x62E4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941980), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5158u; }
        if (ctx->pc != 0x2C5158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5158u; }
        if (ctx->pc != 0x2C5158u) { return; }
    }
    ctx->pc = 0x2C5158u;
label_2c5158:
    // 0x2c5158: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2c5158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2c515c: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x2c515cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
    // 0x2c5160: 0x411821  addu        $v1, $v0, $at
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x2c5164: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2c5164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2c5168:
    // 0x2c5168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c516c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c516cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5170: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5174: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5174u;
            // 0x2c5178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C517Cu;
}
