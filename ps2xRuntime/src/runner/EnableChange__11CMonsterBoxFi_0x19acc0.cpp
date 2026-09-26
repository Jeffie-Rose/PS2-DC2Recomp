#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EnableChange__11CMonsterBoxFi
// Address: 0x19acc0 - 0x19ad28
void EnableChange__11CMonsterBoxFi_0x19acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnableChange__11CMonsterBoxFi_0x19acc0");
#endif

    switch (ctx->pc) {
        case 0x19acd8u: goto label_19acd8;
        case 0x19acf4u: goto label_19acf4;
        case 0x19ad0cu: goto label_19ad0c;
        default: break;
    }

    ctx->pc = 0x19acc0u;

    // 0x19acc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19acc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19acc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19acc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19acc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19accc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19acccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acd0: 0xc066b10  jal         func_19AC40
    ctx->pc = 0x19ACD0u;
    SET_GPR_U32(ctx, 31, 0x19ACD8u);
    ctx->pc = 0x19ACD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACD0u;
            // 0x19acd4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19AC40u;
    if (runtime->hasFunction(0x19AC40u)) {
        auto targetFn = runtime->lookupFunction(0x19AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACD8u; }
        if (ctx->pc != 0x19ACD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiData__11CMonsterBoxFi_0x19ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACD8u; }
        if (ctx->pc != 0x19ACD8u) { return; }
    }
    ctx->pc = 0x19ACD8u;
label_19acd8:
    // 0x19acd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19acd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19acdc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x19ACDCu;
    {
        const bool branch_taken_0x19acdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19acdc) {
            ctx->pc = 0x19AD14u;
            goto label_19ad14;
        }
    }
    ctx->pc = 0x19ACE4u;
    // 0x19ace4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ace8: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x19ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19acec: 0xc0ad768  jal         func_2B5DA0
    ctx->pc = 0x19ACECu;
    SET_GPR_U32(ctx, 31, 0x19ACF4u);
    ctx->pc = 0x19ACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19ACECu;
            // 0x19acf0: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5DA0u;
    if (runtime->hasFunction(0x2B5DA0u)) {
        auto targetFn = runtime->lookupFunction(0x2B5DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF4u; }
        if (ctx->pc != 0x19ACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_default_monster_progresstbl__Fi_0x2b5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19ACF4u; }
        if (ctx->pc != 0x19ACF4u) { return; }
    }
    ctx->pc = 0x19ACF4u;
label_19acf4:
    // 0x19acf4: 0x2625ffff  addiu       $a1, $s1, -0x1
    ctx->pc = 0x19acf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x19acf8: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x19acf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x19acfc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19acfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ad00: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19ad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19ad04: 0xc0ad708  jal         func_2B5C20
    ctx->pc = 0x19AD04u;
    SET_GPR_U32(ctx, 31, 0x19AD0Cu);
    ctx->pc = 0x19AD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD04u;
            // 0x19ad08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5C20u;
    if (runtime->hasFunction(0x2B5C20u)) {
        auto targetFn = runtime->lookupFunction(0x2B5C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD0Cu; }
        if (ctx->pc != 0x19AD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        get_monster_tbl_bajjilevel__FPiiii_0x2b5c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AD0Cu; }
        if (ctx->pc != 0x19AD0Cu) { return; }
    }
    ctx->pc = 0x19AD0Cu;
label_19ad0c:
    // 0x19ad0c: 0x87a30030  lh          $v1, 0x30($sp)
    ctx->pc = 0x19ad0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ad10: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x19ad10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_19ad14:
    // 0x19ad14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19ad14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ad18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ad18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ad1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ad1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ad20: 0x3e00008  jr          $ra
    ctx->pc = 0x19AD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19AD20u;
            // 0x19ad24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19AD28u;
}
